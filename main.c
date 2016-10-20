#include <stdio.h>
#include "sum.h"
#include "average.h"

int main(void)
{
	int income[5];
	int outgo[5];
	int i;
	printf("収入額を入力してください。\n");
	for (i = 0; i < 5; i++) {
		scanf("%d", &income[i]);
	}
	printf("支出額を入力してください。\n");
	for (i = 0; i < 5; i++) {
		scanf("%d", &outgo[i]);
	}

	printf("支出額：合計:%d, 平均:%d\n", sum(outgo), average(outgo));
	printf("収入額：合計:%d, 平均:%d\n", sum(income), average(income));

	return 0;
}
