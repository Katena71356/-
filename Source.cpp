#include <iostream>
using namespace std;
int main()
{
	float R1, R2, R3;
	cout << "Enter R1:  ";
	cin >> R1;

	cout << "Enter R2:  ";
	cin >> R2;

	cout << "Enter R3:  ";
	cin >> R3;

	float R0 = 1 / R1 + 1 / R2 + 1 / R3;
	cout << "R0=  " << R0 << " \n ";
}