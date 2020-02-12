import java.util.*;
class Maxminchar {    
   public static void main(final String[] args) 
   { 
       int minc=0,maxc=0;
       final Scanner s = new Scanner(System.in);
       System.out.println("Enter a statement");
       final String s1 = s.nextLine();
       s.close();
       final int[] freq = new int[s1.length()];
       Arrays.fill(freq,0);
       for(int i=0;i<s1.length();i++)
       {
           int flag=0;
           for(int j=i+1;j<s1.length();j++)
           {
               if(s1.charAt(i)==s1.charAt(j)&s1.charAt(i)!=' ')
               {
                   flag++;
               }
           }
         freq[i]=flag;
       }
       int max=freq[0];
       int min=freq[0];
       for(int i=0;i<freq.length;i++)
       {
           if(freq[i]>max)
           {
               max=freq[i];
               maxc=i;
           }
           if(freq[i]<min)
           {
               min=freq[i];
               minc=i;
           }
       }
       System.out.println("Minimum occurring character: "+s1.charAt(minc));
       System.out.println("Maximum occurring character: "+s1.charAt(maxc));
   }
}