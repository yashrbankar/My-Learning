import java.util.*;
class basics
{
   //System.out.println();
   public static boolean checkPanlindrome(String str)
   {
       int i=0,j=str.length()-1;
       
       while(i!=j)
       {
           if(str.charAt(i)!=str.charAt(j))
           {
               return false;
           }
           i++;
           j--;
       }
       return true;
   }
   public static void main(String args[])
   {
          Scanner sc=new Scanner(System.in);
          String name;
          // name=sc.next()// single word
          name=sc.nextLine();// complete sentence
          //System.out.println(name +"\n length :: "+name.length());
          System.out.println("panlindrome :: "+checkPanlindrome(name));
   }
}
