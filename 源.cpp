#include<stdio.h>

void a(void);
void b(void);
void c(void);


int count;//�����intǰ��static��count���������Ըı�Ϊinternal,���޷�������(�𱣻�����)

int main(void)

{
	a();
	b();
	b();
	c();

	printf("С�ν���һ��������%d�Σ�",count);

	return 0;
}
