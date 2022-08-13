import java.util.*;

class Literal
{
    public static void main(String args[])
    {
         Scanner sc=new Scanner(System.in);
         System.out.println("Enter the radius :");
         Float r=sc.nextFloat();
         Float area=3.14*r*r;
         System.out.print("area : "+area);
    }
}
