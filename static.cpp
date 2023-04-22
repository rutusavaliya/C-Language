#include<iostream>
using namespace std;
class test{
          int n;
          public:
          static int num;
          void setn(int x)

          {
            n=x;
            num++;

          } 

          void getn()
          {
            cout<<"value of n:"<<endl;

          }  
};

int test ::num=10;
int main()

{
    cout<<"starting at num value:"<<test::num<<endl;


    test a,b,c;
    a.setn(150);
    a.getn();
    b.setn(10);
    c.setn(30);

    cout<<"ending at num value:"<<test::num<<endl;
}