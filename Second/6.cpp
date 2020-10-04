//Operator Overloading, with and wihtout friend functions!
#include<iostream>
using namespace std;

class DoConversion{
public:
  double value;
  DoConversion(int something){
    value=something;
  }
  void operator*(){ //Operator overloading example!
    value*=2.5;
  }
  void display(){
    cout<<"This is what I have stored : "<<value<<"\n";
  }
};

void dummy(){
    cout<<"This is inside my dummy function!\n";
}

int main(){
  int value;
  cout<<"Enter a value for a distance in inches, I shall show you it in cms!\n";
  cin>>value;
  DoConversion A(value);
  *A;
  A.display();

  cout<<"\n\n\n\nPointers to a function : Demonstration\n\nCalling function normally\n";
  dummy();
  void (*ToFunction)()=&dummy;
  cout<<"\nUsing a pointer to call the same dummy function:\n";
  (*ToFunction)();
  return 0;
}
