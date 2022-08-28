class StringBuilder1
{
      public static void main(String Args[])
      {
           StringBuilder str=new StringBuilder("");
           
           for(char ch='a';ch<='z';ch++)
           {
               str.append(ch);
           }
           Integer num=12345;
           
           System.out.print("str: "+str+" second ans : "+num.toString());
           
      }
}
