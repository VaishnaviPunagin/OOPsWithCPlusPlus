#include<iostream>
using namespace std;

class Numbers{
  int one, two;
public:
  Numbers(int a, int b){
    one=a;
    two=b;
  }
  Numbers(int a)
  {
    one=a;
    two=0;
  }
  Numbers(){
    one=two=0;
  }
  void display(){
    cout<<"Values stored are :: One : "<<one<<", Two : "<<two<<"\n";
  }
};

void dummy(){
    cout<<"This is inside my dummy function!\n";
}

int main()
{
  cout<<"\nConstructor Overloading Demonstration! The class has 2 integer containers.\n";
  Numbers first(23,04), second(2001), third;
  cout<<"\nObject first(23,04) ::\n";
  first.display();
  cout<<"\nObject second(2001) ::\n";
  second.display();
  cout<<"\nObject third ::\n";
  third.display();

  cout<<"\n\n\n\nPointers to a function : Demonstration\n\nCalling function normally\n";
  dummy();
  void (*ToFunction)()=&dummy;
  cout<<"\nUsing a pointer to call the same dummy function:\n";
  (*ToFunction)();
  return 0;
}
