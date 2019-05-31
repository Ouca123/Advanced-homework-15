#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char input_arr[]="Taiwan, Touch, Your, Heart";
	char *ptr_input;

	int i;
	int L;

	L=strlen(input_arr);
	ptr_input=input_arr;

	for(i=0;i<L;i++)
	{

		if(*(ptr_input+i)>64 && *(ptr_input+i)<90)
		{
			printf("%c", *(ptr_input+i));
		}
		else if(*(ptr_input+i)>96 && *(ptr_input+i)<123)
		{
			printf("%c", *(ptr_input+i));
		}
		else if(*(ptr_input+i)==32)
		{
			printf("%c", *(ptr_input+i));
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
}
