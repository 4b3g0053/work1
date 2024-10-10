#include <iostream>
using namespace std;

void printMultiplicationTable(int n) {
    for (int i = 1; i <= n; ++i) {          // 外層迴圈控制行
        for (int j = 1; j <= n; ++j) {      // 內層迴圈控制列
            cout << i << "*" << j << "=" << i * j << "\t";  //輸出每個乘積
        }
        cout << endl;// 每列結束後換行
    }
}

int main() {
    int n = 1;  // 定義乘法表的大小
    cout << "請輸入乘法表的大小: ";   // 請輸入表的大小
    cin >> n;   // 接收用戶輸入

    printMultiplicationTable(n);    // 調用函數來打印乘法表

    return 0;   // 結束程式
}
