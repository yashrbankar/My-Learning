import java.util.*;
class conversionBtoD
{
    public static void main(String args[])
    {
         String str="101";
         int val=Integer.parseInt(str,2);
         System.out.println(val);
         val++;
         str=Integer.toBinaryString(val);
         System.out.println(str);
         
    }
}
