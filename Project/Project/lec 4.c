#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void) {
	int T;
	int test_case;

	freopen("input.txt", "r", stdin);
	setbuf(stdout, NULL);
	scanf("%d", &T);

	for (test_case = 1; test_case <= T; ++test_case) {
		int num[10];
		for (int i = 0; i < 10; i++) {
			scanf("%d", &num[i]);
		}

		for (int i = 0; i < 10; i++) {
			if (num[i] % 2 == 1) {
				s += num[i];
			}
		}

        printf("%d %dfn", test_case, s);
	}
	return 0;
}