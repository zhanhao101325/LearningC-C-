//#include <iostream>
//#include <vector>
//using namespace std;
////int main()
////{
////	test01();
////	system("pause");
////	return 0;
////}
//void pritfVector(vector<int> &v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	cout << "����ǰ" << endl;
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	pritfVector(v1);
//	vector<int> v2;
//	for (int i = 9; i >=0 ; i--)
//	{
//		v2.push_back(i);
//	}
//	pritfVector(v2);
//	cout << "������" << endl;
//	v1.swap(v2);
//	pritfVector(v1);
//	pritfVector(v2);
//}
//
////ʵ����; ������swap���������ڴ�ռ�
//void test02()
//{
//	vector<int> v1;
//	for (int i = 0; i < 100000; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "v1������Ϊ��" << v1.capacity() <<endl;
//	cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//	v1.resize(3);
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//	vector<int>(v1).swap(v1);
//	cout << "--------������--------" << endl;
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}