import java.util.Scanner;
class Duplicatearray
{
    public static void main(String[] args)
    {
        Scanner S = new Scanner(System.in);
    Scanner SC = new Scanner(System.in);
    System.out.println("Enter array size");
    int n = S.nextInt();
    int[] arr = new int[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = SC.nextInt();
    }
    S.close();
    SC.close();
    for(int i=0;i<arr.length;i++)
    {
        for(int j=i+1;j<arr.length;j++)
        {
        if(arr[i]==arr[j])
        {
            System.out.print(arr[j]+"\t");
        }
        }
    }
    }
}
