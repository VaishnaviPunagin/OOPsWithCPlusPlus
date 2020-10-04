#include<iostream>
using namespace std;

class Numbers{
public:
  int one, two;
  void insertData(int a, int b){
    one=a;
    two=b;
  }
  void display(){
    cout<<"Data stored is "<<one<<" and "<<two<<".\n";
  }
};

void Change(Numbers *first){
  cout<<"I passed an object pointer to the function Change that mltiplies the object's data by 10;\n";
  first->one*=10;
  first->two*=10;
  cout<<"Inside the function, in the reference object:\n";
  first->display();
}

Numbers AnotherChange(){
  Numbers temp;
  int a,b;
  cout<<"Give me new numbers! We shall rewrite the object through this function:\n";
  cin>>a>>b;
  temp.one=a;
  temp.two=b;
  cout<<"-----------------\nTemp object inside the function is:\n";
  temp.display();
  return temp;
}

int main(){
  int a,b;
  cout<<"Give me two numbers!\n";
  cin>>a>>b;
  Numbers first;
  first.insertData(a,b);
  Numbers *PointerToFirstObject=&first;
  cout<<"-----------------\nUsing a pointer to object in main to display the object:\n";
  PointerToFirstObject->display(); //pointer to object is being used to accress the object in this case
  cout<<"-----------------\n";
  Change(&first);
  cout<<"-----------------\n";
  cout<<"In main, AFTER we called the Change the function: \n";
  first.display();
  cout<<"-----------------\nAnother function called AnotherChange exists which returns an object reference!\n";
  first=AnotherChange();
  cout<<"-----------------\nRewritten object in main is :\n";
  first.display();
  cout<<"-----------------\n";
  return 0;
}
