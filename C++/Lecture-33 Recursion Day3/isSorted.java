public class isSorted{
    public static void main(String args[]){
        int arr[] = {2,4,5,6,7,8};

        int n = arr.length;

        boolean ans = sorted(arr, n);

        if(ans){
            System.out.println("Sorted array");
        }else{
            System.out.println("Unsorted array");
        }
    }
    public static boolean sorted(int arr[], int n){
        if(n == 0 || n==1){
            return true;
        }
        if(arr[0] > arr[1]){
            return false;
        }else{
            boolean remainingPart = sortedhelper(arr, idx+1, n-1);
            return remainingPart;
        }
        return false;
    }
    public static boolean sortedhelper(int arr[], int idx, int n){
        if(idx == n){
            return true;
        }
        return false;
    }
}