#include <bits/stdc++.h>


int main() {
    int N;
    std::cin >> N;
    std::vector<int> d(N);
    for (int i = 0; i < N; i++) {
        std::cin >> d[i];
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            sum += d[i] * d[j];
        }
    }

    std::cout << sum << std::endl;
}
