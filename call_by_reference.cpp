//values are pass by reference i.e.a method of passing the address of an argument in the calling function to a corresponding parameter in the called function
#include<iostream>
using namespace std;
void swap(int *value1,int *value2)      //value of a is in value1 and value of b is in value2;
{
    int temp;                    //swapping using third variable
    temp=*value1;                //it temporarly store info of a;
    *value1=*value2;             //value of b is in a
    *value2=temp;                //value of temp i.e. temporarly store value of a ,now in b
}
int main()
{
    int a=9;
    int b=3;
    cout<<"before swap"<<endl;
    cout<<a<<"\t";                          //a=9;
    cout<<b<<endl;                          //b=3;
    swap(&a,&b);                            //funtion call
    cout<<"after swap"<<endl;
    cout<<a<<"\t";                          //a=9;                      
    cout<<b<<endl;                          //b=3;
    return 0;
}  
