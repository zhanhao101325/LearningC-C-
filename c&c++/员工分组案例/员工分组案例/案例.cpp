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
		worker.m_Name = "员工";
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
	cout << "策划部门：" << endl;
	multimap<int,Worker>::iterator it = m.find(CEHUA);
	for (; it != m.end()&&it->first==CEHUA; it++)
	{
		cout << "姓名：" << it->second.m_Name << " 工资: " << it->second.m_Salary << endl;
	}
	cout << "---------" << endl;
	cout << "美术部门：" << endl;
	it = m.find(MEISHU);
	for (; it != m.end() && it->first == MEISHU; it++)
	{
		cout << "姓名：" << it->second.m_Name << " 工资: " << it->second.m_Salary << endl;
	}
	cout << "---------" << endl;
	cout << "研发部门：" << endl;
	it = m.find(YANFA);
	for (; it != m.end() && it->first == YANFA; it++)
	{
		cout << "姓名：" << it->second.m_Name << " 工资: " << it->second.m_Salary << endl;
	}
}

int main()
{
	vector<Worker> vWorker;
	createWorker(vWorker);
	/*for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	{
		cout << "姓名：" << it->m_Name << " 工资： " << it->m_Salary << endl;
	}*/

	multimap<int, Worker> mWorker;
	setGroup(vWorker, mWorker);

	showWorkerByGroup(mWorker);

	system("pause");
	return 0;
}