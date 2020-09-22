#include <iostream>
#include <vector>
#include <map> 
#include <ctime>
#include <string>
using namespace std;

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
	string m_Name;
	int m_Salary;
};

void createWorker(vector<Worker>&v)
{
	srand((size_t)time(NULL));
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];

		worker.m_Salary = rand() % 10000 + 10000;
		v.push_back(worker);
	}
}
void setGroup(vector<Worker> &v, multimap<int, Worker> &m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int deptId = rand() % 3;
		m.insert(make_pair(deptId, *it));
		
	}
}

void showWorkerByGroup(multimap<int, Worker>&m)
{
	cout << "�߻����ţ�" << endl;
	multimap<int,Worker>::iterator it = m.find(CEHUA);
	for (; it != m.end()&&it->first==CEHUA; it++)
	{
		cout << "������" << it->second.m_Name << " ����: " << it->second.m_Salary << endl;
	}
	cout << "---------" << endl;
	cout << "�������ţ�" << endl;
	it = m.find(MEISHU);
	for (; it != m.end() && it->first == MEISHU; it++)
	{
		cout << "������" << it->second.m_Name << " ����: " << it->second.m_Salary << endl;
	}
	cout << "---------" << endl;
	cout << "�з����ţ�" << endl;
	it = m.find(YANFA);
	for (; it != m.end() && it->first == YANFA; it++)
	{
		cout << "������" << it->second.m_Name << " ����: " << it->second.m_Salary << endl;
	}
}

int main()
{
	vector<Worker> vWorker;
	createWorker(vWorker);
	/*for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	{
		cout << "������" << it->m_Name << " ���ʣ� " << it->m_Salary << endl;
	}*/

	multimap<int, Worker> mWorker;
	setGroup(vWorker, mWorker);

	showWorkerByGroup(mWorker);

	system("pause");
	return 0;
}