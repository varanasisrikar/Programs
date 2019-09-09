#include <iostream>
using namespace std;
int main()
{
   int array[5],i;
   cout<<"Enter elements: ";
   for(i=0;i<5;i++)
   {
       cin>>array[i];
   }
   cout<<"You entered: "<<endl;
   for(i=0;i<5;i++)
   {
       cout<<array[i]<<endl;
   }
}
