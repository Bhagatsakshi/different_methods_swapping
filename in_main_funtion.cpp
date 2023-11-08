#include<iostream>
using namespace std;
int main()
{
    int a=9;
    int b=3;
    cout<<"before swap"<<endl;      
    cout<<a<<"\t";
    cout<<b<<endl;
    a=a+b;           //a=12;
    b=a-b;           //b=9;
    a=a-b;           //a=3;
    cout<<"after swap"<<endl;
    cout<<a<<"\t";
    cout<<b<<endl;
    return 0;
}        
