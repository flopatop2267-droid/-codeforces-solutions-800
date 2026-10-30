#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (!(cin >> t)) return 0;
    while(t--)
    {
      int n;
     cin >> n;
      vector<int> a(3);
      for (int i = 0; i < 3; i++)
      {
        cin >> a[i];
      }
      int b = min({a[0],a[1],a[2]});
      cout << n-b<<'\n';
    }
    
   return 0;
}
