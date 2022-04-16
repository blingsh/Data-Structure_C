#include <stdio.h>
void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n==1) printf("plate 1 moves from %c to %c.\n", from, to);
	else{
		hanoi_tower(n-1, from, to, tmp);
		printf("plate %d moves from %c to %c.\n", n, from, to);
		hanoi_tower(n-1, tmp, from, to);
	}
}
int main(void)
{
	hanoi_tower(4, 'A','B','C');
	return 0; 
}
