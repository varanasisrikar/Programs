#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findSmallest(vector <int> list)
{
        sort(list.begin(), list.end());
        return list[0];
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
