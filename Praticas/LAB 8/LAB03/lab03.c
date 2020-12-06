#include "types.h"

extern uint8 TIMEB1;
extern uint8 TIMEB2;
extern uint8 TIMEB3;

void main ( void )
{   
    uint8 u8State = TRUE;
    while ( TRUE )
    {
        if ( u8State == StateMenu )
        {
            u8State = MENU( );
            printf("\n\n");
        }
        else if ( u8State == StateBML )
        {
            u8State = BML( );
            printf("\n");
        }
        else
        {

        }
    }
}