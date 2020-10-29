#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXN 128

typedef struct {
	long long a, b;
} fraction;

long long gcd(long long x, long long y) {
	int t;
	while (x%y) {
    t = x;
    x = y;
    y = t % y;
  }
	return y;
}

fraction addition(fraction x, fraction y) {
	long long a, b, g;
	fraction z;
	a = x.a * y.b + y.a * x.b;
  b = x.b * y.b;
	g = gcd(a, b);
  a /= g;
  b /= g;
	z.a = a;
  z.b = b;
	return z;
}

fraction substraction(fraction x, fraction y) {
	long long a, b, g;
	fraction z;
	a = x.a * y.b - y.a * x.b;
  b = x.b * y.b;
	g = gcd(a, b);
  a /= g;
  b /= g;
	z.a = a;
  z.b = b;
	return z;
}

fraction multiplication(fraction x, fraction y) {
	long long a, b, g;
	fraction z;
	a = x.a * y.a;
  b = x.b * y.b;
	g = gcd(a, b);
	a /= g;
  b /= g;
  z.a = a;
  z.b = b;
	return z;
}

int main() {
	int n;
	long long a, b;
	fraction g[MAXN][MAXN], fzero, fone;
	fzero.a = 0;
  fzero.b = 1;
	fone.a = 1;
  fone.b = 1;
	while (scanf("%d", &n) == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				scanf("%lld %lld", &a, &b);
				b = a + b;
				long long t = gcd(a, b);
				a /= t;
        b /= t;
				g[i][j].a = a;
        g[i][j].b = b;
			}
		}
		fraction dp[MAXN][MAXN];
		for (int i = 0; i < MAXN; i++)
			for (int j = 0; j < MAXN; j++)
				dp[i][j] = fzero;
		dp[0][0] = fone;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				dp[i+1][j] = addition(dp[i+1][j], multiplication(dp[i][j], g[i][j]));
				dp[i+1][j+1] = addition(dp[i+1][j+1], multiplication(dp[i][j], substraction(fone, g[i][j])));
			}
		}
		for (int i = 0; i <= n; i++)
			printf("%lld/%lld\n", dp[n][i].a, dp[n][i].b);
	}
	return 0;
}
