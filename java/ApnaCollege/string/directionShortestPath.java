import java.util.*;
class directionShortestPath
{
    public static double findDist(String str)
    {
         int x=0,y=0;
         double ans;
         for(int i=0;i<str.length();i++)
         {
             char ch=str.charAt(i);
             if(ch=='E')
             {
                 x++;
             }
             else if(ch=='W')
             {
                 x--;
             }
             else if(ch=='N')
             {
                 y++;
             }
             else
             {
                 y--;
             }
         }
         ans=x*x+y*y;
         ans=Math.sqrt(ans);
         return ans;
         
    }
    public static void main(String args[])
    {
        String str="WNEENESENNN";
        System.out.print("ans :"+findDist(str));
        
    }
}
