#include<iostream>
using namespace std;
class base
{
    protected:
    int n;
    public:
    void setdata(int x)
    {
        n=x;
    }
};

class derived:public base
{
       public:
       void getdata()
       {
        cout<<"value of n:"<<n<<endl;
       }
};

int main()
{
    derived d;
    d.setdata(10);
    d.getdata();
}