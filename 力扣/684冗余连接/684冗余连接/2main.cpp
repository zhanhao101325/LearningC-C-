#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
	static const int N = 1010; // ���⣺��ά�����С����3��1000��Χ��
	int father[N];
	int n;
	// ���鼯��ʼ��
	void init()
	{
		for (int i = 0; i < N; ++i) 
		{
			father[i] = i;
		}
	}
	// ���鼯��Ѱ���Ĺ���
	int find(int u) 
	{
		while (u != father[u])
		{
			u = father[u];
		}
		return u;
		//return u == father[u] ? u : father[u] = find(father[u]);
	}
	// ��v->u �����߼��벢�鼯
	void join(int u, int v) {
		u = find(u);
		v = find(v);
		if (u == v) return;
		father[v] = u;
	}
	// �ж� u �� v�Ƿ��ҵ�ͬһ����
	bool same(int u, int v) {
		u = find(u);
		v = find(v);
		return u == v;
	}

public:
	vector<int> inDegree(const vector<vector<int>>& edges)
	{
		//int n = edges.size();
		vector<int> degree(n+1,0);
		for (int i = 0; i < n; i++)
		{
			degree[edges[i][1]]++;
		}
		return degree;
	}

	bool isTreeAfterRemoveEdge(vector<vector<int>>& edges,int deleteEdge)
	{
		init(); // ��ʼ�����鼯
		for (int i = 0; i < n; i++) 
		{
			if (i == deleteEdge) continue;
			if (same(edges[i][0], edges[i][1])) 
			{ // ���������ˣ�һ��������
				return false;
			}
			join(edges[i][0], edges[i][1]);
		}
		return true;
	}

	vector<int> getRemoveEdge(const vector<vector<int>>& edges) {
		init(); // ��ʼ�����鼯
		int n = edges.size();
		for (int i = 0; i < n; i++) { // �������еı�
			if (same(edges[i][0], edges[i][1])) { // ���������ˣ�����Ҫɾ���ı�
				return edges[i];
			}
			join(edges[i][0], edges[i][1]);
		}
		return {};
	}



	vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges)
	{
		n = edges.size();
		vector<int>degree = inDegree(edges);
		vector<int> in2degree;
		for (int i = 0; i < n ; i++)
		{
			if (degree[edges[i][1]] == 2)
			{
				in2degree.push_back(i);
			}
		}
		if (in2degree.size())
		{
			if(isTreeAfterRemoveEdge(edges, in2degree[1]))
			{
				return edges[in2degree[1]];
			}
			else
			{
				return edges[in2degree[0]];
			}
		}
		return getRemoveEdge(edges);
	}
};

int main()
{
	Solution s;
	vector<vector<int>>edgs;
	vector<int> v1{ 1,2 };
	vector<int> v2{ 1,3 };
	vector<int> v3{ 2,3 };
	//vector<int> v4{ 4,1 };
	//vector<int> v5{ 1,5 };
	////vector<int> v3{ 2,3 };
	edgs.push_back(v1);
	edgs.push_back(v2);
	edgs.push_back(v3);
	/*edgs.push_back(v4);
	edgs.push_back(v5);*/
	vector<int> v=s.findRedundantDirectedConnection(edgs);
	for (int i = 0; i < 2; i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}