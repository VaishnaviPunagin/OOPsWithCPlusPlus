#include<iostream>
using namespace std;

void Area(int side){
  cout<<"\nThis is a square! Area is "<<side*side<<"\n\n";
}
void Area(float radius){
  cout<<"\nThis is a circle! Area is "<<3.14*radius*radius<<"\n\n";
}
void Area(int length, int breadth){
  cout<<"\nThis is a rectangle! Area is "<<length*breadth<<"\n\n";
}

int main(){
  int *where= new int;
  cout<<"Come on, give us a number!  ";
  cin>>*where;
  cout<<"Number stored : "<<*where<<"\nPointer's Address : "<<where<<"\nAddress of the variable in heap memory : "<<&where<<"\n\n";
  cout<<"\n--------------------------\nFunction Overloading Demonstration with a function called Area!\n";
  cout<<"Passing : Area(20);  --> ";
  Area(20);
  cout<<"Passing : Area(12.9);  --> ";
  Area(12.9);
  cout<<"Passing : Area(12,5);  --> ";
  Area(12,5);
  cout<<"\n\nNotice how based on different parameters, the function Area still works! Look at the code to understand how exatly!\n\n"
  return 0;

}
