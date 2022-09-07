#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n; 
    cin >> n;
    while (n--) {
        vector <pair<int, int>> v;
        int k;
        cin >> k;
        for (int i = 0; i < k; i++) {
            int a, b;
            cin >> a >> b;
            v.push_back(pair<int, int>(a,b));
        }
        sort(v.begin(), v.end());
        int min = v[0].second;
        int ans = 1;
        for (int i = 1; i < v.size(); i++) {
            if (v[i].second < min){
                ans++;
                min = v[i].second;
            }
        }
        cout << ans<<'\n';
    }
}