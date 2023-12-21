package JAVA.JavaCode;
public class MoveNegative {
    public static void main(String[] args) {
        int arr[] = {-1, -3, 5,7,-8,9,-6};
        negative(arr, arr.length);


    }
    public static void negative(int arr[], int n){
        int j=0, temp;
        for(int i=0; i<n; i++){
            if(arr[i] <0){
            if(i!=j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
        }
        for(int i=0; i<n; i++){
            System.out.print(arr[i] + " ");
        }
    }
}
