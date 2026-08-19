class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,unordered_set<int>>reserved;
        for(auto& seat:reservedSeats){
            int row=seat[0];
            int col=seat[1];
            reserved[row].insert(col);
        }
        int ans=(n-reserved.size())*2;
        for(auto& [row,col]:reserved){
            bool leftFree=!col.count(2)&& !col.count(3)&&!col.count(4)&&!col.count(5);
            bool rightFree=!col.count(6)&& !col.count(7)&&!col.count(8)&&!col.count(9);
            bool midFree=!col.count(6)&& !col.count(7)&&!col.count(4)&&!col.count(5);
            if(leftFree && rightFree){
                ans+=2;
            }else if(leftFree||rightFree||midFree){
                ans+=1;
            }
        }
        return ans;
    }
};