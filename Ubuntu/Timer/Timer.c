#include <stdio.h>
#include <math.h>
#include <time.h>

int main(){
	unsigned int min=0;
	printf("How long do you want? ");
	scanf("%d",&min);
	printf("\nYou choose %d\n",min);

	clock_t t;
	t = clock();
	long counter = 0;
	while(clock() - t < min*60000000){
		clock_t current = clock() - t;
		if (current - counter >= 1000000) {
			int remaining = (min*60)-(current/1000000);	
			printf("Remaining Time: %d",(remaining/600)%10);
			printf("%d:",(remaining/60)%10);
			printf("%d",(remaining/10%6));
			printf("%d\n",(remaining%10));
			printf("\a");
			counter = clock();
		}
	}
	printf("You meal is ready\n");
	return(0);
}

	

