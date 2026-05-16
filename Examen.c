#include <stdio.h>
void LV ( int V[100][3], int C[10]);
void CV (int C [10]);

int main()
{
  int V [100][3]:
  int C [10]= 0 ;
  int totaloyentes=0;

  totaloyentes= LV (V,C);
  CV(C);
  
  printf("Total de oyentes registrados al final: %d \n");

  return 0;
}

void LV (int V[100][3], int C[10])
{
  int oyente=0, c1,c2,c3;

  printf("====CONCURSO====\n");
  printf("Introduce en orden descentente tus 3 canciones preferidas (0-9) separadas por espacios: \n");
  printf("Para terminar, introduce -1. \n");

  while(oyente< 100)
  {
  printf("oyente %d: \n");
  scanf("%d %d %d", &c1, &c2, &c3);

  if (c1=-1)
  {
    break;
  }
  LV[oyente][0]=c1
  LV[oyente][1]=c2
  LV[oyente][2]=c3

  C[c1]= C[c1]+3
    
