#include<stdio.h>
#include<stdlib.h>
int main(){

  /*int matriz[2][4] = {{1,2,3,4}, //fila 0
                      {5,6,7,8}}; //fila 1 */
  int **matriz;
  int Ki, Kj, num;

  printf("Digite el tamaño de la matriz (filas): ");
  scanf("%d",&Ki);

  printf("Digite el tamaño de la matriz (columnas): ");
  scanf("%d",&Kj);

  matriz = malloc(sizeof(int)*Ki); //Reserva memoria para las filas

  for (size_t i = 0; i < Ki; i++) {
    matriz[i] = malloc(sizeof(int)*Kj);
  }

  for (size_t i = 0; i < Ki; i++) {
    for (size_t j = 0; j < Kj; j++) {
      //matriz[i][j] = 0;
      printf("Digite un numero: ");
      scanf("%d", &matriz[i][j]);

    }
  }

  //ciclo que imprime la matriz
  for (int i = 0; i < Ki; i++) {
    for (size_t j = 0; j < Kj; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("Que valor quiere encontrar en la matriz?: ");
  scanf("%d", &num);

  for (int i = 0; i < Ki; i++) {
    for (size_t j = 0; j < Kj; j++) {
      if (num == matriz[i][j]){
        printf("%d esta en la fila %d, columna %d.\n",num,i,j);
      }
    }
  }

  return 0;
}
