#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
#include<set>
using namespace std;
void test01()
{
	pair<string, string> kv1("apple", "苹果");
	pair<string, string> kv2("banana", "香蕉");
	pair<string, string> kv3("orange", "橘子");
	map<string, string> dicrtory = { kv1,kv2,kv3 };
	dicrtory.insert(make_pair("money", "软妹币"));
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
	//	//结构化绑定
	//	
	//
	//	auto& [x1, y1] = kv1;
	

	//dicrtory["insert"];//插入
	//dicrtory["insert"] = "插入";//修改
	//dicrtory["first"] = "第一";//插入+修改

	//cout << dicrtory["insert"] << endl;
	//cout << dicrtory["first"] << endl;
}
	void test02()
	{
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
}
	void blogtest()
	{
			std::map<std::string, int> scores;

			// 插入元素
			scores["Alice"] = 90;

			// 访问已存在的元素
			std::cout << "Alice's score: " << scores["Alice"] << std::endl;

			// 访问不存在的元素，会插入默认值
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
//	// 插入
//	s.insert({ 4,5,6 });
//	s.insert(7);
//	s.insert(7);
//	s.insert(7);
//
//
//	// 搜索
//	s.find(7); // 找到了返回对应键的迭代器
//	if (s.find(8) == s.end()) // 没找到返回s.end()
//	{
//		cout << "没找到" << endl;
//	}
//
//	// 迭代器
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
//	// cout << "迭代器失效 ：" << *it << endl;
//
//
//	multiset<int> s2 = { 1,1,1,1,0,0,0 };
//	cout << s2.count(1) << endl; // 返回找到的个数
//	cout << s2.count(2) << endl;
//
//}
