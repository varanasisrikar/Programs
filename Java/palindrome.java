class palindrome
{
    public static void main(final String[] args)
    {
        int no=100020001;
        int temp=no;
        int test=0;
while (no!=0)
        {
                int x=no%10;
                no=no/10;
                test=(test*10)+x;
        }
        if(test==temp)
        {
                System.out.print("The Number is a Palindrome");
        }
        else
        {
                System.out.print("The Number is not a Palindrome");
        }
    }
}