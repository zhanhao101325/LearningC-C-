//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	int find(int n, vector<int> &vec)
//	{
//		while (vec[n] != n)
//		{
//			n = vec[n];
//		}
//		return vec[n];
//	}
//	vector<int> findRedundantConnection(vector<vector<int>>& edges) 
//	{
//		
//		vector<int>res;
//		int n = edges.size();
//		vector<int> vec(n+1,0);
//		vector<int> rd(n+1,0);
//		for (int i = 0; i < n; i++)
//		{
//			vec[i] = i;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			int flag1 = find(edges[i].front(), vec);
//			int flag2 = find(edges[i].back(), vec);
//
//			if (flag1 == flag2)
//			{
//				return edges[i];
//			}
//			else
//			{
//				vec[flag2] = flag1;
//			}
//		}
//		return { 0,0 };
//	}
//};
//
//
//
//
//
//class Chabingji 
//{
//private:
//	int parent[1001];
//	int find_root(int x) {
//		while (parent[x] != x) {
//			//parent[x] = parent[parent[x]];
//			x = parent[x];
//		}
//		return x;
//	}
//	bool union_root(int x, int y) {
//		int root_x = find_root(x);
//		int root_y = find_root(y);
//		if (root_x == root_y) {
//			return false;
//		}
//		parent[root_x] = root_y;
//		return true;
//	}
//public:
//	vector<int> findRedundantConnection(vector<vector<int>>& edges) {
//		for (int i = 1; i <= 1000; i++) {
//			parent[i] = i;
//		}
//		for (auto edge : edges) {
//			if (!union_root(edge[0], edge[1])) {
//				return edge;
//			}
//		}
//		return {};
//	}
//};
//
//
////[[1, 2], [1, 3], [2, 3]]
////[[1, 2], [2, 3], [3, 4], [1, 4], [1, 5]]
//int main()
//{
//	Solution s;
//	vector<vector<int>>edgs;
//	vector<int> v1{ 1,2 };
//	vector<int> v2{ 2,3 };
//	vector<int> v3{ 3,4 };
//	vector<int> v4{ 4,1 };
//	vector<int> v5{ 1,5 };
//	//vector<int> v3{ 2,3 };
//	edgs.push_back(v1);
//	edgs.push_back(v2);
//	edgs.push_back(v3);
//	edgs.push_back(v4);
//	edgs.push_back(v5);
//	vector<int> v=s.findRedundantConnection(edgs);
//	for (int i = 0; i < 2; i++)
//	{
//		cout << v[i] << endl;
//	}
//	return 0;
//}