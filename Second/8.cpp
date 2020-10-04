//Friend class and Freiend functions
#include<iostream>
using namespace std;

class A{
  int x,y;
public:
  A(int one, int two)
  {
    x=one;
    y=two;
  }
  friend class B;
  friend void AddBoth(A First);
};

class B{
public:
  int max(A First)
  {
    return First.x>First.y? First.x:First.y;
  }
};

void AddBoth(A First){
  int sum;
  sum=First.x+First.y;
  cout<<"This is the sum of values from Class A in a friend function named AddBoth() is "<<sum<<"\n";
}

int main()
{
  int one, two;
  cout<<"Enter 2 numbers!\n";
  cin>>one>>two;
  A compare(one,two);
  B maximum;
  cout<<"The larger number is "<<maximum.max(compare)<<".\n";
  cout<<"\nCalling the friend function AddBoth() :\n";
  AddBoth(compare);
  return 0;
}
