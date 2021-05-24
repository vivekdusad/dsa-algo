#ifdef Prateek
  #include "Prateek.h"
#else
  #include <bits/stdc++.h>
  using namespace std;
  #define debug(...) 42
#endif
#define int ll
#define all(c) begin(c),end(c)
using ll = long long;
const int MOD = 1e9+7, N = 1e5 + 10; 

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   n *= 3;
   vector<int> A(n);
   for (int i = 0; i < n; ++i) {
      cin >> A[i];
   }
   multiset<int> s;
   int sum = 0;
   vector<int> dpr(n, int(1e18));
   for (int i = n - 1; i >= 0; --i) {
      sum += A[i];
      s.insert(A[i]);
      if (s.size() > n / 3) {
         sum -= *prev(s.end());
         s.erase(prev(s.end()));
      }
      if (s.size() == n / 3) {
         dpr[i] = sum;
      }
   }
   vector<int> dpf(n, 0);
   sum = 0;
   s.clear();
   for (int i = 0; i < n; ++i) {
      sum += A[i];
      s.insert(A[i]);
      if (s.size() > n / 3) {
         sum -= *s.begin();
         s.erase(s.begin());
      }
      if (s.size() == n / 3) {
         dpf[i] = sum;
      }
   }
   int ans = -1e18;
   for (int i = n / 3 - 1; i < 2 * n / 3; ++i) {
      ans = max(ans, dpf[i] - dpr[i + 1]);
   }
   cout << ans << '\n';
   return 0;
}