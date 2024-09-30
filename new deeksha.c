#include<stdio.h>
int main()
{
	int temperature;
	printf("enter temperature 0-10");
	scanf("%d", &temperature);  // input
	if(temperature <= 10){
		printf("very coool!");
	}else if(temperature <= 20){
		printf("cool");
	}else if(temperature <= 30){
		printf("medium");
	}else if (temperature <= 40){
		printf ("hot");
	}else if (temperature <=50){
		printf("very hot ");
	}else{
		printf("very very hot");
	}
	return 0;
}

