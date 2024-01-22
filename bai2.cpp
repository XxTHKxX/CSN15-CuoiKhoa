#include <iostream>
#include <vector>


using namespace std;

int demcach(int x, int y) {
    if (x < 0 || y < 0) {
        return 0;
    }

    if (x == 0 && y == 0) {
        return 1;
    }

    int dp[11][11] = {0};

    for (int i = 0; i <= x; i++) {
        dp[i][0] = 1;
    }

    for (int i = 0; i <= y; i++) {
        dp[0][i] = 1;
    }

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    return dp[x][y];
}

int main() {
    int N;
    cin >> N;

    vector<int> ketqua;

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        int ways = demcach(x, y);
        ketqua.push_back(ways);
    }

    for (int i = 0; i < N; i++) {
        cout << ketqua[i] << endl;
    }



    return 0;
}
