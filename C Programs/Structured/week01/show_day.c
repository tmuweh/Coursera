/*
	Tangue Muweh
	Simple day display
	V1.0
*/

#include <stdio.h>


enum day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

void print_day(enum day d){

	switch(d % 7){ //makes sure it is within the range
		case Mon: printf("Monday\n"); break;
		case Tue: printf("Tuesday\n"); break;
		case Wed: printf("Wednesday\n"); break;
		case Thu: printf("Thursday\n"); break;
		case Fri: printf("Friday\n"); break;
		case Sat: printf("Saturday\n"); break;
		case Sun: printf("Sunday\n"); break;
		Default: printf("Input Not valid\n"); 
	}
}

enum day next_day(enum day d){

	return (d + 1 % 7); //makes sure saturday becomes sunday
}

int main(void)
{
	int date;
	printf("Enter Day:\t");
	scanf("%d", &date);
	print_day(date);
	printf("Today: ");  print_day(date);
	printf("Next Day: "); print_day(next_day(date));
	return 0;
}