#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
#include<set>
using namespace std;
void test01()
{
	pair<string, string> kv1("apple", "ƻ��");
	pair<string, string> kv2("banana", "�㽶");
	pair<string, string> kv3("orange", "����");
	map<string, string> dicrtory = { kv1,kv2,kv3 };
	dicrtory.insert(make_pair("money", "���ñ�"));
	auto it = dicrtory.begin();
	while (it != dicrtory.end())
	{
		//it->second = "xyz";
		cout << (*it).first << ":" << (*it).second << endl;
		++it;
	}
	cout << endl;
	//	for (auto& e : dicrtory)
	//	{
	//		cout << e.first << ":" << e.second << endl;
	//	}
	//	//�ṹ����
	//	
	//
	//	auto& [x1, y1] = kv1;
	

	//dicrtory["insert"];//����
	//dicrtory["insert"] = "����";//�޸�
	//dicrtory["first"] = "��һ";//����+�޸�

	//cout << dicrtory["insert"] << endl;
	//cout << dicrtory["first"] << endl;
}
	void test02()
	{
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
}
	void blogtest()
	{
			std::map<std::string, int> scores;

			// ����Ԫ��
			scores["Alice"] = 90;

			// �����Ѵ��ڵ�Ԫ��
			std::cout << "Alice's score: " << scores["Alice"] << std::endl;

			// ���ʲ����ڵ�Ԫ�أ������Ĭ��ֵ
			std::cout << "Bob's score: " << scores["Bob"] << std::endl;

			
		
	}
int main()
{
	/*test01();*/
	blogtest();
	return 0; 
}




//int main()
//{
//	set<int> s = { 1,2,3,9,11 };
//
//	// ����
//	s.insert({ 4,5,6 });
//	s.insert(7);
//	s.insert(7);
//	s.insert(7);
//
//
//	// ����
//	s.find(7); // �ҵ��˷��ض�Ӧ���ĵ�����
//	if (s.find(8) == s.end()) // û�ҵ�����s.end()
//	{
//		cout << "û�ҵ�" << endl;
//	}
//
//	// ������
//	auto it = s.begin();
//	while (it != s.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//
//	// it = s.begin();
//	// s.erase(it);
//	// cout << "������ʧЧ ��" << *it << endl;
//
//
//	multiset<int> s2 = { 1,1,1,1,0,0,0 };
//	cout << s2.count(1) << endl; // �����ҵ��ĸ���
//	cout << s2.count(2) << endl;
//
//}
