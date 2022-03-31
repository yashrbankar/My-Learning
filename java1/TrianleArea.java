import java.util.*;
class TiangleArea
{
  public static void main(String args[])
  {
    float a,b,c,area,s;
    Scanner sc=new Scanner(System.in);
    System.out.print("enter the 3 side :: ");
    a=sc.nextFloat();
    b=sc.nextFloat();
    c=sc.nextFloat();
    s=(a+b+c)/2f;
    area=Math.sqrt(s*(s-a)*(s-b)*(s-c));
    System.out.print("Area :: "+area);
    
  }
}
