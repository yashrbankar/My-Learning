class Merging
{
   public static void main(String Yash[])
   {
      byte a=9,b=12;
      byte c=0;
      c=a;
      b=(byte)(b<<4);
      c=(byte)(b|c);
      System.out.println((c&0b00001111));
      System.out.println((c&0b11110000)>>4);
   }
}
