#include <iostream>
#include <vector>

using namespace std;

void generatePrimeTable(int n) {
    // 使用 vector<bool> 建立布林陣列，預設值皆為 false（代表預設皆為質數）
    vector<bool> isPrime(n + 1, true);
    
    // 0 和 1 不是質數，手動標記
    isPrime[0] = isPrime[1] = false;

    // 篩法核心：將合數標記為 false
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            // 將 p 的倍數標記為 false（從 p 的平方開始，因為較小的倍數已處理過）
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    // 印出找到的質數
    cout << n << " 以內的質數有：\n";
    for (int p = 2; p <= n; p++) {
        if (isPrime[p]) {
            cout << p << " ";
        }
    }
    cout << endl;
}

int main() {
    int n = 100; // 設定要建立質數表的範圍
    generatePrimeTable(n);
    return 0;
}
