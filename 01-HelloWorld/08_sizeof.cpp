#include<iostream>
using namespace std;

int main()
{
	// 整型： short (2)、int (4)、long (4)、long long (8)
	// 可以利用sizeof求出數據類型佔用內存大小
	// 語法： sizeof( 數據類型 / 變量)
	
	short num1 = 10;
	cout << "short 佔用內存空間為: " << sizeof(short) << endl;
	cout << "num1佔用內存空間為: " << sizeof(num1) << endl;

	int num2 = 10;
	cout << "int 佔用內存空間為: " << sizeof(int) << endl;

	long num3 = 10;
	cout << "long 佔用內存空間為: " << sizeof(long) << endl;

	long long num4 = 10;
	cout << "long long 佔用內存空間為: " << sizeof(long long) << endl;

	// 整型大小比較
	// short < int <= long <= long long
	// windows中 int = long 均為 4 字節
	// linux 64位元中 long 為 8 字節

	return 0;
}