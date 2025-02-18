#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    int N;
    cin >> num;  
    
    vector<int> ary(num);  
    
    for (int i = 0; i < num; i++) {
        cin >> ary[i];  
    }
    
    //int min_value = *min_element(ary.begin(), ary.end());
    //int max_value = *max_element(ary.begin(), ary.end());
    
    sort(ary.begin(), ary.end());
    
    for (int i = 0; i <= num/2; i++)
    {
        N = ary[i] * ary[num-i-1];
    }
    //int N = min_value * max_value;
    
    cout << N << endl;  
    
    return 0;
}
