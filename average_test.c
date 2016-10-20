#include <stdio.h>
#include "average.h"

int main(void)
{
	int x[5] = {2, 2, 2, 2, 2};
	
	if(average(x) == 2){
		printf("テスト成功\n");
	} else {
		printf("テスト失敗\n");
	}
return 0;
}
