class Swap
{
  public static void main(String Yash[])
  {
      byte a=4, b=8;
      System.out.println("before swaping the element :: "+a +" "+ b);
      a=(byte)(a^b);
      b=(byte)(a^b);
      a=(byte)(a^b);
      
      System.out.println("after swaping the element :: "+a +"  "+ b);
      //
      
      
  }
}
