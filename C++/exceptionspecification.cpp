#include <iostream>
using namespace std;
void Test(int x) throw(int,char,double)
{
        if(x==0)
        {
                throw 'x';
        }
        else if(x==1)
        {
                throw x;
        }
        else if(x==2)
        {
                throw x;
        }
        else if(x==-1)
        {
                throw 1.0;
        }
}
int main()
{
        try
        {
                cout<<"Testing catch"<<endl;
                cout<<"x=0"<<endl;
                Test(0);
                cout<<"x=1"<<endl;
                Test(1);
                cout<<"x=2"<<endl;
                Test(2);
                cout<<"x=-1"<<endl;
                Test(-1);
        }
        catch(char)
        {
                cout<"Char Caught";
        }
        catch(int)
        {
                cout<"Int Caught";
        }
        catch(double)
        {
                cout<"Double Caught";
        }

        return 0;
}
