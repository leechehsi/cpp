#include<iostream>
using namespace std;

int main()
{
	// 1. 字符型變量創建方式
	char ch = 'a';
	cout << ch << endl;

	// 2. 字符型變量所佔內存大小
	cout << "char 字符型變量所佔內存: " << sizeof(char) << endl;

	// 3. 字符型變量常見錯誤
	// char ch2 = "b"; // 創建字符型變量時候，要用單引號
	// char ch2 = 'abcdef'; // 創建字符型變量時候，單引號內只能有一個字符

	// 4. 字符型變量對應 ASCII 編碼
	// a - 97
	// A - 65
	cout << ch << "的ASCII碼為: " << (int)ch << endl; // 97 為小寫 a 對應的 ASCII 碼

	return 0;
}