#include <iostream>
#include <vector>

using namespace std;

int findSmallest(vector <int> list)
{
        int s=list.size();
        int min=list[0];
        for(int i=1; i<s; i++)
        {
                if(min>list[i])
                {
                        min=list[i];
                }
        }
        return min;
}
int main()
{
        int size,i,n,res;
        vector <int> l(10);
        cout<<"Enter the values to find the minimum"<<endl;
        for(i=0; i<10; i++)
        {
                cin>>l[i];
        }
        res=findSmallest(l);
        cout<<res;
}
