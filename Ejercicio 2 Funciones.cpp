//Carlos Moya C.I: 31317884
//Ejercicio 2 Funciones 
#include <stdio.h>
#include <conio.h>
float promedio1 (int cant, float num[])
{
	float suma = 0, promedio = 0;
		for (int i = 0; i < cant; i++)
		{
			suma=suma+num[i];
		}
	promedio = suma/cant;
	return promedio;
}
float promedio1(int n1, float[]);
main()
{
	int n = 0;
	float x=0;
	printf("Ingrese la cantidad de numeros ");
	scanf("%i", &n);
	float num[n];
	for (int i; i < n; i++)
	{
		printf("Ingrese numero ");
		scanf("%f", &x);
		num[i]=x;
	}
	printf("El promedio es = %.2f", promedio1(n,num));
	return 0;
}                                