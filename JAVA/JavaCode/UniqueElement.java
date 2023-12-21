package JAVA.JavaCode;

public class UniqueElement {
    public static void main(String[] args) {
        int arr[] = {2,3,4,2,3,4,6};

        int ans = 0;
        for(int i=0; i<arr.length; i++){
            ans = ans^arr[i];   // XOR with the element 
        }
        System.out.println("Unique element is :- " + ans);
    }
}
