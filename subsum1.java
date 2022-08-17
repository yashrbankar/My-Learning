import java.util.*;
class subsum1
{
     public static int find1(int arr[])
     {
          int n=arr.length;
          
          int max=arr[0];
          for(int i=0;i<n;i++)
          {
               int start=i;
               for(int j=i+1;j<n;j++)
               {
                   int cur=0;
                   int end=j;
                   for(int k=start;k<=end;k++)
                   {
                      cur+=arr[k]; 
                   }
                   if(cur>max)
                   {
                      max=cur;
                   } 
               }
          }
          return max;
     }
     
     public static int  find2(int arr[])
     {
         // using the prefix sum method;
         int prefix[]=new int[arr.length];
         prefix[0]=arr[0];
         for(int i=1;i<arr.length;i++)
         {
              prefix[i]=arr[i]+prefix[i-1];
         }
         
         int max=arr[0];
         for(int i=1;i<arr.length;i++)
         {
               int start=i;
               int sum=0;
              for(int j=i;j<arr.length;j++)
              {
                   int end=j;
                   sum=prefix[end]-prefix[start-1];
              }
              if(max<sum)
              {
                  max=sum;
              }
         }
         return max;
     }
     
     public static int find3(int arr[])
     {
          int max=arr[0];
          int cur=0;
          for(int i=1;i<arr.length;i++)
          {
               cur+=arr[i];
               if(cur<0)
               {
                   cur=0;
               }
               if(max<cur)
               {
                  max=cur;
               }
          }
          return max;
     }
     public static void main(String arg[])
     {
         int arr[]={-1,-2,-6,-1,-300};
         System.out.println("ans1 (N3) : "+find1(arr));
         System.out.println("ans2( prefix sum) :"+find2(arr));
         System.out.println("ans2(Kadane) : "+find3(arr));
 
     }
}
