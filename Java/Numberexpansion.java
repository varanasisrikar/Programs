import java.util.Arrays;
class Numberexpansion
{
   public static String expandedForm(int num)
    {
      String res="";
      String y=Integer.toString(num);
      int i = 0;
      int a[] = new int[y.length()];
      Arrays.fill(a,0);
      for(i=0;i<y.length();i++)
      {
         if((num%10)*(int)Math.pow(10,i)!=0)
         {
            a[i]=(num%10)*(int)Math.pow(10,i);
            num/=10;
         }
         else
         {
            num/=10;
         }
      }
      for(i=a.length-1;i>=0;i--)
      {
         if(i>=1)
         {
            if(a[i]==0)
           {
               res+="";
           }
           else
           {
               res+=Integer.toString(a[i])+" + ";
           }
      
         }
         if(i==0)
         {
           if(a[i]==0)
           {
             res+="";
           }
           else
           {
            res+=Integer.toString(a[i]);
            }
         }
      }
      return res;
    }
    public static void main(String[] args)
    {
        System.out.println(Numberexpansion.expandedForm(12)); 
        System.out.println(Numberexpansion.expandedForm(42)); 
        System.out.println(Numberexpansion.expandedForm(90000)); 
     }
}
