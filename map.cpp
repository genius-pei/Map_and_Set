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
//	dicrtory.insert(make_pair("money", "���ñ�"));
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
//	//�ṹ����
//	
//
//	auto& [x1, y1] = kv1;
	string arr[] = { "ƻ��", "����", "ƻ��", "����", "ƻ��", "ƻ��", "����","ƻ��", "�㽶", "ƻ��", "�㽶" };
	map<string, int> countMap;
	//for (auto& str : arr)
	//{
	//	//map<string, int>::iterator it = countMap.find(str);
	//	auto it = countMap.find(str);
	//	if(it != countMap.end())//�Ѿ�����
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
	
    dicrtory["insert"];//����
	dicrtory["insert"] = "����";//�޸�
    dicrtory["first"] = "��һ";//����+�޸�

	cout << dicrtory["insert"] << endl;
	cout << dicrtory["first"] << endl;
}
int main()
{
	test01();
	return 0; 
}