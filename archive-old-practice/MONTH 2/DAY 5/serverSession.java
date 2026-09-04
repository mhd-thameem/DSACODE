public class serverSession {
    private final String sessionId;
    private String username;
    private static int activeSessionsCount=0;
    private boolean isLoggedIn;
    serverSession(String sessionId,String username){
        this.sessionId=sessionId;
        this.username=username;
        activeSessionsCount++;
        this.isLoggedIn=true;
        
    }
    public void logout(){
        if(this.isLoggedIn){
            activeSessionsCount--;
            isLoggedIn=false;
        }else{
            System.out.println("The system is not Logged in to logout");
        }
    }
    public void setUsername(String username){
        this.username=username;
    }
    public String getSessionId(){
        return this.sessionId;
    }
    public String username(){
        return this.username;
    }
    public static int getActiveSessionsCount(){
        return activeSessionsCount;
    }
    public static void main(String[] args){
    serverSession s=new serverSession("A909","Thammi");
    serverSession s1=new serverSession("A9010","Zammi");
    System.out.println(serverSession.getActiveSessionsCount());
    s.logout();
    s.logout();
    System.out.println(serverSession.getActiveSessionsCount());
}
}

