class comparsionStr
{
    public static void main(String arg[])
    {
        String s1="yash";
        String s2="yash";
        String s3=new String("yash");
        
        if(s1==s2)
        {
           System.out.println("s1 and s2 are same");
        }
        else
        {
           System.out.println("s1 and s2 are not same");
        }
        // showing not equal beacaue of object new 
        if(s1==s3)
        {
           System.out.println("s1 and s3 are same");
        }
        else
        {
           System.out.println("s1 and s3 are not same");
        }
        // solution of this problem
        //s1.equals(s3);
        if(s1.equals(s3))
        {
             System.out.println("s1 and s3 are same");
        }
        else
        {
             System.out.println("s1 and s3 are not same");
        }
        
    }
};
