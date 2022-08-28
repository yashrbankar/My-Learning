class largetStr
{
     public static void main(String str[])
     {
          String strs[] ={"apple","Banana","mango"};
          String large=strs[0];
          for(int i=1;i<strs.length;i++)
          {
              if(large.compareToIgnoreCase(strs[i])<0)
              {
                  large=strs[i];
              }
          }
          System.out.print("Large :: "+large);
     }
}
