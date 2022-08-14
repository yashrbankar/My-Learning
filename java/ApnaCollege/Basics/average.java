import java.util.*;

public class average
{
    public static void main(String argc[])
    {
        Scanner sc= new Scanner(System.in);
        double a,b,c;
        System.out.println("Enter Three Numbers :: ");
        a=sc.nextDouble();
        b=sc.nextDouble();
        c=sc.nextDouble();
        double ans= (a+b+c)/3;
        System.out.println("Average of 3 numbers is :: "+ans);
    }
    
}
