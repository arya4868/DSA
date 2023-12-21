package JAVA.JavaCode.CharStringQuestion;

public class Palindrome {
    public static void main(String[] args){
        String s = "noon";
        System.out.println("palindrome ? :- " + checkpalindrome(s));
    }
    public static boolean checkpalindrome(String s){
        char ch[] = s.toCharArray();
        int start =0;
        int end = ch.length -1;
        while(start <= end){
            if(ch[start] != ch[end]){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
    }
    
}
