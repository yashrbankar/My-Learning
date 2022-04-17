import java.lang.*;
import java.util.*; // this the package for scaning the data 

class Sum
{
    public static void main(String arg[])
    {
        Scanner sc= new Scanner(System.in);
    //   class  obj               obj 
    // this used for accessing the keybord 
        System.out.println("Enter the two Numbers :");
        int x=sc.nextInt();// this used for scaning the integer values from keybord
        int y=sc.nextInt();
        int r=x+y;
        System.out.println("sum is "+ r);
    }
    
}
    

