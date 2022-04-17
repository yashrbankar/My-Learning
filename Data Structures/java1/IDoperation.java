class IDoperation
{
   public static void main(String args[])
   {
     System.out.println("Increament & Decrement");
      int x=5,y=9,z;
      z=2*x++ +2* ++y;
      System.out.println("Increament & Decrement"+ z);
      float u=2.35f;
      u++;
      System.out.println("float increament :: " +u );
      
      char c='A';
      c++;
      System.out.println("char increament :: " +c);
      
      byte b=200;
      b++;
      System.out.println("byte increament :: " +b );
      // b=b+1; error due to the literal 
   }
 }
 
