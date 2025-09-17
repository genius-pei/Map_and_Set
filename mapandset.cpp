  #define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
using namespace std;
void test_set()
{
	set<int> s = { 1,2,5,4,3,7,6 };
	set<int>::iterator it = s.begin();
	while (it != s.end())
	{
		//中序，排序，去重
		cout << *it << " ";
		++it;
	}
	cout << endl;
	s.insert(114);
	s.erase(6);
	for (auto e : s)
	{
		cout << e<<" ";
	}
	cout << endl;
	auto s1 = s.find(3);
	if (s1 != s.end())
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "没找到" << endl;
	}
	//删除[3,9]的值
	auto it1=s.lower_bound(3);
	auto it2 = s.upper_bound(7);

}
int main()
{
	test_set();

	return 0;
}