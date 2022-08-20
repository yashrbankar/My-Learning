class bubbleSort
{
    public static void Bubble(int arr[])
    {
        int n=arr.length;
        int flag=0;
        
        for(int i=0;i<n;i++)// n==k kth largest element
        {
            flag=0;
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    flag=1;
                }
            }
            if(flag==0)return;
            
        }
        
    }
    public static void main(String args[])
    {
         int arr[]={5,1,4,2,3};
         Bubble(arr);
         for(int i=0;i<arr.length;i++)
         {
              System.out.print(arr[i]+" ");
         }
         
    }
}

