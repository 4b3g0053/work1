#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper) {		// 根據操作符號選擇對應的運算
	case '+':
		return x + y;	// 如果操作符是加號，則進行加法運算
	case '-':
		return x - y;	// 如果操作符是減號，則進行減法運算
	case '*':
		return x * y;	// 如果操作符是乘號，則進行乘法運算
	case '/':
		return x / y;	// 如果操作符是除號，則進行除法運算
	default:			// 如果輸入的操作符不符合預期，則返回 0.0
		return 0.0;
	}
}
