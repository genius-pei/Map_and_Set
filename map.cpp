#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
using namespace std;
void test01()
{
	pair<string, string> kv1("apple", "ƻ��");
	pair<string, string> kv2("banana", "�㽶");
	pair<string, string> kv3("orange", "����");
	map<string, string> dicrtory = {kv1,kv2,kv3};
	dicrtory.insert(make_pair("money", "���ñ�"));
	auto it = dicrtory.begin();
	while (it != dicrtory.end())
	{
		//it->second = "xyz";
		cout << (*it).first << ":" << (*it).second << endl;
		++it;
	}
	cout << endl;
	for (auto& e : dicrtory)
	{
		cout << e.first << ":" << e.second << endl;
	}

}
int main()
{
	test01();
	return 0;
}