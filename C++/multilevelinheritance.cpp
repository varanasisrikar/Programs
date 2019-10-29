#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class student
{
private:
int rl;
char nm[20];
public:
void read();
void display();
};
class marks : public student
{
protected:
int s1;
int s2;
int s3;
public:
void getmarks();
void putmarks();
};
class result : public marks
{
private:
int t;
float p;
char division[10];
public:
void process();
void printresult();
};
void student::read()
{
        cout<<"Enter Roll No and Name "<<endl;
        cin>>rl>>nm;
}
void student:: display()
{
        cout <<"Roll No :"<<rl<<endl;
        cout<<"Name : "<<nm<<endl;
}
void marks ::getmarks()
{
        cout<<"Enter three subject marks "<<endl;
        cin>>s1>>s2>>s3;
}
void marks ::putmarks()
{
        cout<<"Subject 1 : "<<s1<<endl;
        cout<<"Subject 2 : "<<s2<<endl;
        cout<<"Subject 3 : "<<s3<<endl;
}
void result::process()
{
        t= s1+s2+s3;
        p = t/3.0;
        p>=60 ? strcpy(division,"First") : p>=50 ? strcpy(division, "Second") : strcpy(division,"Third");
}
void result::printresult()
{
        cout<<"Total = "<<t<<endl;
        cout<<"Per = "<<p<<endl;
        cout<<"Division = "<<division<<endl;
}
int main()
{
        result x;
        x.read();
        x.getmarks();
        x.process();
        x.display();
        x.putmarks();
        x.printresult();
        return 0;
}
