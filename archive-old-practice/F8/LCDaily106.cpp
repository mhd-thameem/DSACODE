class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {

        int m = classroom.size();
        int n = classroom[0].size();

        int startR, startC;

        vector<vector<int>> litterId(m, vector<int>(n, -1));

        int litterCount = 0;

        // Find starting position and assign IDs to litter
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {

                if (classroom[r][c] == 'S') {
                    startR = r;
                    startC = c;
                }

                if (classroom[r][c] == 'L') {
                    litterId[r][c] = litterCount++;
                }
            }
        }

        int targetMask = (1 << litterCount) - 1;

        // State:
        // {row, col, remaining energy, mask, moves}
        queue<array<int, 5>> q;

        q.push({startR, startC, energy, 0, 0});

        /*
            visited[r][c][e][mask]

            To avoid huge memory overhead from vector<bool> dimensions,
            use a set of encoded states.
        */
        unordered_set<long long> visited;

        auto encode = [&](int r, int c, int e, int mask) {
            long long state = r;

            state = state * n + c;
            state = state * (energy + 1) + e;
            state = state * (1 << litterCount) + mask;

            return state;
        };

        visited.insert(encode(startR, startC, energy, 0));

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!q.empty()) {

            auto [r, c, e, mask, moves] = q.front();
            q.pop();

            if (mask == targetMask) {
                return moves;
            }

            for (int d = 0; d < 4; d++) {

                int nr = r + dr[d];
                int nc = c + dc[d];

                // Outside classroom
                if (nr < 0 || nr >= m ||
                    nc < 0 || nc >= n) {
                    continue;
                }

                // Obstacle
                if (classroom[nr][nc] == 'X') {
                    continue;
                }

                // Moving costs 1 energy
                int ne = e - 1;

                if (ne < 0) {
                    continue;
                }

                int nmask = mask;

                // Collect litter
                if (classroom[nr][nc] == 'L') {
                    nmask |= (1 << litterId[nr][nc]);
                }

                // Restore energy
                if (classroom[nr][nc] == 'R') {
                    ne = energy;
                }

                long long state = encode(nr, nc, ne, nmask);

                if (visited.count(state)) {
                    continue;
                }

                visited.insert(state);

                q.push({
                    nr,
                    nc,
                    ne,
                    nmask,
                    moves + 1
                });
            }
        }

        return -1;
    }
};