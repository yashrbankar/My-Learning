import java.util.*;
class primeNum
{
   public static void main(String str[])
   {
       Scanner sc=new Scanner(System.in);
       int num=sc.nextInt();
       boolean ans=true;
       if(num==2)
       {
          ans=true;
       }
       else
       {
            for(int i=2;i<Math.sqrt(num);i++)
            {
                 if(num%i==0)
                 {
                    ans=false;
                    break;
                 }
            }
       }
       if(ans)
       {
          System.out.println("Prime");
       }
       else
       {
          System.out.println("not Prime");
       }
   }
   
}
