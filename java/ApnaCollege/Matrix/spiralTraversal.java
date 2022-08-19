
public class spiralTraversal
{
    public static void Spiral(int arr[][])
    {
         int n=arr.length;
         int m=arr[0].length;
      
         int count=0;
         int total=m*n;
         
         
         int startrow=0;
         int endrow=n-1;
         
         int startcol=0;
         int endcol=m-1;
         
         while(count<total)
         {
              // upper row
             for(int i=startcol;i<=endcol&&count<total;i++)
             {
                  System.out.print(arr[startrow][i]+" ");
                  count++;
             }
             startrow++;
             
             // endling col
             for(int i=startrow;i<=endrow&&count<total;i++)
             {
                  System.out.print(arr[i][endcol]+" ");
                  count++;
             }
             endcol--;
             
             // endling row
             for(int i=endcol;i>=startcol&&count<total;i--)
             {
                  System.out.print(arr[endrow][i]+" ");
                  count++;
             }
             endrow--;
             for(int i=endrow;i>=startrow&&count<total;i--)
             {
                  System.out.print(arr[i][startcol]+" ");
                  count++;
             }
             startcol++;
         }
         
    }
    public static void main(String args[])
    {
        int arr[][]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
        
        Spiral(arr);
    }
};
