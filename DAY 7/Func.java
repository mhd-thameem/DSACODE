public class Func {
    static int maximumm(int[]arr){
        int maxi=arr[0];
        for(int i=0;i<arr.length;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }return maxi;
    }
    static int summ(int []arr){
        int total=0;
        for(int i=0;i<arr.length;i++){
            total+=arr[i];
        }return total;
    }
    public static void main(String[] args){
        int arr[]={12, 45, 7, 23, 56};
        int sum=summ(arr);
        int maxi=maximumm(arr);
        System.out.println("The Sum of the Array is:"+sum);
        System.out.println("The Maximum Element of the Array is:"+maxi);
    }
}
