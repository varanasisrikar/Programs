#include <iostream>
using namespace std;
int main()
{
        int a,b;
        cout<<"Enter a,b values"<<endl;
        cin>>a>>b;
        int x=a-b;
        try
        {
                if(x!=0)
                {
                        cout<<"Result(a/x)="<<a/x<<endl;
                }
                else
                {
                        throw(x);
                }
        }
        catch(int x)
        {
                cout<<"Exception Caught:divide by zero";
        }
        return 0;
}
