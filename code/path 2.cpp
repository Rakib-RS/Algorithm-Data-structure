vector<int> g[MAXN];
int par[MAXN];
int depth[MAXN];
void dfs(int v, int p, int d) {
  depth[v] = d;
  par[v] = p;
  for(int c: g[v])
    if(c != p) dfs(c, v, d + 1);
}
dfs(0, -1, 0);
vector<int> getpath(int a, int b) {
  vector<int> ans, path1, path2;
  path1.push_back(a);
  path2.push_back(b);
  while(a != b) {
    if(depth[a] < depth[b]) path2.push_back(b = par[b]);
    else if(depth[a] > depth[b]) path1.push_back(a = par[a]);
    else if(depth[a] == depth[b]) path1.push_back(a = par[a]), path2.push_back(b = par[b]);
  }
  reverse(path2.begin(), path2.end());
  path2.erase(path2.begin());
  path1.insert(path1.end(), path2.begin(), path2.end());
  return ans = path1;
}
