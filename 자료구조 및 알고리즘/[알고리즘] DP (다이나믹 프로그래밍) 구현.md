## [알고리즘] DP (다이나믹 프로그래밍) 구현

**: 하나의 문제는 단 한번만 풀도록하는 알고리즘**

다이나믹 프로그래밍으로 구현해야하는 문제

(1번 가정)

큰 문제를 작은 문제로 나눌 수 있다

(2번 가정)

작은 문제에서 구한 정답은 그것을 포함하는 큰 문제에서도 동일하다

구현의 포인트: **memorization과 점화식**

```c++
//BOJ11726. 2*n 타일링 
#include<cstdio>
int dp[1001];
int n;
int main() {
    //...
    //scanf("%d", &n);
    /**DP**/
    dp[1] = 1, dp[2] = 2;
    for (int i = 3; i <= n; i++) {
       dp[i] = dp[i - 1] + dp[i - 2]; //점화식
       dp[i] %= 10007;
    }
    //printf("%d\n", dp[n]);
    //...
}
```

