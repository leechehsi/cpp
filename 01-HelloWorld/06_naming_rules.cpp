#include<iostream>
using namespace std;

// 標識符命名規則
// 1. 命名符不可以是關鍵字
// 2. 標識符由字母、數字、下划線構成
// 3. 標識符第一個字母只能是字母或下划線
// 4. 標識符是區分大小寫的 
int main()
{
	// 1. 標識符不可以是關鍵字
	// int int = 10;

	// 2. 標識符是由字母、數字、下划線構成
	int abc = 10;
	int _abc = 20;
	int _123abc = 30;
	
	// 3. 標識符第一個字母只能是字母或下划線
	// int 123abc = 40;

	// 4. 標識符是區分大小寫的
	int aaa = 100;
	//cout << AAA << endl;  // AAA 和 aaa 不是同一個名稱

	// 建議： 給變量起名的時候，最重能夠做到見名知意
	// int a = 10;
	// int b = 20;
	// int c = a + b;
	// cout << c << endl;
	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	cout << sum << endl;

	return 0;
}