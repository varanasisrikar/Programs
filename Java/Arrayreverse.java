public class Arrayreverse
{ 
  
        static void reverse(int a[], int n) 
    { 
        System.out.println("Reversed array is:");
        for(int i=--n;i>=0;i--)
        {
            System.out.print(a[i]+" ");
        }
        
    } 
  
    public static void main(String[] args) 
    { 
        int [] arr = {10, 20, 30, 40, 50}; 
        reverse(arr, arr.length); 
    } 
} 
