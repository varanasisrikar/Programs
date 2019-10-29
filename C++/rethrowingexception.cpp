#include <iostream>
using namespace std;
void Divide(double x,double y)
{
        try
        {
                if(y==0)
                {
                        throw y;
                }
                else
                {
                        cout<<"Division="<<x/y<<endl;
                }
        }
        catch(double)
        {
                cout<<"Caught an Exception"<<endl;
                throw;
        }
}
int main()
{
        cout<<"Testing catch"<<endl;
        try
        {
                Divide(10.00,20.00);
                Divide(10.00,0.00);
        }
        catch(double)
        {
                cout<<"Caught an Exception"<<endl;
        }
        return 0;
}
