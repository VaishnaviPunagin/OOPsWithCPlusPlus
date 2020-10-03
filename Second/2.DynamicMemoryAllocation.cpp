#include<iostream>
using namespace std;

void Area(int side){
  cout<<"This is a square! Area is "<<side*side<<"\n\n";
}
void Area(float radius){
  cout<<"This is a circle! Area is "<<3.14*radius*radius<<"\n\n";
}
void Area(int length, int breadth){
  cout<<"This is a rectangle! Area is "<<length*breadth<<"\n\n";
}

int main(){
  int *where= new int;
  cout<<"Come on, give us a number!  ";
  cin>>*where;
  cout<<"Number stored : "<<*where<<"\nPointer's Address : "<<where<<"\nAddress of the variable in heap memory : "<<&where<<"\n\n";
  return 0;

}
