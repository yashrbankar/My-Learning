class selectionSort
{
    public static int nextSmall(int arr[],int s)
    {
           int min=arr[s],index=s;
           
          for(int i=s+1;i<arr.length;i++)
          {
              if(min>arr[i])
              {
                  min=arr[i];
                  index=i;
              }
          }
          return index;
    }
    public static void selection(int arr[])
    {
        int kth=0;
        for(int i=0;i<arr.length;i++)
        {
            int index=nextSmall(arr,kth);
            int temp=arr[index];
            arr[index]=arr[kth];
            arr[kth]=temp;
            kth++;
        }
        
    }
    
    public static void main(String args[])
    {
         int arr[]={5,1,4,2,3,0};
         selection(arr);
         for(int i=0;i<arr.length;i++)
         {
              System.out.print(arr[i]+" ");
         }
         
    }
}

