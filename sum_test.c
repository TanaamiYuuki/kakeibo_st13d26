#include <stdio.h>
#include "sum.h"

int main(void) {
	int test[5], i;
	// 10+10+10+10+10 = 50になるか
	for(i = 0; i < 5; i++) {
		test[i] = 10;
	}

	if (sum(test) == 50) {
		printf("計算結果 : テスト成功\n");
	} else {
		printf("計算結果 : テスト失敗\n");
	}

	// 10+20+30+40+50 = 150になるか
	for(i = 0; i < 5; i++) {
		test[i] = 10 + i * 10;
	}

	if (sum(test) == 150) {
		printf("計算結果 : テスト成功\n");
	} else {
		printf("計算結果 : テスト失敗\n");
	}

	return (0);
}
