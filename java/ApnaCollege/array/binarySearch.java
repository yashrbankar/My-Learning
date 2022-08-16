class binarySearch
{
     public static int binarySearch(int arr[],int key)
     {
          int l=0,h=arr.length-1;
          
          while(l<=h)
          {
              int mid=l+(h-l)/2;
              if(arr[mid]==key)
              {
                  return mid;
              }
              else if(arr[mid]>key)
              {
                  h=mid-1;
              }
              else
              {
                  l=mid+1;
              } 
          }
          return -1;
          
     }
     public static void main(String arg[])
     {
          
         int arr[]={1,3,5,6,7,9,10};
         int index=binarySearch(arr,11);
         System.out.print("index ::"+index);
     }
}
