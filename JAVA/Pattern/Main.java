package JAVA.Pattern;

import java.util.Scanner;

/*   
    3 2 1 
    3 2 1 
    3 2 1 

public class Main {
    public static void main(String[] args){
        int n = 3;
        for(int i=0; i<n; i++){
            for(int j =n; j>0;j--){
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}
 */



/*
    1 2 3 
    4 5 6 
    7 8 9 

public class Main {
    public static void main(String[] args){
        int k = 1;
        int n = 3;

        for(int i=0; i<n; i++){
            for(int j = 0; j < n; j++){
                System.out.print(k + " ");
                k++;
            }
            System.out.println();
        }
    }
}
 */

/*
    * 
    * * 
    * * * 
    * * * * 

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for(int i =1; i<=n; i++){
            for(int j = 0; j<i; j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
 */

 /*
 1 
 2 2 
 3 3 3 
 4 4 4 4 

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for(int i=1; i<=n; i++){
            for(int j=0; j<i; j++){
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}

 */

/*
 1 
    2 3 
    4 5 6 
    7 8 9 10 

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = 1;

        for(int i=1; i<=n; i++){
            for(int j = 0; j<i; j++){
                System.out.print(k + " ");
                k++;
            }
            System.out.println();
        }
    }
}

 */

 /*
 1 
 2 3 
 3 4 5 
 4 5 6 7 
 5 6 7 8 9 
public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k;

        for(int i=1; i<=n; i++){
            k = i;
            for(int j = 0; j<i; j++){
                
                System.out.print(k + " ");
                k++;
            }
            System.out.println();
        }
    }
}
 */

/*
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k;

        for(int i=1; i<=n; i++){
            k = i;
            for(int j = 0; j<i; j++){
                System.out.print(k + " ");
                k--;
            }
            System.out.println();
        }
    }
}
 */

/*
A A A 
B B B 
C C C 

 public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        char ch = 'A';

        for(int i=0; i<n; i++){
            for(int j = 0; j<n; j++){
                System.out.print(ch + " ");
            }
            ch++;
            System.out.println();

        }
    }
}
 */

/*

 A B C D E 
 B C D E F 
 C D E F G 
 D E F G H 
 E F G H I 

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i;
        for(i=0; i<n; i++){
            char ch = (char) ('A' + i);
            for(int j=0; j<n; j++){
                System.out.print(ch + " ");
                ch++;
            }

            System.out.println();
        }
    }
}
 */

/*
A 
B B 
C C C 
D D D D 

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        char ch = 'A';
        for(int i=1; i<=n; i++){
            
            for(int j=0; j<i; j++){
                System.out.print(ch + " ");
            }
            ch++;
            System.out.println();
        }
    }
}
 */


/* 
 A 
 B C 
 D E F 
 G H I J 
 K L M N O 

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        char ch = 'A';
        for(int i=1; i<=n; i++){
            
            for(int j=0; j<i; j++){
                System.out.print(ch + " ");
                ch++;
            }
            
            System.out.println();
        }
    }
}
 */

/*
public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
       
        for(int i=1; i<=n; i++){
             char ch = (char)('A' + n-i);
            for(int j=0; j<i; j++){
                System.out.print(ch + " ");
                ch--;
            }
            
            System.out.println();
        }
    }
}
 */


/*

   *
  **
 ***
****

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for(int i=1; i<=n; i++){
            for(int j=0; j<n-i; j++){
                System.out.print(" ");
            }
            for(int k = 0; k<i; k++){
                System.out.print("*");
            }
            
            System.out.println();
        }
    }
}

 */

/*

    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
         for(int i=1; i<=n; i++){
            for(int j=0; j<n-i; j++){
                System.out.print(" ");
            }
            for(int k = 0; k<i; k++){
                System.out.print("* ");
            }
            
            System.out.println();
        }

        for(int i=1; i<=n; i++){
            
            for(int k = 1; k<i; k++){
                System.out.print(" ");
            }
            for(int j= n -i +1; j>0; j--){
                System.out.print("* ");
            }
            
            System.out.println();
        }
    }
}
 */

/*
 E 
 D E 
 C D E 
 B C D E 
 A B C D E 
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        for(int i =1; i<=n; i++){
            char ch = (char)('A' + n -i);
            for(int j=0; j<i; j++){
                System.out.print(ch + " ");
                ch++;
            }
            System.out.println();
            
        }
    }
}
 */

/* 

 *****
  ****
   ***
    **
     *

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for(int i =0; i<n; i++){
            for(int k=0; k<i; k++){
                System.out.print(" ");
            }
            for(int j=0; j<n-i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
*/

/*

    1     
   121    
  12321   
 1234321  
123454321 

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for(int i=1; i<=n; i++){
            int x = 1;
            int y =i-1;
            for(int j=0; j<n-i; j++){
                System.out.print(" ");
            }
            for(int k=0; k<i; k++){
                System.out.print(x);
                x++;
            }
            for(int m =1; m<i; m++){
                System.out.print(y);
                y--;
            }
            for(int l=0; l<=n-i; l++){
                System.out.print(" ");
            }
            
            System.out.println();
        }
    }
}

 */




























