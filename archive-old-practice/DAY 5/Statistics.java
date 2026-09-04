public class Statistics {
    public static void main(String[] args){
        int arr[]={12, 45, 7, 23, 56},sum=0,maxi=arr[0];
        for(int i=0;i<5;i++){
            sum+=arr[i];
            if(maxi<arr[i]){
                maxi=arr[i];
            }
        }
        System.out.println("The Sum of the Array is:"+sum);
        System.out.println("The Maximum Element of the Array is:"+maxi);
    }
}
