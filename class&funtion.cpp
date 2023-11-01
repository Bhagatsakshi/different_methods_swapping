#include <iostream>
using namespace std;
class swapping{
private:
  int a;
public:
  swapping(int a) {
    this->a=a;
  }
  void swap(swapping &obj) {
    int temp=this->a;
    this->a=obj.a;
    obj.a=temp;
  }
  void print() {
    cout<<"a = "<<a<<endl;
  }
};
void swap(swapping &obj1,swapping &obj2) {
  obj1.swap(obj2);
}
int main() {
  swapping obj1(10);
  swapping obj2(20);
  cout<<"Before swapping:"<<endl;
  obj1.print();
  obj2.print();
  swap(obj1,obj2);
  cout<<"After swapping:"<<endl;
  obj1.print();
  obj2.print();
  return 0;
}
