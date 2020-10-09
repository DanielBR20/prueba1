#include <stdio.h>
#include <GENFUN.h>

void main ()
{
	uint8 au8Min_May[12] = "mecatronica";
    printf("< Minusculas a Mayusculas > \n\nTexto en Min: %s", au8Min_May);
    GENFUN_vCapsOn( &au8Min_May[0], 12 );
    printf("\nTexto con MAYUS: %s\n\n", au8Min_May);

    uint8 au8May_Min[12] = "MECATRONICA";
    printf("\n< Mayusculas a Minusculas > \n\nTexto en May: %s", au8May_Min);
    GENFUN_vCapsOff ( &au8May_Min[0], 12 );
    printf("\nTexto con MIN: %s\n\n", au8May_Min);

    uint8 u8Let_A_Encontrar;
    uint8 au8Ocurrencia[23] = "ingenieria mecatronica";
    uint8 u8Repeticion;
    printf("\n< Ocurrencia >\n\n");
    printf("Que letra quieres buscar en   < %s >\n", au8Ocurrencia);
    gets(&u8Let_A_Encontrar);
    u8Repeticion = GENFUN_u8Ocurrencia ( &au8Ocurrencia[0], u8Let_A_Encontrar, 23 );
    printf("\nLa Letra  %c  se repite  %d  veces\n\n", u8Let_A_Encontrar, u8Repeticion);

}

void GENFUN_vCapsOn (uint8 *pu8Src, uint8 u8SizeOfList) 
{
	  while ( u8SizeOfList > 0 ) 
	  {
        if ( *pu8Src > INICIO_CODIGO_ACSII_MIN && *pu8Src < FINAL_CODIGO_ACSII_MIN ) 
        {
            *pu8Src -= ESPACIO_CODIGO_ACSII;

        }
        else 
        {
            //No Pasa Nada
        }
        *pu8Src++;
        u8SizeOfList--;

    }

}

void GENFUN_vCapsOff ( uint8 *pu8Src, uint8 u8SizeOfList ) 
{
    while ( u8SizeOfList > 0 ) {
        if ( *pu8Src > INICIO_CODIGO_ACSII_MAY && *pu8Src < FINAL_CODIGO_ACSII_MAY ) 
        {
            *pu8Src += ESPACIO_CODIGO_ACSII;

        }
        else 
        {
            //No Pasa Nada
        }
        *pu8Src++;
        u8SizeOfList--;

    }
}

uint8 GENFUN_u8Ocurrencia (uint8 *pu8Src, uint8 u8Let_A_Encontrar, uint8 u8SizeOfList)
{
    uint8 u8ocurrencia = 0 ;
    while ( u8SizeOfList != 0 ) {
        if ( *pu8Src != u8Let_A_Encontrar ) 
        {
            
            //No Pasa Nada

        }
        else 
        {

        	u8ocurrencia++;

        }
        *pu8Src++;
        u8SizeOfList--;
    }
    return u8ocurrencia;

}