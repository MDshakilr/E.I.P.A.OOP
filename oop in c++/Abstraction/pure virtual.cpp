#include<bits/stdc++.h>
using namespace std;
class  phone {
    public:

virtual void sendmessage()=0;
virtual void seenmessage()
{

}

};
class iphone:public phone
{
public:
    void sendmessage()
    {
        cout<<"hi"<<endl;

    }
   /* void seenmessage()
    {
        cout<<"fuu"<<endl;

    }
    */

};
class xphone:public phone
{
    public:

    void sendmessage()
    {
        cout<<"hello"<<endl;

    }

   /* void seenmessage()
    {
        cout<<"oooo"<<endl;

    }
    */

};
int main()
{
    /*phone *p1;
    xphone x;
    p1=&x;*/

    phone *p1= new xphone();
    p1->sendmessage();
    p1->seenmessage();

}
