#include <iostream>
using namespace std;
int main()
{
        int no,temp,test;
        cout<<"Enter the number to be tested"<<endl;
        cin>>no;
        temp=no;
        while (no!=0)
        {
                no=no/10;
                test=test+no*10;
        }
        if(test==temp)
        {
                cout<<"The Number is a Palindrome";
        }
        else
        {
                cout<<"The Number is not a Palindrome";
        }
        return 0;
}
