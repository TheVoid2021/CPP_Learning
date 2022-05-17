#include <iostream>
using namespace std;

int main146() {
	// ==================== 练习 1：数据类型与常量 ====================
	cout << "=== 练习 1：数据类型与常量 ===" << endl;

	// 1.1 用 const 定义常量，计算圆的面积（半径由用户输入）
	const double PI = 3.14159;
	double radius;
	cout << "请输入圆的半径：";
	cin >> radius;
	double area = PI * radius * radius;
	cout << "圆的面积为：" << area << endl << endl;

	// 1.2 字符类型练习：大小写转换
	char ch;
	cout << "请输入一个大写字母：";
	cin >> ch;
	char lowerCh = ch + 32;  // 转为小写
	cout << "对应的小写字母为：" << lowerCh << endl << endl;

	// 1.3 布尔类型练习：判断奇偶
	int num;
	cout << "请输入一个整数：";
	cin >> num;
	bool isEven = (num % 2 == 0);
	cout << "该数是偶数吗？" << (isEven ? "是" : "否") << endl << endl;


	// ==================== 练习 2：选择结构 ====================
	cout << "=== 练习 2：选择结构 ===" << endl;

	// 2.1 成绩等级评定
	int score;
	cout << "请输入成绩（0-100）：";
	cin >> score;

	if (score >= 90) {
		cout << "等级：A（优秀）" << endl;
	}
	else if (score >= 80) {
		cout << "等级：B（良好）" << endl;
	}
	else if (score >= 70) {
		cout << "等级：C（中等）" << endl;
	}
	else if (score >= 60) {
		cout << "等级：D（及格）" << endl;
	}
	else {
		cout << "等级：E（不及格）" << endl;
	}

	// 2.2 switch 语句：菜单选择
	cout << "\n请选择功能（1-3）：" << endl;
	cout << "1. 查看信息" << endl;
	cout << "2. 修改设置" << endl;
	cout << "3. 退出程序" << endl;
	int choice;
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "显示信息..." << endl;
		break;
	case 2:
		cout << "进入设置..." << endl;
		break;
	case 3:
		cout << "退出程序" << endl;
		return 0;
	default:
		cout << "无效选择！" << endl;
	}
	cout << endl;


	// ==================== 练习 3：循环结构 ====================
	cout << "=== 练习 3：循环结构 ===" << endl;

	// 3.1 for 循环：计算 1 到 n 的和
	int n;
	cout << "请输入 n 的值：";
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << "1 到 " << n << " 的和为：" << sum << endl;

	// 3.2 while 循环：数字反转
	int original, reversed = 0, remainder;
	cout << "\n请输入一个正整数：";
	cin >> original;
	int temp = original;
	while (temp > 0) {
		remainder = temp % 10;
		reversed = reversed * 10 + remainder;
		temp /= 10;
	}
	cout << original << " 反转后为：" << reversed << endl;

	// 3.3 嵌套循环：打印直角三角形
	cout << "\n打印直角三角形：" << endl;
	int rows;
	cout << "请输入行数：";
	cin >> rows;
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;


	// ==================== 练习 4：数组 ====================
	cout << "=== 练习 4：数组 ===" << endl;

	// 4.1 一维数组：求最大值和最小值
	int numbers[5];
	cout << "请输入 5 个整数：" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "第 " << (i + 1) << " 个数：";
		cin >> numbers[i];
	}

	int maxVal = numbers[0];
	int minVal = numbers[0];
	for (int i = 1; i < 5; i++) {
		if (numbers[i] > maxVal) maxVal = numbers[i];
		if (numbers[i] < minVal) minVal = numbers[i];
	}
	cout << "最大值：" << maxVal << "，最小值：" << minVal << endl;

	// 4.2 数组逆序
	cout << "\n原数组：";
	for (int i = 0; i < 5; i++) {
		cout << numbers[i] << " ";
	}
	cout << "\n逆序后：";
	for (int i = 4; i >= 0; i--) {
		cout << numbers[i] << " ";
	}
	cout << endl << endl;


	// ==================== 练习 5：综合应用 ====================
	cout << "=== 练习 5：综合应用 ===" << endl;

	// 5.1 猜数字游戏
	cout << "猜数字游戏（1-100）" << endl;
	int target = 42;  // 可以改为随机数
	int guess;
	int attempts = 0;

	do {
		cout << "请输入你的猜测：";
		cin >> guess;
		attempts++;

		if (guess > target) {
			cout << "太大了！" << endl;
		}
		else if (guess < target) {
			cout << "太小了！" << endl;
		}
	} while (guess != target);

	cout << "恭喜你猜对了！用了 " << attempts << " 次" << endl;

	// 5.2 字符串处理：统计元音字母
	cout << "\n请输入一个字符串：";
	string str;
	cin >> str;

	int vowelCount = 0;
	for (int i = 0; i < str.length(); i++) {
		char c = tolower(str[i]);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			vowelCount++;
		}
	}
	cout << "元音字母个数：" << vowelCount << endl;

	cout << "\n=== 练习完成 ===" << endl;

	system("pause");
	return 0;
}
