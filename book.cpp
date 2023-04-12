#include<iostream>
using namespace std;
class book
{
    private:
    int bookno;
    char booktitle[20];
    float price;




   publuic:
   void input()
   {
    cout<<" enter bookno:";
     cin>>bookno;
     cout<<" enter booktitle:";
     cin>>booktitle;
     cout<<" enter price:";
     cin>>price;
     
   }


};