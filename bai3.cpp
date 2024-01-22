#include <iostream>
using namespace std;

int tinhsovang(int m, int d, int k, int c) {
    int dobenhientai = d;
    int tongvang = 0;

    for (int i = 0; i < m; ++i) {
        if (dobenhientai - k <= 0 && i != m - 1) {
            if (dobenhientai <= 0) {
                return -1;
            }
            dobenhientai = d;
            tongvang += c;
        }
        dobenhientai -= k;
    }

    return tongvang;
}

int main() {
    int m, d, k, c;
    cin >> m >> d >> k >> c;
    int ketqua = tinhsovang(m, d, k, c);
    cout << ketqua << endl;
    return 0;
}
