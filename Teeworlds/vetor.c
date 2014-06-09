#include <stdio.h>

int main(void){

	int vetor[2] = {2, 2};
	int delta = 5;
	while (delta !=0){
		printf ("Posição Atual [%d, %d], \n", vetor[0], vetor[1]);
		scanf ("%d", &delta);
		switch (delta)
		{
		case 8:
		vetor[1]++;
		break;
		case 6:
		vetor[0]++;
		break;
		case 4:
		vetor[0]--;
		break;
		case 2:
		vetor[1]--;
		break;
		case 7:
		vetor[1]++, vetor[0]--;
		break;
		case 9:
		vetor[1]++, vetor[0]++;
		break;
		case 1:
		vetor[1]--, vetor[0]--;
		break;
		case 3:
		vetor[1]++, vetor[0]++;
		break;
		default:
		break;
		}
}
return 0;
}
		  	

