import java.util.*;

class billGst
{
   public static void main(String args[])
   {
       float pencil=5.5f,pen=9.5f,eraser=1.5f;
       Scanner sc=new Scanner(System.in);
       
       System.out.println("Enter number of pencil you want to buy :: ");
       pencil=sc.nextInt()*pencil;
       
       System.out.println("Enter number of pen you want to buy :: ");
       pen=sc.nextInt()*pen;
       
       System.out.println("Enter number of eraser you want to buy :: ");
       eraser=sc.nextInt()*eraser;
       
       float total=pencil+pen+eraser;
       total=total+total*18/100;
       int $=(int)total;
       System.out.println($);
   }
}
