#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x;
	int y;
	cout<<"enter num1:";
	cin>>x;
	cout<<"enter num2:";
	cin>>y;
	cout<<"The max value is:"<<" "<<max(x,y);
	return 0;
}

int max(int num1, int num2) {

   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
