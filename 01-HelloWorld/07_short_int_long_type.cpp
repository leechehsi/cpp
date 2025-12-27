#include<iostream>
using namespace std;

int main()
{
	// 整型
	// 1. 短整型 (2 byte), (-32768 ~ 32767)
	short num1 = 10;
	//num1 = 32768; // 超過變成 -32768

	// 2. 整型 (4 byte)
	int num2 = 10;
	
	// 3. 長整型 (4 byte)
	long num3 = 10;
	
	// 4. 長長整型 (8 byte)
	long long num4 = 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	system("pause");

	return 0;
}