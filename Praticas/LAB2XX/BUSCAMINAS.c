#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <BUSCAMINAS.h>



int main()
{
  uint8 u8Buscaminas[RENGLON][COLUMNA] = {0}, u8i, u8j;
  uint8 u8Nivel, u8Bombas;                                    //bombas aleatorias
  uint8 u8GameStatus, u8gameCounter = 0, u8victoria;          //control del juego
  uint8 u8Tiradas, u8frases;                                  //estadisticas del juego
  uint8 u8rating;
  uint8 u8salida;

  do{
       system("cls");
       printf("\n\t-Buscaminas-\n\n");
       printf("10 bombas en el primer nivel + 5 por cada uno.\n\n");
      
       printf("~Ingresa el nivel del juego:\n%d.-Nivel 1\n", 1);
       printf("%d.-Nivel 2\n%d.-Nivel 3\n%d.-Nivel 4\n%d.-Nivel 5\n", 2, 3, 4, 5);
      
      // gotoxy(30, 6);
       scanf("%d", &Nivel);
      
       switch(u8Nivel)
       {
      
           case 1: u8Bombas = 10;
                   break;
                  
           case 2: u8Bombas = 15;
                   break;
                  
           case 3: u8Bombas = 20;
                   break;
                  
           case 4: u8Bombas = 25;
                   break;
                  
           case 5: u8Bombas = 30;
                   break;
                  
           default: printf("Seleccion invalida, intente de nuevo.\n\n");
                    break;                 
                    
       }
      
       srand(time(NULL));  //generacion de numeros aleatorios
      
       colocar_bombas(u8Buscaminas, u8Bombas);
      
       Tiradas = 0; //este contador lleva cuenta del numero de tiradas en el juego
      
       do{
           system("cls");
           printf("\n-Buscaminas-\n\n");
          
           imprimir_tablero(u8Buscaminas, u8GameStatus);
          
           printf("\n"); //nueva linea
          
           printf("*Ingrese la tirada[i, j]: ");
           scanf("%d%d",&u8i, &u8j);
          
           if(u8Buscaminas[u8i][u8j] == 3){                              
               u8GameStatus = -1;
               u8Tiradas++;
              
               system("cls");
               printf("\nBuscaminas-\n\n");
               imprimir_tablero(u8Buscaminas, u8GameStatus);
            //   gotoxy(80, 4);
               printf("\t\t\t\t\t  ¡¡¡Perdiste, el juego ha terminado!!");
              
               getch();              
           }
           else
           {
               u8buscaminas[i][j] = 1;
               u8gameCounter++;
               u8tiradas++;
           }
           if(u8gameCounter == (225 - u8bombas) )
           {
               u8victoria = 1;
               system("cls");
               printf("\nBuscaminas-\n\n");
               imprimir_tablero(u8buscaminas, u8gameStatus);
         //      gotoxy(80, 4);
               printf("\t\t\t\t\t  ¡¡¡Has ganado, felicidades!!");
      
               getch();
           }       
          
              
       }while(u8gameStatus != -1 || u8victoria == 1);
      
       system("cls");
      
       u8rating = ((float)u8gameCounter * 100) / 225;
      
       printf("\n-Buscaminas- Estadisticas del juego.\n\n");
       printf("Tu rating  de juego es %.2f %.2f%\n", u8rating);
       printf("*No. de tiradas %d.\n\n", u8tiradas);
      
       u8frases = 1 + rand() % 4;
      
       if(u8gameStatus == -1)
         frases_2(u8frases);
       else if(u8victoria == 1)
         frases_1(u8frases);
      
       printf("\n\n");
      
       printf("¿Desea jugar de nuevo(S/N)?: ");
      
       u8salida = getch();
       u8salida = tolower(u8salida);
      
       for(u8i = 0; u8i <= RENGLON - 1; i++)
         for(u8j = 0; u8j <= COLUMNA - 1; j++)
           u8buscaminas[i][j] = 0;
          
       u8gameCounter = 0;
      
      
  }while(u8salida == 's');          
   
  system("cls");
  printf("\nBuscaminas-\n\n");
 
  getch();
  //system("PAUSE");   
  return 0;
}

/*La sig. funcion coloca las bombas en el tablero por medio de una
funcion aleatoria de 0-14 El valor de en el arreglo 3 es su valor logico en el programa
de bombas
*/
void colocar_bombas(uint8 u8minas[][15], uint8 u8bum)
{
     uint8 u8i, u8renglon, u8columna;
    
     for(u8i = 1; i <= u8bum; u8i++)
     {
           u8renglon = 0 + rand() % 14;
           u8columna = 0 + rand() % 14;
          
           u8minas[u8renglon][u8columna] = 3;
     }
}

void Frases(uint8 u8buscar)
{
     switch(u8buscar)
     {
         case 1: printf("¡Muy bien!\n");
                 break;
                
         case 2: printf("¡Excelente!\n");
                 break;
                
         case 3: printf("¡Buen trabajo!\n");
                 break;
                
         case 4: printf("¡Sigue asi!\n");
                 break;          
     }
}

void Frases2(uint8 u8numero)
{
     switch(u8numero)
     {
         case 1: printf("¡Muy bien!\n");
                 break;
                
         case 2: printf("¡Excelente!\n");
                 break;
                
         case 3: printf("¡Buen trabajo!\n");
                 break;
                
         case 4: printf("¡Sigue asi!\n");
                 break;
                  
     }
}

void imprimir_tablero(uint8 u8tablero[][15], uint8 u8perder)
{
     uint8 u8i, u8j;
    
     for(u8i = 0; i <= RENGLON -1; u8i++)  //encabezado
       printf("%d ", i);
      
     printf("\n");  //nueva linea
    
     for(u8i = 0; i <= COLUMNA - 1; i++)
       printf("--");
      
     printf("\n");
    
     for(u8i = 0; u8i <= RENGLON -1; u8i++)
     {
           for(u8j = 0; u8j <= COLUMNA - 1; u8j++){
          
             if(u8tablero[u8i][u8j] == 1)
               printf("%d ", u8tablero[u8i][u8j]);
             else if((u8tablero[u8i][u8j] == 3) && (u8perder == -1))
               printf("%c ", '*');
             else
               printf("%c ", '#');        
           }
          
           printf("| %d", u8i);   
           printf("\n"); 
          
     }
    
        
    
}
