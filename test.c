#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/*
int randNum()
{
	int x,n;
	time_t t;
	n = 1;

	srand((unsigned) time(&t));

	for (x=0; x < n ; x++){
		x = rand() %64;
 	}
	return x;
}
*/

int main(int argc[], char* argv[])
{
	int Decimals[64]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64};
	char Binary[64][9]={"00000001","00000010","00000011","00000100","00000101","00000110","00000111", "00001000", "00001001", "00001010", "00001011", "00001100", "00001101", "00001110", "00001111", "00010000", "00010001", "00010010", "00010011", "00010100", "00010101", "00010110", "00010111", "00011000", "00011001", "00011010", "00011011", "00011100", "00011101", "00011110", "00011111", "00100000", "00100001", "00100010", "00100011", "00100100", "00100101", "00100110", "00100111", "00101000", "00101001", "00101010", "00101011", "00101100", "00101101", "00101110", "00101111", "00110000", "00110001", "00110010", "00110011", "00110100", "00110101", "00110110", "00110111", "00111000", "00111001", "00111010", "00111011", "00111100", "00111101", "00111110", "00111111", "0100000"};
	char response[256];

        int i;
	sscanf(argv[2], "%d",  &i);
	i = i - 1;
//	printf("args %d, %s", i, argv[1]);

		printf("What is the binary equivalent to the decimal number %d? (always use 8 digits)\n", Decimals[i]);
		//printf("\n");
		//scanf("%s", response);
			if (strcmp(argv[1], Binary[i])==0){
				printf("Correct");
				printf("\n");
			}
			else
			{
				printf("Incorrect, the correct answer is %s", Binary[i]);
				printf("\n");
			}

	return 0;
}
