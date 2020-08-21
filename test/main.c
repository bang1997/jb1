#include <stdio.h>

#include "lstack.h"

int main(void)
{
	int pop;
	int date = 100;
	int lag = 0;
	lstack_t *s = NULL;
	printf("请输入要转换的十进制数字：");
	scanf("%d",&date);
	lstack_init(sizeof(int), &s);

	while(date != 0){
		lag = date%2;
		lstack_push(s, &lag);
		date /= 2;
	}

	while (!lstack_empty(s)) {
		lstack_pop(s, &pop);
		printf("%d", pop);
	}
	printf("\n");

	lstack_destroy(s);

	return 0;
}

