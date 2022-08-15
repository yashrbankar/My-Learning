import java.util.*;
class decimalToBinary
{
     public static void main(String args[])
     {
           Scanner sc= new Scanner(System.in);
            System.out.println("Enter the decimal number ");
           int num=sc.nextInt();
           int binary=0;
           int pow=0;
           while(num>0)
           {
              binary=binary+(num%2*(int)Math.pow(10,pow++));
              num/=2;
           }
           System.out.println("binary form :: "+binary);
     }
}
