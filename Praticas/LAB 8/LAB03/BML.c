#include "BML.h"

uint8 BML ( void )
{   
	extern uint8 TIMEB1;
    extern uint8 TIMEB2;
    extern uint8 TIMEB3;

    // static uint8 u8Time1 = CERO;
    // static uint8 u8Time2 = CERO;
    // static uint8 u8Time3 = CERO;

    static uint8 u8Finaliza1 = FALSE;
    static uint8 u8Finaliza2 = FALSE;
    static uint8 u8Finaliza3 = FALSE;

    if ( TIMEB1 != CERO && u8Finaliza1 == FALSE )
    {   
        printf("\nBomba número 1 activada, tiempo restante %d min", TIMEB1);
        TIMEB1--;
    }
    else
    {
        u8Finaliza1 = TRUE;
    }
    
    if ( TIMEB2 != CERO && u8Finaliza2 == FALSE )
    {   
        
        printf("\nBomba número 2 activada, tiempo restante %d min", TIMEB2);
        TIMEB2--;
    }
    else
    {
        u8Finaliza2 = TRUE;
    }

    if ( TIMEB3 != CERO && u8Finaliza3 == FALSE )
    {   
        printf("\nBomba número 3 activada, tiempo restante %d min", TIMEB3);
        TIMEB3--;
    }
    else
    {
        u8Finaliza3 = TRUE;
    }

    
    
	delay(UNO);		/* 1 seg  */

    if ( TIMEB1 == CERO && TIMEB2 == CERO && TIMEB3 == CERO )
    {
        return StateMenu;
    }
    else
    {
        return StateBML;
    }
}

void delay( uint32 number_of_seconds ) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = Convertir_milis * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds); 
}