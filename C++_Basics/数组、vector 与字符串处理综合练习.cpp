#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

// ============================================================
// C++ 基础练习：数组、vector（动态数组） 与 string
// 适合阶段：学习完函数之后
// 使用方式：
// 1. 每次只做一题
// 2. 先看题目说明和考察知识点
// 3. 补全函数体中的 TODO
// 4. 到 main 函数中取消对应测试代码的注释
// 5. 运行并对比预期输出
// ============================================================


// ============================================================
// 题目 1：统计正数个数
// 考察知识点：vector 遍历、条件判断、计数器
// 题目说明：给定一个整数 vector，统计其中正数的个数。
// 函数声明：int countPositiveNumbers(const vector<int>& numbers)
// 预期输出示例：
// 输入：{-3, 5, 0, 8, -1}
// 输出：2
// ============================================================

int countPositiveNumbers(const vector<int>& numbers)
{
    // TODO: 遍历 vector，统计大于 0 的数字个数
    int count = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > 0) {
            count++;
        }
    }
    return count;
}


// ============================================================
// 题目 2：查找最大值
// 考察知识点：vector 遍历、最大值更新、边界处理
// 题目说明：给定一个整数 vector，返回其中的最大值。
// 函数声明：int findMaxValue(const vector<int>& numbers)
// 预期输出示例：
// 输入：{3, 9, 2, 15, 6}
// 输出：15
// ============================================================

int findMaxValue(const vector<int>& numbers)
{
    // TODO: 找出 vector 中的最大值
    if(numbers.size() <= 0) return 0;
	int max = numbers[0];
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}


// ============================================================
// 题目 3：计算平均分
// 考察知识点：vector 遍历、累加、double 返回值
// 题目说明：给定一组学生成绩，计算平均分。
// 函数声明：double calculateAverageScore(const vector<int>& scores)
// 预期输出示例：
// 输入：{80, 90, 100}
// 输出：90
// ============================================================

double calculateAverageScore(const vector<int>& scores)
{
    // TODO: 计算成绩总和，再求平均值
    int sum = 0;
    for (int i = 0; i < scores.size(); i++) {
        sum += scores[i];
    }
    return static_cast<double>(sum) / scores.size();    // static_cast: 将 sum 转换为 double 类型，避免整数除法
}


// ============================================================
// 题目 4：判断是否包含指定数字
// 考察知识点：vector 查找、bool 返回值、提前 return
// 题目说明：判断一个 vector 中是否包含目标数字。
// 函数声明：bool containsNumber(const vector<int>& numbers, int target)
// 预期输出示例：
// 输入：{1, 3, 5, 7}, target = 5
// 输出：true
// ============================================================

bool containsNumber(const vector<int>& numbers, int target)
{
    // TODO: 判断 target 是否存在于 numbers 中
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == target) {
            return true;
        }
    }
    return false;
}


// ============================================================
// 题目 5：统计偶数数量
// 考察知识点：取模运算、vector 遍历、计数器
// 题目说明：统计 vector 中有多少个偶数。
// 函数声明：int countEvenNumbers(const vector<int>& numbers)
// 预期输出示例：
// 输入：{1, 2, 3, 4, 5, 6}
// 输出：3
// ============================================================

int countEvenNumbers(const vector<int>& numbers)
{
    // TODO: 统计偶数数量
    int count = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}


// ============================================================
// 题目 6：反转 vector
// 考察知识点：vector、下标访问、返回新 vector
// 题目说明：给定一个 vector，返回一个反转后的新 vector。
// 函数声明：vector<int> reverseVector(const vector<int>& numbers)
// 预期输出示例：
// 输入：{1, 2, 3, 4}
// 输出：{4, 3, 2, 1}
// ============================================================

vector<int> reverseVector(const vector<int>& numbers)
{
    // TODO: 创建一个新 vector，将原数据反向存入
    vector<int> reversed;
    for (int i = numbers.size() - 1; i >= 0; i--) {
        reversed.push_back(numbers[i]);   // push_back: 向容器尾部添加元素，效率高于 insert，reversed: 新 vector
    }
    return reversed;
}


