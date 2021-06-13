/*
 ============================================================================
 Name        : BaseIntoBinaryProj.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	int starting_base = 5;
	int starting_number = 23;
	char starting_number_string[5];

	sprintf(starting_number_string, "%d", starting_number);
	//printf("%s\n", starting_number_string);

	int number_of_digits = strlen(starting_number_string);
	//printf("%d\n",number_of_digits);




	char first_digit_array[2];
	first_digit_array[0] = starting_number_string[0];
	int first_num = atoi( first_digit_array );
	printf("1st digit is %d\n", first_num);


	char second_digit_array[2];
	second_digit_array[0] = starting_number_string[1];
	int second_num = atoi( second_digit_array );
	printf("2nd digit is %d\n", second_num);





	printf("the base is %d\n", starting_base);
	int final_number = first_num * starting_base + second_num;




	printf("the result is %d",final_number);

	return EXIT_SUCCESS;


}












