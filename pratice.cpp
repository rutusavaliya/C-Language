#include<iostream>
using namespace std;
class base1
{
    protected:
    int n,i;
    public:
    void setn()
    {
        cout<<"enter the n:"<<endl;
        cin>>n;
    }
};

class base2
{
    protected:
    int m;
    public:
    void setm()
    {
         cout<<"enter the m:"<<endl;
         cin>>m;
    }
};

class derived :public base1,public base2
{
    public:
    void mul()
    {
     for(i=m;i<n;i++)
     
        {
            cout<<" "<<i*i<<endl;
        }
     }
    
};

int main()
{
    derived d;
    d.setn();
    d.setm();
    d.mul();
}