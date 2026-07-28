#include <iostream>
#include <cmath>
#include <algorithm>
#include <fstream>
#include <cstdlib>
using namespace std;


bool isWinning(long long a, long long b) {
    long long m = min(a, b);
    long long M = max(a, b);
    return M * M > M * m + m * m;
}

long long bThreshold(long long a) {
    long long s = sqrt(5LL * a * a);  
    while ((s + 1) * (s + 1) <= 5LL * a * a) s++;
    while (s * s > 5LL * a * a) s--;

    return (a + s + 2) / 2;
}

long long countWinningPairs(long long A1, long long A2,long long B1, long long B2) {
    long long total = 0;

    for (long long a = A1; a <= A2; a++) {
        long long lo = max(B1, bThreshold(a));
        if (lo <= B2)
            total += B2 - lo + 1;
    }
    for (long long b = B1; b <= B2; b++) {
        long long lo = max(A1, bThreshold(b));
        if (lo <= A2)
            total += A2 - lo + 1;
    }

    return total;
}

int main() {
    cout << countWinningPairs(1, 5, 1, 5) << endl; 
    cout << boolalpha << isWinning(12, 51) << endl;
    
    
    // for notes uncomment the following line
    // system("start .\\Notes\\numbers_game.html");
}


