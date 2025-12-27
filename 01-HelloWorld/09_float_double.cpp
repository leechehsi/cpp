#include<iostream>
using namespace std;

// 浮點型
// 1. 單精度 float、4 byte、7 位有效數字
// 2. 雙精度 double、8 btye、15 ~ 16位有效數字

int main()
{
	// 1. 單精度 float
	// 2. 雙精度 double
	// 默認情況下，輸出一個小數，會顯示出 6 位有效數字

	float f0 = 3.14; // 編譯器預設將一個小數轉成雙精度小數
	float f1 = 3.1415926f; // 通常會在float類型後面加一個f，告訴編譯器這是一個float類型
	
	cout << "f1 = " << f1 << endl;

	double d1 = 3.1415926;
	
	cout << "d1 = " << d1 << endl;

	// 統計 float 和 double佔用內存空間
	cout << "float 佔用內存空間為: " << sizeof(float) << " 字節" << endl; // 4字節
	cout << "double 佔用內存空間為: " << sizeof(double) << " 字節" << endl; // 8字節

	// 科學計數法
	float f2 = 3e2; // 3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; // 3 * 10 ^ (-2)
	cout << "f3 = " << f3 << endl;

	return 0;
}