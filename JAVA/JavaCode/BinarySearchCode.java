package JAVA.JavaCode;

public class BinarySearchCode {
 
    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5,6,7,8,9};
        int ans = binaryindex(arr, 8, 7);

        System.out.println(" The ans is " + ans);
        
    }
    public static int binaryindex (int arr[], int n, int key){
        int start = 0;
        int end = n-1;
        

        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid] == key){
                return mid;
                
            }
            if(arr[mid] < key){
                
                 start = mid+1;
            }
            if(arr[mid] > key){
               end = mid-1;
            }
        }
        return -1;
    }

}
