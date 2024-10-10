#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	double x, y, result;	// 定義兩個運算數和結果變數
	char oper;	// 定義運算符號變數

	Calculator c;	// 創建 Calculator 類的物件
	
	while (true) {
		char ch;	// 定義一個變數來判斷是否繼續運行
		cout << "請輸入運算式: ";
		cin >> x >> oper >> y;		// 接收輸入的運算數和運算符號
		result = c.Calculate(x, oper, y);	// 計算結果
		cout << "Result: " << result << endl;	// 輸出結果
		cout << "是否繼續? (y/n) ";		// 詢問是否繼續
		cin >> ch;
		
		if (ch == 'y') {	// 如果輸入 'y'，則繼續
			cout << "Continue..." << endl;
			cout << "Go..." << endl;
		}
		
		else break;	// 否則退出循環，結束程式
	}
}