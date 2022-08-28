class StringCompression
{
     public static String Compress(String str)
     {
         StringBuilder S=new StringBuilder("");
         for(int i=0;i<str.length();i++)
         {
              char ch=str.charAt(i);
              Integer count=0;
              //i++;
              while(i<str.length()-1&&ch==str.charAt(i+1))
              {
                  count++;
                  i++;
              }
              if(count==0)
              {
                   S.append(ch);
              }
              else
              {
                   S.append(ch);
                   count++;
                   S.append(count.toString());
              } 
         }
         return S.toString();
     }
     public static void main(String Args[])
     {
          String str="abbcccdddddggg";
          System.out.println("Ans :: "+Compress(str));
     }
}
