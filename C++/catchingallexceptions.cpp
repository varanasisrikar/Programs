#include <iostream>
using namespace std;
void Test(int x)
{
        try
        {
                if(x==0)
                {
                        throw x;
                }
                if(x==-1)
                {
                        throw x;
                }
                if(x==-2)
                {
                        throw x;
                }
        }
        catch(int)
        {
                cout<<"Caught an Exception"<<endl;
        }
}
int main()
{
        cout<<"Testing catch"<<endl;
        Test(-1);
        Test(0);
        Test(1);
        return 0;
}
