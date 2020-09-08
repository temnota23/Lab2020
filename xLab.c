#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()

{
	float Xn,Xk,dX,a,b,c,F,h;

printf("Just hand me the data! Xn, Xk\n"); // Границы промежутка
scanf("%f%f",&Xn, &Xk);

printf("Just hand me the data! dX\n"); // Размер шага
scanf("%f",&dX);

printf("Just hand me the data! a, b, c\n");
scanf("%f%f%f",&a,&b,&c);


	for (float x = Xn; x <= Xk; x += dX)

	{
		if ((x-1)<0 && (b-x)!=0) {

			F=(a*x*x)+b;
		}
		else if (((x-1)>0)&&((b+x)==0))
		{
			F=(x-a)/x;

		}

		else {
			F=x/c;
		}

		 printf("x = %.2f   F = %.2f\n", x, F);
	}
	return 0;
}