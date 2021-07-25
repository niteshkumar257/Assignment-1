#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	
	float d,r1,r2;
	printf ("Enter values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
	{
		r1=-b/(2*a);
		printf("Roots are real and equal\n");
		printf("%f is r1",r1);
	}
	else if(d>0)
	{
		printf("Roots are real and unqual\n");
		r1=(-b+sqrt(b*b-4*a*c))/(2*a);
		r2=(-b-sqrt(b*b-4*a*c))/(2*a);
		printf("%f r1 is \n",r1);
		printf("%f r2 is \n ",r2 );
		
	}
	else
	printf ("roots are imaginary");
	return 0;
}