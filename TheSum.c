#include <stdio.h>

int main(){

FILE *f;
int somma, num;

f= fopen("sum.dat","r");
if (!f){
	fprintf(stdout, "file non esistente\n");
	fprintf(stderr, "impossibile aprire il file\n");
	somma = 0;
	f= fopen("sum.dat","w");
	fprintf(f, "%d\n", somma);
	printf("Creazione file...\n");
}
else{
printf("Lettura dal file sum.dat in corso ...\n");
fscanf(f, "%d", &somma);
printf("Valore corrente: %d\n", somma);
fclose(f);
}
printf("Inserisci il valore da sommare:");
scanf("%d", &num);

somma = somma+ num;

printf("Nuovo valore: %d\n", somma);
printf("Salvataggio nel file sum.dat in corso ...\n");

fopen("sum.dat", "w");
fprintf(f, "%d\n", somma);
fclose(f);

return 0;
}

