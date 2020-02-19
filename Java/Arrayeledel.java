import java.util.*;
class Arrayeledel
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter size");
        int n = s.nextInt();
        int arr[] = new int[n];
        int arr1[] = new int[n-1];
        System.out.println("Enter elements");
        for(int i=0;i<n;i++)
        {
            arr[i] = s.nextInt();
        }
        System.out.print("Enter the element you want to delete:");
        int m = s.nextInt();
        s.close();
        int o = Arrays.binarySearch(arr,m);
        for(int i=0;i<o;i++)
        {
            arr1[i]=arr[i];
        }
        for(int i=o;i<n-1;i++)
        {
            arr1[i]=arr[i+1];
        }
        System.out.print("After Deleting:");
        for(int i=0;i<n-1;i++)
        {
            if(i<n-2)
            {
            System.out.print(arr1[i]+",");
            }
            else
            {
                System.out.print(arr1[i]);
            }
        }
    }
}