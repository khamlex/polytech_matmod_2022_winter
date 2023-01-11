#include <iostream>

void spiral(int n){
    int A[n][n] = {};
    int id = 1;

    for (int c = 0; c <= n/2; c++){
        for (int i = c;         i < n-c;    i++) A[i][c]     = id++;
        for (int i = c + 1;     i < n-c;    i++) A[n-1-c][i] = id++;
        for (int i = n - 2 - c; i >= c;     i--) A[i][n-1-c] = id++;
        for (int i = n - 2 - c; i >= c + 1; i--) A[c][i]     = id++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << A[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout <<"Initial size:"<<std::endl;
    int n;
    std::cin >> n;
    spiral(n);
}