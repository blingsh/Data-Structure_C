#include <stdio.h>
#define SIZE 6

void get_integers(int list[])
{
	printf("6���� ������ �Է��Ͻÿ�:");
	int i;
	for(i=0; i<SIZE; ++i){
		scanf("%d", &list[i]); //(list+i)
	}
}

int cal_sum(int list[])
{
	int sum=0;
	int i;
	for(i=0; i<SIZE; ++i){
		sum += *(list+i); //list[i]
	}
	return sum;
}

int main(void)
{
	int list[SIZE];
	get_integers(list);
	printf("��=%d\n", cal_sum(list));
	return 0;
}
