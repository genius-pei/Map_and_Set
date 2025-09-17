#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
using namespace std;
void test01()
{
	pair<string, string> kv1("apple", "Æ»¹û");
	pair<string, string> kv2("banana", "Ïã½¶");
	pair<string, string> kv3("orange", "éÙ×Ó");
	map<string, string> dicrtory = {kv1,kv2,kv3};
	dicrtory.insert(make_pair("money", "ÈíÃÃ±Ò"));

}
int main()
{
	test01();
	return 0;
}