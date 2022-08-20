class insertion
{
    public static void insert(int arr[],int index)
    {
        int val=arr[index];
        while(index>0)
        {
            if(arr[index-1]>val)
            {
                arr[index]=arr[index-1];
            }
            else
            {
                break;
            }
            index--;
        }
        arr[index]=val;
    }
    public static void insertion(int arr[])
    {
         int sorted=1;
         while(sorted<arr.length)
         {
             insert(arr,sorted);
             sorted++;
         }
    }
    
    public static void main(String args[])
    {
         int arr[]={5,1,4,2,3,0};
         insertion(arr);
         for(int i=0;i<arr.length;i++)
         {
              System.out.print(arr[i]+" ");
         }
         
    }
}