// ============================================================
// 题目 7：删除负数
// 考察知识点：vector 筛选、条件判断、push_back
// 题目说明：返回一个只包含非负数的新 vector。
// 函数声明：vector<int> removeNegativeNumbers(const vector<int>& numbers)
// 预期输出示例：
// 输入：{-2, 3, -5, 8, 0}
// 输出：{3, 8, 0}
// ============================================================

vector<int> removeNegativeNumbers(const vector<int>& numbers)
{
    // TODO: 保留大于等于 0 的数字
    vector<int> positiveNumbers;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] >= 0)
            positiveNumbers.push_back(numbers[i]);
    }
    return positiveNumbers;
}


// ============================================================
// 题目 8：合并两个 vector
// 考察知识点：vector 拼接、参数传递、push_back
// 题目说明：将两个 vector 合并成一个新的 vector。
// 函数声明：vector<int> mergeVectors(const vector<int>& first, const vector<int>& second)
// 预期输出示例：
// 输入：{1, 2}, {3, 4}
// 输出：{1, 2, 3, 4}
// ============================================================

vector<int> mergeVectors(const vector<int>& first, const vector<int>& second)
{
    // TODO: 将 first 和 second 中的元素依次放入新 vector
    vector<int> merged;
    for (int i = 0; i < first.size(); i++){
        merged.push_back(first[i]);
    }
    for (int j = 0; j < second.size(); j++) {
        merged.push_back(second[j]);
    }
    return merged;
}


// ============================================================
// 题目 9：计算两个 vector 的点积
// 考察知识点：vector 下标访问、循环、数学计算
// 题目说明：给定两个长度相同的 vector，计算它们的点积。
// 点积示例：{1, 2, 3} 和 {4, 5, 6} 的点积是 1*4 + 2*5 + 3*6。
// 函数声明：int calculateDotProduct(const vector<int>& a, const vector<int>& b)
// 预期输出示例：
// 输入：{1, 2, 3}, {4, 5, 6}
// 输出：32
// ============================================================

int calculateDotProduct(const vector<int>& a, const vector<int>& b)
{
    int dotProduct = 0;
    for (int i = 0; i < a.size(); i++) {
        dotProduct += a[i] * b[i];
    }
    return dotProduct;
}


// ============================================================
// 题目 10：统计大于平均值的元素数量
// 考察知识点：平均值、二次遍历、函数拆分思想
// 题目说明：给定一个 vector，统计其中有多少个元素大于平均值。
// 函数声明：int countAboveAverage(const vector<int>& numbers)
// 预期输出示例：
// 输入：{10, 20, 30, 40}
// 平均值：25
// 输出：2
// ============================================================

int countAboveAverage(const vector<int>& numbers)
{
    // TODO: 先计算平均值，再统计大于平均值的元素数量
    int Sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        Sum += numbers[i];
    }
    double average = static_cast<double>(Sum) / numbers.size();
    int count = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > average) {
            count++;
        }
    }
    return count;
}


// ============================================================
// 题目 11：字符串长度检查
// 考察知识点：string 参数、size()、bool 返回值
// 题目说明：判断用户名长度是否合法，要求长度在 6 到 12 之间。
// 函数声明：bool isValidUsernameLength(const string& username)
// 预期输出示例：
// 输入："rudo123"
// 输出：true
// ============================================================

bool isValidUsernameLength(const string& username)
{
    // TODO: 判断 username 的长度是否在 6 到 12 之间
    if (username.size() >= 6 && username.size() <= 12) {
        return true;
    }
    return false;
}


// ============================================================
// 题目 12：统计字符串中的数字字符数量
// 考察知识点：string 遍历、字符判断、ASCII 基础
// 题目说明：统计字符串中有多少个数字字符。
// 函数声明：int countDigitCharacters(const string& text)
// 预期输出示例：
// 输入："abc123x9"
// 输出：4
// ============================================================

int countDigitCharacters(const string& text)
{
    // TODO: 遍历字符串，统计 '0' 到 '9' 之间的字符
    int Count = 0;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] >= '0' && text[i] <= '9') {
            Count++;
        }
    }
    return Count;
}


// ============================================================
// 题目 13：统计大写字母数量
// 考察知识点：字符范围判断、string 遍历
// 题目说明：统计字符串中大写英文字母的数量。
// 函数声明：int countUppercaseLetters(const string& text)
// 预期输出示例：
// 输入："Hello CPP World"
// 输出：5
// ============================================================

