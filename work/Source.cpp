#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	double x, y, result;	// �w�q��ӹB��ƩM���G�ܼ�
	char oper;	// �w�q�B��Ÿ��ܼ�

	Calculator c;	// �Ы� Calculator ��������
	
	while (true) {
		char ch;	// �w�q�@���ܼƨӧP�_�O�_�~��B��
		cout << "�п�J�B�⦡: ";
		cin >> x >> oper >> y;		// ������J���B��ƩM�B��Ÿ�
		result = c.Calculate(x, oper, y);	// �p�⵲�G
		cout << "Result: " << result << endl;	// ��X���G
		cout << "�O�_�~��? (y/n) ";		// �߰ݬO�_�~��
		cin >> ch;
		
		if (ch == 'y') {	// �p�G��J 'y'�A�h�~��
			cout << "Continue..." << endl;
			cout << "Go..." << endl;
		}
		
		else break;	// �_�h�h�X�`���A�����{��
	}
}