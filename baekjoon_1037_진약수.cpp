#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;  
    
    vector<int> ary(num);  
    
    for (int i = 0; i < num; i++) {
        cin >> ary[i];  
    }
    
    int min_value = *min_element(ary.begin(), ary.end());
    int max_value = *max_element(ary.begin(), ary.end());
    
    int N = min_value * max_value;
    
    cout << N << endl;  
    
    return 0;
}
