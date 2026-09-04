import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;

public class SecurityAudit {

    /**
     * Given a list of incoming request logs containing user IDs (with duplicates),
     * return the count of UNIQUE users who made requests.
     */
    public int countUniqueUsers(List<String> userLogins) {
        HashSet<String>uniqueUsers=new HashSet<>();
        for(String s:userLogins){
            if(s!=null){
                uniqueUsers.add(s);
            }
        }return uniqueUsers.size();
    }

    /**
     * Check if a specific user is in a blacklist of banned user IDs.
     * Must execute in O(1) time complexity.
     */
    public boolean isBanned(HashSet<String> bannedList, String userId) {
    // 1. Guard: If the set is null or userId is null, they can't be banned
    if (bannedList == null || userId == null) {
        return false;
    }

    // 2. O(1) existence check
    return bannedList.contains(userId);
}
}