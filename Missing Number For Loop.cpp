
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    long long expected_sum=1LL*n*(n+1)/2;
     long long actual_sum=0;
    int num;


    for(int i=0; i< n-1; i++){
     cin>>num;


     actual_sum+=num;
    }
     cout << expected_sum - actual_sum << '\n';


}
