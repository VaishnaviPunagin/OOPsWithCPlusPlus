#include<iostream>
using namespace std;

class Student{
  string name;
  int rno,grade;
public:
  //void getData();
  void insert(string name, int rno, int grade);
  void display();
  void getData();
};

void Student::insert(string name, int rno, int grade){
  /*The this pointer is used here to negate the ambiguity between the object's
  parameters name, int and grade and the functions parameters name, int, and
  grade respectively*/
  this->name=name;
  this->rno=rno;
  this->grade=grade;
}

void Student::getData(){
  string name;
  int rno, grade;
  cout<<"Enter name :  ";
  cin>>name;
  cout<<"Enter Roll Number :  ";
  cin>>rno;
  cout<<"Enter Grade :  ";
  cin>>grade;
  this->insert(name, rno, grade);
}

void Student::display(){
  cout<<"\n---------------\nData Stored::\nName :: "<<name<<"\nRollNumber :: "<<rno<<"\nGrade :: "<<grade<<"\nand this object is stored at location "<<this<<"\n---------------\n";
}

int main()
{
    Student one;
    one.getData();
    one.display();

    Student *FirstOneOnly=&one; //Pointer to object Student one, here FirstOneOnly is the reference
    cout<<"\n\nThe address of the reference to the first object is "<<&FirstOneOnly<<"\n\n";
    FirstOneOnly->display();
    return 0;
}
