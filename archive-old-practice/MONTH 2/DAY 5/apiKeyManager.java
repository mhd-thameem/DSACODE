class apiKey {
    private final String keyString;
    private int usageCount;
    private final int maxLimit;
    public apiKey(String keyString,int maxLimit){
        this.keyString=keyString;
        this.usageCount=1;
        this.maxLimit=maxLimit;
    }
    public boolean useKey(){
        if(usageCount<maxLimit){
            usageCount++;
            return true;
        }else{
            return false;
        }
    }
    public String getKeyString(){
        return this.keyString;
    }
    public int getUsageCount(){
        return this.usageCount;
    }
}
public class apiKeyManager{
    public static void main(String[] args){
    apiKey a=new apiKey("jcefhch",2);
    for(int i=0;i<3;i++){
        System.out.println(a.useKey());
    }
}
}
