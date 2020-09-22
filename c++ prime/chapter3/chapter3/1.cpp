//#include <iostream>
//#include <string>
//#include <cctype>
//#include <vector>
//using namespace std;
//
//class Holder
//{
//public:
//
//	Holder(int size)         // Constructor
//	{
//		m_data = new int[size];
//		m_size = size;
//	}
//	Holder(Holder&& other)     // <-- rvalue reference in input
//	{
//		m_data = other.m_data;   // (1)
//		m_size = other.m_size;
//		other.m_data = nullptr;  // (2)
//		other.m_size = 0;
//	}
//	Holder& operator=(Holder&& other)     // <-- rvalue reference in input  
//	{
//		if (this == &other) return *this;
//
//		delete[] m_data;         // (1)
//
//		m_data = other.m_data;   // (2)
//		m_size = other.m_size;
//
//		other.m_data = nullptr;  // (3)
//		other.m_size = 0;
//
//		return *this;
//	}
//	~Holder()                // Destructor
//	{
//		delete[] m_data;
//	}
//	size_t showSize()
//	{
//		return this->m_size;
//	}
//private:
//
//	int*   m_data;
//	size_t m_size;
//};
//
//void test01()
//{
//	string s("some string");
//	for (auto c : s)
//	{
//		cout << c ;
//	}
//	cout << endl;
//}
//
//void test02()
//{
//	string s("hello world!!!");
//	decltype(s.size()) punct_cnt = 0;
//	for (auto c : s)
//	{
//		if (ispunct(c))
//		{
//			punct_cnt++;
//		}
//	}
//	cout << punct_cnt << endl;
//}
//
//void test03()
//{
//	Holder h1(1000);           // h1 is an lvalue
//	Holder h2(std::move(h1));  // move-constructor invoked (because of rvalue in input)
//	cout << h1.showSize() << endl;
//	cout << h2.showSize() << endl;
//}
//
//void test04()
//{
//	string s("Hello World!!!");
//	for (char &c : s)
//	{
//		c = 'X';
//	}
//	cout << s << endl;
//}
//void test05()
//{
//	const string hexdigits = "0123456789ABCDEF";
//	string result;
//	string::size_type n;
//	while (cin >> n)
//	{
//		if (n < hexdigits.size())
//		{
//			result += hexdigits[n];
//		}
//	}
//	cout << result << endl;
//}
//
//
//void test06()
//{
//	const string s("Hello World!!!");
//	for (char c : s)
//	{
//		//c = 'X';
//	}
//	cout << s << endl;
//}
//
//vector<int>::iterator test07(vector<int> &v,int sought)
//{
//	
//	auto beg = v.begin(), end = v.end();
//	auto mid = v.begin() + (end - beg) / 2;
//	while (mid != end )
//	{
//		if (*mid == sought)
//		{
//			return mid;
//		}
//		else if (sought < *mid)
//		{
//			end = mid;
//		}
//		else
//		{
//			beg = mid + 1;
//		}
//		mid = beg + (end - beg) / 2;
//	}
//	return v.end();
//}
//
//int main()
//{
//	//test01();
//	//test03();
//	//test04();
//	//test05();
//	vector<int> v{ 1,3,5,8,10,23,43,50 };
//	vector<int>::iterator it =test07(v,9);
//	if (it != v.end())
//	{
//		cout << it - v.begin() << endl;
//	}
//	else
//	{
//		cout << "²»´æÔÚÔªËØ" << endl;
//	}
//	return 0;
//}