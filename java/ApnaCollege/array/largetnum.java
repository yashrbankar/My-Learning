class largetnum
{
   public static int getMax(int arr[])
   {
         int max=arr[0];
         for(int i=1;i<arr.length;i++)
         {
              if(max<arr[i])
              {
                  max=arr[i];
              }
         }
         return max;
   }
   public static void main(String arg[])
   {
         int arr[]={1,22,3,6,9,45};
         
         int max=getMax(arr);
         System.out.print("The Maxium of arr :: "+max);
   }
}
