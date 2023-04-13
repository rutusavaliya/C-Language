#include<iostream>
using namespace std;
class book
{
    private:
    int bookno;
    int book;
    char booktitle[20];
    float price;
    float totalcost()
    {
           price =  book * price;
    }
   public:
   void INPUT()
   {
      cout<<" enter bookno:";
      cin>>bookno;
      cout<<" enter booktitle:";
      cin>>booktitle;
      cout<<" enter bookcopy:";
      cin>>book;
      cout<<" enter price:";
      cin>>price;

         totalcost();
 
   }
     void PURCHASE()
     {
         cout<<"bookno:"<<bookno<<endl;
         cout<<"booktitle:"<<booktitle<<endl;
         cout<<"bookcopy:"<<book<<endl;
         cout<<"price:"<<price<<endl;
         
     }
      
};
int main()
{
      book p;
      p.INPUT();
      p.PURCHASE();
      
}