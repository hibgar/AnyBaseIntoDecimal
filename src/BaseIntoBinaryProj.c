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
#include <math.h>

int power(int base, unsigned int exp) {
    int i, result = 1;
    for (i = 0; i < exp; i++)
        result *= base;
    return result;
 }

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	int starting_base;
	printf("Enter a starting base: ");
	scanf("%d", &starting_base);
	int starting_number;
	printf("Enter a base #: ");
	scanf("%d", &starting_number);
	char starting_number_string[5];

	sprintf(starting_number_string, "%d", starting_number);
	//printf("%s\n", starting_number_string);

	int number_of_digits = strlen(starting_number_string);
	//printf("%d\n",number_of_digits);

	int final_number = 0;
	int n = 0;
	for (n = 0; n < number_of_digits; n++) {
			char first_digit_array[2];
			first_digit_array[0] = starting_number_string[n];
			int first_num = atoi( first_digit_array );
			printf("1st digit is %d\n", first_num);

			int multiplier = number_of_digits - 1 - n;

			final_number += first_num * power(starting_base,multiplier);
	}




	printf("the result is %d",final_number);

	return EXIT_SUCCESS;


}


/*
 * char first_digit_array[2];
	first_digit_array[0] = starting_number_string[0];
	int first_num = atoi( first_digit_array );
	printf("1st digit is %d\n", first_num);


	char second_digit_array[2];
	second_digit_array[0] = starting_number_string[1];
	int second_num = atoi( second_digit_array );
	printf("2nd digit is %d\n", second_num);


	printf("the base is %d\n", starting_base);
	int final_number = first_num * starting_base + second_num;
 *
 *
 */









