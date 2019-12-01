#include<iostream>
using namespace std;

class MyClass
{
    int memA;
    int memB;

    public:
        MyClass()
        {
            memA = 10;
            memB = 20;
        }
        void display()
        {
            cout<<"memA is "<<this->memA<<" and memB is "<<this->memB;
        }
};

int main()
{
    MyClass obj;
    obj.display();
    return 0;
}