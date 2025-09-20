  #define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
//using namespace std;
//void test_set()
//{
//	multiset<int> s = { 1,2,5,4,3,6,6,6,7,6 };
//	set<int>::iterator it = s.begin();
//	while (it != s.end())
//	{
//		//中序，排序，去重
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	s.insert(114);
//	s.erase(3);
//	for (auto e : s) 
//	{
//		cout << e<<" ";
//	}
//	cout << endl;
//	auto s1 = s.find(3);
//	if (s1 != s.end())
//	{
//		cout << "找到了" << endl;
//	}
//	else
//	{
//		cout << "没找到" << endl;
//	}
//	
//	auto it1=s.lower_bound(3);
//	auto it2 = s.upper_bound(7);
//	auto pos = s.find(6);
//	
//	
//}
//int main()
//{
//	test_set();
//
//	
// return 0;
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main() {
//    std::set<int> v = { 1, 3, 5,6,6,6,6,7,9, 11, 13 };
//
//    // 使用 lower_bound 查找第一个不小于 6 的元素
//    auto low = std::lower_bound(v.begin(), v.end(), 6);
//    if (low != v.end()) {
//        std::cout << "lower_bound 找到的元素: " << *low << std::endl;
//    }
//
//    // 使用 upper_bound 查找第一个大于 6 的元素
//    auto up = std::upper_bound(v.begin(), v.end(), 6);
//    if (up != v.end()) {
//        std::cout << "upper_bound 找到的元素: " << *up << std::endl;
//    }
//
//
//    return 0;
//}



int main() {
    std::multiset<int> ms = { 1, 2, 2, 3, 3, 3, 4 };
    auto range = ms.equal_range(3);

    for (auto it = range.first; it != range.second; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