int countUppercaseLetters(const string& text)
{
    // TODO: 统计 'A' 到 'Z' 之间的字符数量
    int Count = 0;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            Count++;
        }
    }
    return Count;
}


// ============================================================
// 题目 14：简单密码强度检查
// 考察知识点：string 遍历、bool 标记、多条件判断
// 题目说明：判断密码是否满足以下条件：
// 1. 长度不少于 8
// 2. 至少包含一个数字
// 3. 至少包含一个大写字母
// 函数声明：bool isStrongPassword(const string& password)
// 预期输出示例：
// 输入："Cpp2026A"
// 输出：true
// ============================================================

bool isStrongPassword(const string& password)
{
    // TODO: 检查长度、数字字符、大写字母
    if (password.size() >= 8) {
        for (int i = 0; i < password.size(); i++) {
            if (password[i] >= '0' && password[i] <= '9') {
                if (password[i] >= 'A' && password[i] <= 'Z') {
                    return true;
                }
            }

        }
    }
    return false;
}


// ============================================================
// 题目 15：隐藏手机号中间四位
// 考察知识点：string 修改、下标访问、实际业务场景
// 题目说明：给定 11 位手机号，将中间四位替换为 ****。
// 函数声明：string maskPhoneNumber(const string& phoneNumber)
// 预期输出示例：
// 输入："13812345678"
// 输出："138****5678"
// ============================================================

string maskPhoneNumber(const string& phoneNumber)
{
    // TODO: 判断手机号长度是否为 11，然后隐藏中间四位
    string maskedPhoneNumber = phoneNumber;
    if (phoneNumber.size() == 11) {
        maskedPhoneNumber = phoneNumber.substr(0, 3) + "****" + phoneNumber.substr(7, 4);  //substr(a,b): 字符串切片，a是切片位置，b是切片长度
    }
    return maskedPhoneNumber;
}


// ============================================================
// 题目 16：提取邮箱用户名
// 考察知识点：string 查找、子字符串、实际业务场景
// 题目说明：给定邮箱地址，提取 @ 前面的用户名部分。
// 函数声明：string extractEmailUsername(const string& email)
// 预期输出示例：
// 输入："student@example.com"
// 输出："student"
// ============================================================

string extractEmailUsername(const string& email)
{
    // TODO: 找到 @ 的位置，并截取前面的字符串
    return "";
}


// ============================================================
// 题目 17：判断字符串是否只包含字母和数字
// 考察知识点：字符判断、输入合法性检查
// 题目说明：判断一个字符串是否只由英文字母和数字组成。
// 函数声明：bool isAlphaNumericString(const string& text)
// 预期输出示例：
// 输入："Cpp2026"
// 输出：true
// 输入："Cpp@2026"
// 输出：false
// ============================================================

bool isAlphaNumericString(const string& text)
{
    // TODO: 判断每个字符是否是字母或数字
    return false;
}


// ============================================================
// 题目 18：统计关键词出现次数
// 考察知识点：vector<string>、字符串比较、计数器
// 题目说明：给定一组单词，统计目标关键词出现了几次。
// 函数声明：int countKeywordOccurrences(const vector<string>& words, const string& keyword)
// 预期输出示例：
// 输入：{"cpp", "ai", "cpp", "deploy"}, keyword = "cpp"
// 输出：2
// ============================================================

int countKeywordOccurrences(const vector<string>& words, const string& keyword)
{
    // TODO: 统计 keyword 在 words 中出现的次数
    return 0;
}


// ============================================================
// 题目 19：查找最长单词
// 考察知识点：vector<string>、string 长度比较
// 题目说明：给定一组单词，返回长度最长的单词。
// 函数声明：string findLongestWord(const vector<string>& words)
// 预期输出示例：
// 输入：{"C", "C++", "Python", "TensorRT"}
// 输出："TensorRT"
// ============================================================

string findLongestWord(const vector<string>& words)
{
    // TODO: 找出长度最长的字符串
    return "";
}


