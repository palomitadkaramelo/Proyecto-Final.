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
  C[c2]= C[c2]+2
  C[c3]= C[c3]+3

  oyente++
  }
}

void CV (int C [10]);
{
  int indice, mayor1=0, mayor2=0;
  int primeracancion=0, segundacancion=0;

  printf("====RESULTADOS====\n");
  for(indice=0; indice<=9; indice++);
{
  printf("Cancion %d: %d votos\n", indice, C[indice]);

  if( C[indice]> mayor1)
  {
    mayor2= mayor1;
    segundacancion+primeracancion;

    mayor1=C[indice]
    priemracancion=indice;
  }
  else
  {
    if(C[indice]> mayor2)
    {
      mayor2=C[indice];
      segundacancion=indice;
    }
  }
}
printf(" Primer lugar, cancion: %d \n", primeracancion);
printf(" Segundo lugar, cancion: %d \n", segundacancion);
}
    
