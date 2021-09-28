#include <iostream>
using namespace std;
 
int main() {
    int tcase;
    std::ios::sync_with_stdio(false);
    cin >> tcase;
    while(tcase--) {
        int n, m;
        cin >> n >> m;
        bool answer = true;
        int v[302][302];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int x;
                cin >> x;
                if (!answer) {
                    continue;
                }
                if (x > 4) {
                    answer = false;
                } else if ((i == 0 && j == 0) || (i == 0 && j == m - 1 ) || (i == n - 1 && j == 0) || (i == n - 1 && j == m - 1)) { //points on the four corners 
                    if (x >= 3) {
                        answer = false;
                    } else {
                        v[i][j] = 2;
                    }
                } else if (i == 0 || j == 0 || i == n - 1 || j == m - 1) { //Points on the edges except the four corners 
                    if (x >= 4) {
                        answer = false;
                    } else {
                        v[i][j] = 3;
                    }
                } else {
                    v[i][j] = 4;
                }
            }
        }
        if (!answer) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    cout << v[i][j] <<" ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}