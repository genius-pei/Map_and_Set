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

}
int main()
{
	test01();
	return 0;
}