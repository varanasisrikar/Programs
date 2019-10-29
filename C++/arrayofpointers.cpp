#include <iostream>
class MyClass
{
public:
MyClass()
{
        itsAge = 1;
        itsWeight=5;
}
~MyClass()
{
}
int GetAge() const
{
        return itsAge;
}
int GetWeight() const
{
        return itsWeight;
}
void SetAge(int age)
{
        itsAge = age;
}
private:
int itsAge;
int itsWeight;
};
int main()
{
        MyClass * myObject[30];
        int i;
        MyClass * objectPointer;
        for (i = 0; i < 30; i++)
        {
                objectPointer = new MyClass;
                objectPointer->SetAge(2*i +1);
                myObject[i] = objectPointer;
        }
        for (i = 0; i < 30; i++)
        {
                std::cout << "#" << i+1 << ": " << myObject[i]->GetAge() << std::endl;
        }
        for (i = 0; i < 30; i++)
        {
                delete myObject[i];
                myObject[i] = NULL;
        }
        return 0;
}
