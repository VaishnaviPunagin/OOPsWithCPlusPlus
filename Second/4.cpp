//Operator Overloading, with and wihtout friend functions!
#include<iostream>
using namespace std;

class DoConversion{
public:
  double value;
  DoConversion(int something){
    value=something;
  }
  void operator*(){
    value*=2.5;
  }
  void display(){
    cout<<"This is what I have stored : "<<value<<"\n";
  }
};

int main(){
  int value;
  cout<<"Enter a value for a distance in inches, I shall show you it in cms!\n";
  cin>>value;
  DoConversion A(value);
  *A;
  A.display();
  return 0;
}
