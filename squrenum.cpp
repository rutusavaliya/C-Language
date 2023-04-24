#include<iostream>
using namespace std;
class base
{
    protected:
    int n,i;

    public:
    void setdata()

    {
        cout<<" enter the n:"<<endl;
        cin>>n;
    }
};


class derived: public base
{
    public:
    void getdata()
    {
        for(i=1;i<=n;i++)
        {
            cout<<" "<<i*i;
        }
        }
    
};


int main()
{
    derived d;
   d.setdata();      
   d.getdata();
}