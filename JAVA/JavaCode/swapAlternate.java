package JAVA.JavaCode;
public class swapAlternate {
    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5};

        swapalternate(arr, arr.length);
    }
    static void swapalternate(int arr[], int n){
        for(int i=0; i<n; i = i+2){
            if(i+1<n){

                int temp;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        for(int i=0; i<n; i++){
            System.out.print(arr[i] + " ");
        }
    }
}
