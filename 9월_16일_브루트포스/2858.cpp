#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> divisor(int n) {
    vector<int> div;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) div.push_back(i);
    }
    return div;
}

int main() {
    int r, b;
    cin >> r >> b;

    int total = r + b;
    vector<int> div = divisor(total);

    for(int i = 0; i < div.size(); i++) {
        int l = total / div[i], w = div[i];
        if(b == (l-2) * (w-2)) {
            cout << l << ' ' << w;
            break;
        }
    }
    return 0;
}