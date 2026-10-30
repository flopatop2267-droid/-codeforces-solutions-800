#include <iostream>
#include <cmath>
using namespace std;
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (!(cin >> t)) return 0;
    while(t--)
    {
   int n,k;
   cin >> n >> k;
   int pre = pow(2,n-(k-1)); 
   int up = (k-1)*2;
   cout << pre+up<< '\n';
    }
    
   return 0;
}
