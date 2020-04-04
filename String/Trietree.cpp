int ind(char c)
{
	return c - 'a';
}
int n, m;
int node[maxn][26];
int cnt = 1;
vector<int> edges[maxn];
int val [maxn];
string s;		
vector<int> v;
void insert(){
	int nd = 0;
	int idx = 0;
	int last = -1;
	while(~node[nd][ind(s[idx])] && idx<s.size()){
		last = nd;
		nd = node[nd][ind(s[idx])];
		idx++;
	}
	v.clear();
	while(idx < s.size())
	{
		v.push_back(nd);
		node[nd][ind(s[idx])] = cnt;
		idx++;
		nd = cnt++;
	}
	v.push_back(nd);
	if (v.size() < 2)
		return;
	fore(i,0,v.size()-2){
		edges[v[i]].push_back(v[i+1]);
		edges[v[i+1]].push_back(v[i]);
	}
	if(v.size()>2)
		edges[v[1]].push_back(nd);
}
 