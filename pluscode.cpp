#include <iostream>

int fibbonacci(int number) {
   if(number == 0){
      return 0;
   }
   if(number == 1) {
      return 1;
   }
   return (fibbonacci(number-1) + fibbonacci(number-2));
}
//hello
int main() {
    int number;

 for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0) {
                dp[i][j] = j; // If the first string is empty
            } else if (j == 0) {
                dp[i][j] = i; // If the second string is empty
            } else if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = 1 + std::min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
            }
        }
    }
    
    return dp[m][n];
}
