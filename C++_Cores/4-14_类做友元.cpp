#include <iostream>
using namespace std;

// ?类做友元
class Building1;
class goodGay
{
public:
	  goodGay();
	  void visit();

private:
	Building1 *building;
};

class Building1
{
	  // ?告诉编译器 goodGay类是Building类的好朋友，可以访问到Building类中私有内容
	  friend class goodGay; // todo friend + class + 类名

public:
	Building1();

public:
	string m_SittingRoom; // 客厅
private:
	string m_BedRoom; // 卧室  私有内容
};

// todo 类外实现成员函数Building
Building1::Building1()
{
	  this->m_SittingRoom = "客厅";
	  this->m_BedRoom = "卧室";
}

// todo 类外实现成员函数goodGay
goodGay::goodGay()
{
	building = new Building1;
}

// todo 类外实现成员函数visit
void goodGay::visit()
{
	  cout << "好基友正在访问" << building->m_SittingRoom << endl;
	  cout << "好基友正在访问" << building->m_BedRoom << endl;
}

void test05()
{
	  goodGay gg;
	  gg.visit();
}

int main20()
{

	  test05();

	  system("pause");
	  return 0;
}