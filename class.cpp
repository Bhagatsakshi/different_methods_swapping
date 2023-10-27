#include<iostream>
using namespace std;
class hi
{
private:
  int a;
public:
  hi(int a)
{
    this->a=a;
  }
  void swap(hi &obj) 
{
    int temp=this->a;
    this->a=obj.a;
    obj.a=temp;
  }
  void print() {
    cout<<"a="<<a<<endl;
  }
};
int main()
{
  hi obj1(10);
  hi obj2(20);
  cout << "Before swapping:"<<endl;
  obj1.print();
  obj2.print();
  obj1.swap(obj2);
  cout << "After swapping:"<<endl;
  obj1.print();
  obj2.print();
  return 0;
}
