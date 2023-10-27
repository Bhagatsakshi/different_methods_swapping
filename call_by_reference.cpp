#include<iostream>
using namespace std;
void swap(int *value1,int *value2)      
{
    int temp;
    temp=*value1;
    *value1=*value2;
    *value2=temp;
}
int main()
{
    int a=9;
    int b=3;
    cout<<"before swap"<<endl;
    cout<<a<<"\t";
    cout<<b<<endl;
    swap(&a,&b);
    cout<<"after swap"<<endl;
    cout<<a<<"\t";
    cout<<b<<endl;
    return 0;
}  
