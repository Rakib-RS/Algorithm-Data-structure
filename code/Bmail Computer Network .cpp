#include <cstdio>

const int N = 200005;

int n, p[N];

void Pr(int x) {
  if (p[x]) Pr(p[x]);
  printf("%d ", x);
}

int main() {
  scanf("%d", &n);
  for (int i = 2; i <= n; ++i)
    scanf("%d", &p[i]);
  Pr(n);
  return 0;
}
