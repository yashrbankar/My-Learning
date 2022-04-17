class BitwiseDemo
{
     public static void main(String Yash[])
     {
          //int x=10,y=6,z;
          int x=0b1010;// binary form
          int y=0b0110;
          //    0b0010 ==2 for and operation
          //    0b1110 ==14 for or operation
          int z;
          
         // z=x&y;// O/P 2
          z=x|y;// O/P 14
          System.out.println("x&y ::"+z);
          /*
          int s=0b1010;//8
          int r; //== 8
          r=s>>>1; // N*2^k N==8 K==3 //a answer ==64
          System.out.println("right shift ::"+r);
          */
          
          int s=0b1010;//8
          int r; //== 8
          r=s>>1; // N*2^k N==8 K==3 //a answer ==64
          System.out.println(String.format("%s",Integer.toBinaryString(s)));
          System.out.println("%s",Integer.toBinaryString(r));
     }
}
