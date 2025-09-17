  #define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
using namespace std;
void test_set()
{
	multiset<int> s = { 1,2,5,4,3,6,6,6,7,6 };
	set<int>::iterator it = s.begin();
	while (it != s.end())
	{
		//中序，排序，去重
		cout << *it << " ";
		++it;
	}
	cout << endl;
	s.insert(114);
	s.erase(3);
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
	
	auto it1=s.lower_bound(3);
	auto it2 = s.upper_bound(7);
	auto pos = s.find(6);
	
	
}
int main()
{
	test_set();

	return 0;
}