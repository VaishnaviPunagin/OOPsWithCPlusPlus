#include <iostream>
using namespace std;

void add(int a,int b,int c = 0)
{
	int sum;
	sum=a+b+c;
	cout<<"The sum of the numbers is "<<sum<<"\n";
}
void subtract(int a,int b = 4)
{
	int diff;
	diff=a-b;
	cout<<"The difference of the numbers is "<<diff<<"\n";
}
int main() {

	cout<<"\n\nadd(6,23,12); :: ";
  add(6,23,12);
	cout<<"add(5,6); :: ";
  add(5,6);
  cout<<"Notice how the same add function does the adding even though no third param is mentioned\nDefault value is considered to be zero here\n";
	cout<<"\n\nsubtract(33,12); :: ";
  subtract(33,12);
  cout<<"subtract(7); :: ";
	subtract(7);
  cout<<"Notice how the same subtract function does the subtraction even though no second param is mentioned\nDefault value for subtraction is considered to be 4 here\n\n";
	return 0;
  cout<<"Thank you!\n\n";
}