// ============================================================
// 题目 20：生成简单标签
// 考察知识点：string 拼接、vector<string>、实际应用
// 题目说明：给定若干技能名称，为每个技能名前面加上 "#"。
// 函数声明：vector<string> generateSkillTags(const vector<string>& skills)
// 预期输出示例：
// 输入：{"C++", "OpenCV", "TensorRT"}
// 输出：{"#C++", "#OpenCV", "#TensorRT"}
// ============================================================

vector<string> generateSkillTags(const vector<string>& skills)
{
    // TODO: 为每个技能名称生成标签
    return {};
}


// ============================================================
// 题目 21：成绩等级统计
// 考察知识点：vector、条件判断、引用传递、多结果输出
// 题目说明：给定一组成绩，统计优秀、及格、不及格的人数。
// 规则：
// 90 分及以上：优秀
// 60 到 89 分：及格
// 60 分以下：不及格
// 函数声明：void countScoreLevels(const vector<int>& scores, int& excellent, int& passed, int& failed)
// 预期输出示例：
// 输入：{95, 80, 59, 100, 60}
// 输出：优秀 2 人，及格 2 人，不及格 1 人
// ============================================================

void countScoreLevels(const vector<int>& scores, int& excellent, int& passed, int& failed)
{
    // TODO: 使用引用参数返回多个统计结果
}


// ============================================================
// 题目 22：商品价格打折
// 考察知识点：vector<double>、浮点数计算、批量处理
// 题目说明：给定一组商品价格和折扣，返回打折后的价格列表。
// 函数声明：vector<double> applyDiscount(const vector<double>& prices, double discount)
// 预期输出示例：
// 输入：{100, 200, 50}, discount = 0.8
// 输出：{80, 160, 40}
// ============================================================

vector<double> applyDiscount(const vector<double>& prices, double discount)
{
    // TODO: 对每个价格乘以 discount
    return {};
}


// ============================================================
// 题目 23：简单搜索建议
// 考察知识点：vector<string>、字符串前缀匹配、实际应用
// 题目说明：给定一组候选词和一个前缀，返回所有以前缀开头的词。
// 函数声明：vector<string> searchByPrefix(const vector<string>& words, const string& prefix)
// 预期输出示例：
// 输入：{"apple", "app", "banana", "application"}, prefix = "app"
// 输出：{"apple", "app", "application"}
// ============================================================

vector<string> searchByPrefix(const vector<string>& words, const string& prefix)
{
    // TODO: 判断每个单词是否以 prefix 开头
    return {};
}


// ============================================================
// 题目 24：检测异常温度数据
// 考察知识点：vector<double>、范围判断、数据清洗思维
// 题目说明：给定一组温度数据，返回所有异常温度的下标。
// 异常规则：温度小于 -50 或大于 60。
// 函数声明：vector<int> findAbnormalTemperatureIndexes(const vector<double>& temperatures)
// 预期输出示例：
// 输入：{25.5, 61.2, -60.0, 30.0}
// 输出：{1, 2}
// ============================================================

vector<int> findAbnormalTemperatureIndexes(const vector<double>& temperatures)
{
    // TODO: 返回异常温度所在的下标
    return {};
}


// ============================================================
// 题目 25：简历技能匹配度计算
// 考察知识点：vector<string>、嵌套循环、实际求职场景
// 题目说明：给定岗位要求技能和个人技能，统计匹配的技能数量。
// 函数声明：int countMatchedSkills(const vector<string>& requiredSkills, const vector<string>& mySkills)
// 预期输出示例：
// requiredSkills = {"C++", "OpenCV", "Linux", "CMake"}
// mySkills = {"C++", "Python", "CMake"}
// 输出：2
// ============================================================

int countMatchedSkills(const vector<string>& requiredSkills, const vector<string>& mySkills)
{
    // TODO: 统计 mySkills 中有多少项出现在 requiredSkills 中
    return 0;
}


// ============================================================
// 题目 26：简单日志等级统计
// 考察知识点：vector<string>、字符串比较、实际工程场景
// 题目说明：给定日志等级列表，统计 ERROR 出现次数。
// 函数声明：int countErrorLogs(const vector<string>& logLevels)
// 预期输出示例：
// 输入：{"INFO", "ERROR", "WARNING", "ERROR"}
// 输出：2
// ============================================================

int countErrorLogs(const vector<string>& logLevels)
{
    // TODO: 统计 "ERROR" 的出现次数
    return 0;
}


