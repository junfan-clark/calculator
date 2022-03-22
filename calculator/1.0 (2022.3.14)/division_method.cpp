// num1 / num2 (integer)

#include <iostream>

using namespace std;

int main(void)
{
	int num1,num2;
	
	cout << "Please enter two numbers to divison method: " << endl;
	cin >> num1 >> num2;	//It takes two lines.
	cout << "It equal to " << num1 / num2 << endl;	//Inportant: Don't use num1 / 0 or 0 / num2 (It equal to 0 or indactes that the floating point number has been saved).

	return 0;
}
