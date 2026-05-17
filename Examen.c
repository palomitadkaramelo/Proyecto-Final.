#include <stdio.h>

int LV ( int V[100][3], int C[10]);
void CV (int C [10], int g[2]);
int validacion(int voto);
void CP( int V[100][3], int totaloyentes, int g[2]);
int main()
{
  int V [100][3]; 
  int C [10] = {0}; 
  int g[2]= {0};
  int totaloyentes = 0;

  totaloyentes = LV (V, C); 
  
  if(totaloyentes>0)
  {
      CV(C, g);
      CP(V, totaloyentes, g);
  }
  else
  {
      printf("No se registraron oyentes en la emision");
  }
  printf("Total de oyentes registrados al final: %d \n", totaloyentes);

  return 0;
}

int LV (int V[100][3], int C[10])
{
  int oyente = 0, c1, c2, c3;

  printf("====CONCURSO====\n");
  
  printf("Introduce en orden descentente tus 3 canciones preferidas (0-9) separadas por un espacio \n");
  printf("Para terminar, introducir -1. \n");

  while(oyente < 100)
  {
   
    printf("oyente %d: \n", oyente);
    
    c1= validacion(1);
    
    if (c1 == -1)
    {
      break;
    }
    
    c2= validacion(2);
    c3= validacion(3); 
    
    V[oyente][0] = c1;
    V[oyente][1] = c2;
    V[oyente][2] = c3;
    
    C[c1] = C[c1] + 3;
    C[c2] = C[c2] + 2;
    C[c3] = C[c3] + 1; 

    oyente++; 
  }
  
  return oyente; 
}

int validacion(int voto)
{
    int cancion;
    int sivalido=0;
    do
    {
     scanf("%d", &cancion);
        
    if (voto==1)
    {
        if((cancion >= 0 && cancion <=9 ) || cancion==-1)
        {
         sivalido=1; 
        }
        else
        {
            printf("ERROR, numero invalido. Debe ser una cancion entre 0-9, o -1 para salir \n");
        }
    }
    else
    {
        if (cancion >= 0 && cancion<= 9)
        {
            sivalido=1;
        }
        else
        {
            printf("ERROR, ingrese un numero 0-9\n");
        }
     }
    }
    while (sivalido==0);
    return cancion;

}

void CV (int C [10], int g[2])
{
  int indice, mayor1 = -1, mayor2 = -1; 
  int primeracancion = 0, segundacancion = 0;

  printf("====RESULTADOS====\n");
  
 
  for(indice = 0; indice <= 9; indice++)
  {
    printf("Cancion %d: %d votos\n", indice, C[indice]);

    if(C[indice] > mayor1)
    {
      mayor2 = mayor1;
      segundacancion = primeracancion;

      mayor1 = C[indice]; 
      primeracancion = indice; 
    }
    else
    {
      if(C[indice] > mayor2)
      {
        mayor2 = C[indice];
        segundacancion = indice;
      }
    }
  }
  
  g[0]= primeracancion;
  g[2]= segundacancion;
  printf(" PRIMER LUGAR, cancion: %d \n", primeracancion);
  printf(" SEGUNDO LUGAR, cancion: %d \n", segundacancion);
}

void CP (int V[100][3], int totaloyentes, int g[2])
{
 int indice;
 int g1 = g[0];
 int g2 = g[1];
 
 int maxpuntos=-1;
 int oyenteganador=0;
 
 printf("\n===REPARTO DE PUNTOS===\n");
 for(indice=0; indice<totaloyentes; indice++)
 {
     int pt=0;
     int pg1=0;
     int pg2=0;
     
     if (V[indice][0] == g1 || V[indice][1] == g1 || V[indice][2] == g1)
     {
         pt=pt+30;
         pg1=1;
     }
     if(V[indice][0] == g2 || V[indice][1] == g2 || V[indice][2] == g2)
     {
         pt=pt+20;
         pg2=1;
     }
     if(pg1==1 && pg2==1)
     {
         pt=pt+10;
     }
     printf("Oyente %d obtuvo: %d puntos. \n", indice, pt);
     
     if(pt>maxpuntos)
     {
         maxpuntos=pt;
         oyenteganador=indice;
     }
 }
    
    printf("\n=======================================\n");
    printf("EL GANADOR ES EL OYENTE %d CON %d PUNTOS\n", oyenteganador, maxpuntos);
  
}