// ============================================================
// 题目 27：简单推理结果过滤
// 考察知识点：vector<double>、阈值过滤、AI 部署基础场景
// 题目说明：给定一组模型置信度，返回大于等于阈值的置信度。
// 函数声明：vector<double> filterConfidences(const vector<double>& confidences, double threshold)
// 预期输出示例：
// 输入：{0.2, 0.85, 0.6, 0.95}, threshold = 0.8
// 输出：{0.85, 0.95}
// ============================================================

vector<double> filterConfidences(const vector<double>& confidences, double threshold)
{
    // TODO: 筛选出大于等于 threshold 的置信度
    return {};
}


// ============================================================
// 题目 28：计算二维点到原点的距离
// 考察知识点：vector<double>、cmath、数学函数
// 题目说明：给定二维点坐标 {x, y}，计算它到原点的距离。
// 距离公式：sqrt(x * x + y * y)
// 函数声明：double calculateDistanceToOrigin(const vector<double>& point)
// 预期输出示例：
// 输入：{3, 4}
// 输出：5
// ============================================================

double calculateDistanceToOrigin(const vector<double>& point)
{
    // TODO: 判断 point 是否包含两个元素，然后计算距离
    return 0.0;
}


// ============================================================
// 题目 29：格式化姓名
// 考察知识点：string 拼接、函数返回值、实际业务场景
// 题目说明：给定姓和名，返回完整姓名，格式为 "姓 名"。
// 函数声明：string formatFullName(const string& firstName, const string& lastName)
// 预期输出示例：
// 输入："Owen", "Rudolf"
// 输出："Rudolf Owen"
// ============================================================

string formatFullName(const string& firstName, const string& lastName)
{
    // TODO: 拼接 lastName、空格、firstName
    return "";
}


// ============================================================
// 题目 30：简单购物车总价计算
// 考察知识点：vector<double>、循环累加、实际应用
// 题目说明：给定商品价格列表，计算购物车总价。
// 函数声明：double calculateCartTotal(const vector<double>& prices)
// 预期输出示例：
// 输入：{19.9, 30.0, 50.1}
// 输出：100.0
// ============================================================

double calculateCartTotal(const vector<double>& prices)
{
    // TODO: 累加所有商品价格
    return 0.0;
}


// ============================================================
// main 函数：测试区域
// 使用方式：每做完一题，就取消对应测试代码的注释。
// ============================================================

