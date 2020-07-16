#include <stdio.h>

typedef struct StructBancoDireccion{
	char calle[50];
	char colonia[50];
	int cp;
	
}Dir;

typedef struct StructCuentas{
	int numeroC;
	float saldo;
	char propietario[100];
	
}Cuentas;

typedef struct StructBanco{
	char nombre[50];
	Dir direccion;
	char telefono[10];
	int sucursal;
	Cuentas cuenta[10];
}Banco;

main(){
	Banco banco;
	int i =0, resp=0, c=0;
	
	printf("Ingrese el nombre del Banco: ");
	scanf(" %[^\n]s", &banco.nombre);
	printf("\nIngrese la calle del Banco: ");
	scanf(" %[^\n]s", &banco.direccion.calle);
	printf("\nIngrese la Colonia del Banco: ");
	scanf(" %[^\n]s", &banco.direccion.colonia);
	printf("\nIngrese el Codigo Postal: ");
	scanf(" %i", &banco.direccion.cp);
	printf("\nIngrese telefono del Banco: ");
	scanf(" %[^\n]s", &banco.telefono);
	printf("\nIngrese Numero de Banco: ");
	scanf(" %i", &banco.sucursal);
	

	while(1){
		if(c==10){
			printf("Limite Superado");
			break;
		}
		
		
		printf("***************\n");
		printf("Datos de la Cuenta: %i\n", c+1);
		printf("***************\n");
		printf("Ingrese el Numero de Cuenta: ");
		scanf(" %[^\n]s", &banco.cuenta[c].numeroC);
		printf("\nIngrese el Saldo de la Cuenta: ");
		scanf("%f", &banco.cuenta[c].saldo);
		printf("\nIngrese el nombre del Propietario: ");
		scanf(" %[^\n]s", &banco.cuenta[c].propietario);
		
		printf("\nDesea ingresar otra cuenta? [SI = 1 || NO = 2] ");
		scanf("%i", &resp);
		
		if(resp==1){
				c++;
		}else if(resp==2){
			break;
		}
	
		
	}
	
	system("cls");
	
	printf(" Datos del Banco\n");
	printf("***************\n");

	printf("Nombre del Banco: %s\n", banco.nombre);
	printf("Calle: %s\n", banco.direccion.calle);	
	printf("Colonia: %s\n", banco.direccion.colonia);
	printf("Codigo Postal: %i\n", banco.direccion.cp);		
	i=0;
	printf("***************\n");
	printf("Datos de Cuentas\n");

	while(i<=c){
		printf("***************\n");
		printf("Numero de Cuenta: %i\n", banco.cuenta[i].numeroC);
		printf("Saldo de la Cuenta: %.2f\n", banco.cuenta[i].saldo);
		printf("Propietario de la Cuenta: %s\n",banco.cuenta[i].propietario);	
		i++;
	}
	
}
