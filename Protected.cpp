#include <iostream>
using namespace std;

class ABC
{ 
    private:
    int mynum;
    public:
    int num;
    protected: 
    int a;
    int b;
   public:
    int add()
    {
        mynum=10;
        return(mynum);
    }
    
};

class XYZ : public ABC
{
    public:
    void chidDisplay()
    {
        num=10;
    
        cout<<num<<endl;
        a=10;
        b=20;
        cout<<a<<b<<endl;
    }
    
};

class  KLM
{
    public:
    void display()
    {
        ABC obj;
        obj.num=100;
       // a=200;
        //b=300;
        cout<<obj.num<<endl;

    }
};

int main()
{
    ABC abc1;
 int x=  abc1.add();
 cout<<x<<endl;
    XYZ xyz1;
    xyz1.chidDisplay();
    KLM klm1;
    klm1.display();

    return 0;
}