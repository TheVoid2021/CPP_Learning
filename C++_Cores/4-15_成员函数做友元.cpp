#include <iostream>
using namespace std;

// !成员函数做友元
class Building2;
class goodGay1
{
public:
	  goodGay1();
	  void visit(); // ?只让visit函数作为Building的好朋友，可以发访问Building中私有内容
	  void visit2();

private:
	Building2 *building;
};

class Building2
{
	  // ?告诉编译器  goodGay类中的visit成员函数 是Building好朋友，可以访问私有内容
	  friend void goodGay1::visit();

public:
	Building2();

public:
	string m_SittingRoom; // 客厅
private:
	string m_BedRoom; // 卧室
};

// todo 类外实现成员函数
Building2::Building2()
{
	  this->m_SittingRoom = "客厅";
	  this->m_BedRoom = "卧室";
}

// todo 类外实现成员函数
goodGay1::goodGay1()
{
	building = new Building2;
}

// todo 类外实现成员函数
void goodGay1::visit()
{
	  cout << "好基友正在访问" << building->m_SittingRoom << endl;
	  cout << "好基友正在访问" << building->m_BedRoom << endl; // todo 开放了m_BedRoom的访问权限给visit
}

void goodGay1::visit2()
{
	  cout << "好基友正在访问" << building->m_SittingRoom << endl;
	  // cout << "好基友正在访问" << building->m_BedRoom << endl;  // todo 只给visit成员函数开放了友元权限
}

void test06()
{
	  goodGay1 gg;
	  gg.visit();
}

int main21()
{

	  test06();

	  system("pause");
	  return 0;
}