#include <stdio.h>

int main()
{	
	printf("Name: Junaid Zafar\tRoll no: 26P-0719\tSection:BSAI-1A\n\n");
	
	printf("\t \"Variable Inspector and Memory Footprint\"\n\n");
	printf("Type Name \t Variable Value \t Size in Memory \n\n");
	
	int a = 10;
	float b = 2.5;
	char c = 'J';
	double d = 25.5;
	printf("int \t\t    %d  \t\t\t%zu \n", a,sizeof(a));
	printf("float \t\t    %.2f  \t\t\t%zu \n", b,sizeof(b));
	printf("char \t\t    \'%c\'  \t\t\t%zu \n", c,sizeof(c));
	printf("double \t\t    %.2f  \t\t\t%zu \n", d,sizeof(d));
	
	
	return 0;
}
	