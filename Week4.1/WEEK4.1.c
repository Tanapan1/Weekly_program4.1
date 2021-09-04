#include<stdio.h>
#include<math.h>

int main(){
	int n, i = 0, dist = 0;
	const int f = 500;
	const double perc = 1.05;
	double remain;
	printf("Enter weight (Ton) : ");
	scanf_s("%d", &n);
	remain = n * 1000;

	do {
		dist = dist + 1;
		if (dist % 10 != 0) {
			remain = remain - (f*pow(perc,i));
			i = i + 1;
			
		}
		else {
			remain = remain + 1000;
		}
	} while (remain > 0);
	printf("Distance = %d kilometer", dist);
	return 0;
}