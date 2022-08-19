import java.util.*;
public class createMatrix
{
    public static void main(String args[])
    {
          Scanner sc=new Scanner(System.in);
         int arr[][]=new int [3][3];
         int m=arr.length;
         int n=arr[0].length;
         for(int i=0;i<m;i++){
             for(int j=0;j<n;j++)
             {
                 System.out.print("Enter data of"+ (++i)+" "+ (++j) +":: ");
                 arr[i][j]=sc.nextInt();
             }
         }
    }
}
