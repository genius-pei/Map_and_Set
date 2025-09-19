#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
using namespace std;
void test01()
{
	pair<string, string> kv1("apple", "苹果");
	pair<string, string> kv2("banana", "香蕉");
	pair<string, string> kv3("orange", "橘子");
	map<string, string> dicrtory = {kv1,kv2,kv3};
//	dicrtory.insert(make_pair("money", "软妹币"));
//	auto it = dicrtory.begin();
//	while (it != dicrtory.end())
//	{
//		//it->second = "xyz";
//		cout << (*it).first << ":" << (*it).second << endl;
//		++it;
//	}
//	cout << endl; 
//	for (auto& e : dicrtory)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//	//结构化绑定
//	
//
//	auto& [x1, y1] = kv1;
	string arr[] = { "苹果", "西瓜", "苹果", "西瓜", "苹果", "苹果", "西瓜","苹果", "香蕉", "苹果", "香蕉" };
	map<string, int> countMap;
	//for (auto& str : arr)
	//{
	//	//map<string, int>::iterator it = countMap.find(str);
	//	auto it = countMap.find(str);
	//	if(it != countMap.end())//已经存在
	//	{
	//		it->second++;
	//	}
	//	else
	//	{
	//		countMap.insert({str, 1});
	//	}

	//}


	 for (auto& str : arr)
	{
		countMap[str]++;
	}


	//for (auto& e : countMap)
	//{
	//	cout << e.first << ":" << e.second << endl;
	//}

	for (auto& [k, v] : countMap)
	{
		cout << k << ":" << v << endl;
	}
	
    dicrtory["insert"];//插入
	dicrtory["insert"] = "插入";//修改
    dicrtory["first"] = "第一";//插入+修改

	cout << dicrtory["insert"] << endl;
	cout << dicrtory["first"] << endl;
}
int main()
{
	test01();
	return 0; 
}