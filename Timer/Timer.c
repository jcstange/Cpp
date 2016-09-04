#include <stdio.h>
#include <math.h>
#include <time.h>

int main(){
	unsigned int min=0;
	printf("How long do you want? ");
	scanf("%d",&min);
	printf("\nYou choose %d\n",min);

	clock_t t;
	t = clock()/10^12;
	long counter = 0;
	while((clock()/10^12) - t < min*60){
		clock_t current = (clock()/10^12) - t;
		if (current - counter >= 1) {
			printf("%lu \n", current);
			counter = clock()/10^12;
		}
	}
	printf("You meal is ready\n");
	return(0);
}

	

