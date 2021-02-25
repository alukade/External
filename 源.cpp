#include<stdio.h>

void a(void);
void b(void);
void c(void);


int count;//如果在int前加static则count的链接属性改变为internal,就无法引用啦(起保护作用)

int main(void)

{
	a();
	b();
	b();
	c();

	printf("小何今天一共被抱了%d次！",count);

	return 0;
}
