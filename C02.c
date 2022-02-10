#include <stdio.h>
#include<stdlib.h>

int main()
{
	int a,o,m,d;
	
	printf("Napiste castku jako prirozene cislo v Kc: ");
	scanf("%i",&a);
	printf("\n-------------\n");
	
	for(m=1000; m>0; m=m/10) {
		d=5*m;
		o=a/d;
		a=a%d;
		printf("%i:\t%i\n",d,o);
		
		d=2*m;
		o=a/d;
		a=a%d;
		printf("%i:\t%i\n",d,o);
		
		d=1*m;
		o=a/d;
		a=a%d;
		printf("%i:\t%i\n",d,o);
	}
	
	printf("\n\n");
	system("PAUSE");
}

