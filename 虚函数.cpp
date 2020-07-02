#include<iostream>
using namespace std;
class CBase
{
public:
  
    virtual void Walk(){cout<<"CBase:Walk"<<endl;}
    virtual void Jump(){cout<<"CBase:Jump"<<endl;}
};
class CDerivedA : public CBase
{
public:
   
    void Walk(){cout<<"CDerivedA:Walk"<<endl;}
    void Jump(){cout<<"CDerivedA:Jump"<<endl;}
};
int main()
{
    CBase *pTmp1=new CDerivedA ;
    pTmp1->Walk();

    return 0;
}

