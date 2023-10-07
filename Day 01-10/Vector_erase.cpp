#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int x;
    cin >> x;
    v.erase(v.begin()+x-1);
    int a, b;
    cin >> a >> b;
    
    if (a >= 1 && b >= a && b <= n) {
        v.erase(v.begin() + a - 1, v.begin() + b -1);
    } else {
        cout << "Invalid range for erasing (a, b)." << endl;
        return 1;
    }

 
    int s = v.size();
    cout << s << endl;
    for (int i = 0; i < s; i++) {
        cout << v[i];
        if (i < s - 1) {
            cout << " ";
        }
    }

    std::cout << std::endl;

    
    return 0;
}
