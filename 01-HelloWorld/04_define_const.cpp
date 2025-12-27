#include<iostream>
#include <windows.h>
using namespace std;

// 常量的定義
// 1. #define 宏常量 常量值
// 2. const修飾的常量 

// 1. #define 宏常量
#define Day 7 

int main()
{

	// Day = 14; // 錯誤, Day是常量, 一旦修改就會錯報
	cout << "一週總共有: " << Day << " 天" << endl;

	// 2. const修飾的變量
	const int month = 12;
	// month = 24; // 錯誤, const修飾的變量也稱為常量

	cout << "一年總共有: " << month << " 個月份" << endl;

	return 0;
}