#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    cin >> a;
    cin >> b;
    
    int l1 = a.size();
    int l2 = b.size();
    string c = a + b;
    
    string a1 = a;
    a1[0] = b[0]; 
    
    string b1 = b;
    b1[0] = a[0]; 
    
    cout << l1 << " " << l2 << endl; 
    cout << c << endl; 
    cout << a1 << " " << b1 << endl; 
    
    return 0;
}