int main()
{
    cout << "C++ Array / Vector / String Practice" << endl;

    /*
    // 题目 1 测试
    vector<int> numbers1 = {-3, 5, 0, 8, -1};
    cout << countPositiveNumbers(numbers1) << endl;
    // 预期输出：2
    */

    /*
    // 题目 2 测试
    vector<int> numbers2 = {3, 9, 2, 15, 6};
    cout << findMaxValue(numbers2) << endl;
    // 预期输出：15
    */

    /*
    // 题目 3 测试
    vector<int> scores3 = {80, 90, 100};
    cout << calculateAverageScore(scores3) << endl;
    // 预期输出：90
    */

    /*
    // 题目 4 测试
    vector<int> numbers4 = {1, 3, 5, 7};
    cout << containsNumber(numbers4, 5) << endl;
    // 预期输出：1
    */

    /*
    // 题目 5 测试
    vector<int> numbers5 = {1, 2, 3, 4, 5, 6};
    cout << countEvenNumbers(numbers5) << endl;
    // 预期输出：3
    */

    /*
    // 题目 6 测试
    vector<int> numbers6 = {1, 2, 3, 4};
    vector<int> result6 = reverseVector(numbers6);
    // 预期输出：4 3 2 1
    */

    /*
    // 题目 7 测试
    vector<int> numbers7 = {-2, 3, -5, 8, 0};
    vector<int> result7 = removeNegativeNumbers(numbers7);
    // 预期输出：3 8 0
    */

    /*
    // 题目 8 测试
    vector<int> first8 = {1, 2};
    vector<int> second8 = {3, 4};
    vector<int> result8 = mergeVectors(first8, second8);
    // 预期输出：1 2 3 4
    */

    /*
    // 题目 9 测试
    vector<int> a9 = {1, 2, 3};
    vector<int> b9 = {4, 5, 6};
    cout << calculateDotProduct(a9, b9) << endl;
    // 预期输出：32
    */

    /*
    // 题目 10 测试
    vector<int> numbers10 = {10, 20, 30, 40};
    cout << countAboveAverage(numbers10) << endl;
    // 预期输出：2
    */

    /*
    // 题目 11 测试
    cout << isValidUsernameLength("rudo123") << endl;
    // 预期输出：1
    */

    /*
    // 题目 12 测试
    cout << countDigitCharacters("abc123x9") << endl;
    // 预期输出：4
    */

    /*
    // 题目 13 测试
    cout << countUppercaseLetters("Hello CPP World") << endl;
    // 预期输出：5
    */

    /*
    // 题目 14 测试
    cout << isStrongPassword("Cpp2026A") << endl;
    // 预期输出：1
    */

    /*
    // 题目 15 测试
    cout << maskPhoneNumber("13812345678") << endl;
    // 预期输出：138****5678
    */

    /*
    // 题目 16 测试
    cout << extractEmailUsername("student@example.com") << endl;
    // 预期输出：student
    */

    /*
    // 题目 17 测试
    cout << isAlphaNumericString("Cpp2026") << endl;
    cout << isAlphaNumericString("Cpp@2026") << endl;
    // 预期输出：1 0
    */

    /*
    // 题目 18 测试
    vector<string> words18 = {"cpp", "ai", "cpp", "deploy"};
    cout << countKeywordOccurrences(words18, "cpp") << endl;
    // 预期输出：2
    */

    /*
    // 题目 19 测试
    vector<string> words19 = {"C", "C++", "Python", "TensorRT"};
    cout << findLongestWord(words19) << endl;
    // 预期输出：TensorRT
    */

    /*
    // 题目 20 测试
    vector<string> skills20 = {"C++", "OpenCV", "TensorRT"};
    vector<string> result20 = generateSkillTags(skills20);
    // 预期输出：#C++ #OpenCV #TensorRT
    */

    /*
    // 题目 21 测试
    vector<int> scores21 = {95, 80, 59, 100, 60};
    int excellent = 0;
    int passed = 0;
    int failed = 0;
    countScoreLevels(scores21, excellent, passed, failed);
    cout << excellent << " " << passed << " " << failed << endl;
    // 预期输出：2 2 1
    */

    /*
    // 题目 22 测试
    vector<double> prices22 = {100, 200, 50};
    vector<double> result22 = applyDiscount(prices22, 0.8);
    // 预期输出：80 160 40
    */

    /*
    // 题目 23 测试
    vector<string> words23 = {"apple", "app", "banana", "application"};
    vector<string> result23 = searchByPrefix(words23, "app");
    // 预期输出：apple app application
    */

    /*
    // 题目 24 测试
    vector<double> temperatures24 = {25.5, 61.2, -60.0, 30.0};
    vector<int> result24 = findAbnormalTemperatureIndexes(temperatures24);
    // 预期输出：1 2
    */

    /*
    // 题目 25 测试
    vector<string> requiredSkills25 = {"C++", "OpenCV", "Linux", "CMake"};
    vector<string> mySkills25 = {"C++", "Python", "CMake"};
    cout << countMatchedSkills(requiredSkills25, mySkills25) << endl;
    // 预期输出：2
    */

    /*
    // 题目 26 测试
    vector<string> logs26 = {"INFO", "ERROR", "WARNING", "ERROR"};
    cout << countErrorLogs(logs26) << endl;
    // 预期输出：2
    */

    /*
    // 题目 27 测试
    vector<double> confidences27 = {0.2, 0.85, 0.6, 0.95};
    vector<double> result27 = filterConfidences(confidences27, 0.8);
    // 预期输出：0.85 0.95
    */

    /*
    // 题目 28 测试
    vector<double> point28 = {3, 4};
    cout << calculateDistanceToOrigin(point28) << endl;
    // 预期输出：5
    */

    /*
    // 题目 29 测试
    cout << formatFullName("Owen", "Rudolf") << endl;
    // 预期输出：Rudolf Owen
    */

    /*
    // 题目 30 测试
    vector<double> prices30 = {19.9, 30.0, 50.1};
    cout << calculateCartTotal(prices30) << endl;
    // 预期输出：100
    */

    return 0;
}
