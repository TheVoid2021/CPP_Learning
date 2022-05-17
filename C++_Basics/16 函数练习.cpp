#include <iostream>
using namespace std;

// 练习 1：定义一个函数，判断一个数是否为偶数
// 提示：函数返回 bool 类型，参数为 int
bool isEven(int num) {
    // 请在此处补充代码
    return num % 2 == 0;
}

// 练习 2：定义一个函数，计算两个数的和
// 提示：函数返回 int 类型，两个 int 参数
inline int add(int a, int b) {     // inline: inline 用于内联函数，主要解决头文件中函数重复定义的问题。
    // 请在此处补充代码
    return a + b;
}

// 练习 3：定义一个函数，打印 n 行星号
// 提示：函数无返回值，一个 int 参数
void printStars(int n) {
    // 请在此处补充代码，使用嵌套循环
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// 练习 4：定义一个函数，找出数组中的最大值
// 提示：函数返回 int 类型，参数为数组和长度
int findMax(int array[], int len) {
    // 请在此处补充代码
    if (len <= 0) return 0;
    int max = array[0];
    for (int i = 1; i < len; i++) {
        if (array[i] > max){
            max = array[i];
        }
    }
    return max;
}

// 练习 5：函数重载 - 计算不同数量的和
// 提示：编写两个同名函数，一个接受 2 个参数，一个接受 3 个参数
int sum(int a, int b) {
    // 请在此处补充代码
    return a + b;
}

int sum(int a, int b, int c) {
    // 请在此处补充代码
    return a + b + c;
}

int main154() {
    // 测试练习 1
    int num = 10;
    if (isEven(num)) {
        cout << num << " 是偶数" << endl;
    }
    else {
        cout << num << " 是奇数" << endl;
    }

    // 测试练习 2
    int a = 5, b = 3;
    cout << a << " + " << b << " = " << add(a, b) << endl;

    // 测试练习 3
    printStars(5);

    // 测试练习 4
    int arr[] = { 3, 7, 2, 9, 1 };
    cout << "最大值：" << findMax(arr, 5) << endl;

    // 测试练习 5
    cout << "sum(2, 3) = " << sum(2, 3) << endl;
    cout << "sum(2, 3, 4) = " << sum(2, 3, 4) << endl;

    system("pause");
    return 0;
}
