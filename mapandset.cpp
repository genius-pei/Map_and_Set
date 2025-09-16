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
		//÷––Ú£¨≈≈–Ú£¨»•÷ÿ
		cout << *it << " ";
		++it;
	}
	cout << endl;
	s.insert(114);
	for (auto e : s)
	{
		cout << e<<" ";
	}
	cout << endl;

}
int main()
{
	test_set();

	return 0;
}