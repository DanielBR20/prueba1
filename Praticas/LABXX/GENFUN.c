#include <stdio.h>
#include <GENFUN.h>

void main ()
{
			//MINUSCULAS A MAYUSCULAS
	uint8 au8Min_May[12] = "mecatronica";
    printf("< MINUSCULAS A MAYUSCULAS > \n\nTexto en Min: %s", au8Min_May);
    GENFUN_vCapsOn( &au8Min_May[0], 12 );
    printf("\nTexto con MAYUS: %s\n\n", au8Min_May);

    		//MAYUSCULAS A MINUSCULAS
    uint8 au8May_Min[12] = "MECATRONICA";
    printf("\n< MAYUSCULAS A MINUSCULAS > \n\nTexto en May: %s", au8May_Min);
    GENFUN_vCapsOff ( &au8May_Min[0], 12 );
    printf("\nTexto con MIN: %s\n\n", au8May_Min);

    		//OCURRENCIA
    uint8 u8Let_A_Encontrar;
    uint8 au8Ocurrencia[23] = "ingenieria mecatronica";
    uint8 u8Repeticion;
    printf("\n< OCURRENCIA >\n\n");
    printf("Que letra quieres buscar en: %s\n", au8Ocurrencia);
    scanf("%c",&u8Let_A_Encontrar);
    u8Repeticion = GENFUN_u8Ocurrencia ( &au8Ocurrencia[0], u8Let_A_Encontrar, 23 );
    printf("La Letra  %c  se repite  %d  veces\n\n", u8Let_A_Encontrar, u8Repeticion);

    		//PROMEDIO
    uint8 u8Suma[7] = { 120, 88 , 64 , 86, 250 , 52 , 180};
    uint8 aPosicion;
    uint16 u16Promedio;
    printf("\n< PROMEDIO >\n\n");
    printf("La cadena es: ");
    for ( aPosicion = 0 ; aPosicion < 7 ; aPosicion ++) 
    {
        printf(" %d ", u8Suma[aPosicion ]);
    }
    u16Promedio = GENFUN_u8GetAverage ( &u8Suma[0], 7 );
    printf("\nSu promedio =  %d\n\n", u16Promedio);

    		//CAMBIO DE ELEMENTO
    uint8 u8Cadena[11] = 'Mecatronica'; 
    uint8 u8Caracter_De_Cambio = 't';
    printf("\n< CAMBIO DE ELEMENTO >\n\n");
    printf("Texto antes del cambio: %s\n", u8Cadena);
    printf("Cambio de elemento en la posicion 5\n");
    GENFUN_u8MemSet (&u8Cadena[5],u8Caracter_De_Cambio , 11 );
    printf("Texto con el cambio: %s\n\n", u8Cadena);
}

			//INICIO DE FUNCIONES

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

uint8 GENFUN_u8GetAverage ( uint8 *pu8Src, uint8 u8SizeOfList ) 
{
    
    uint16 u16Operacion = 0;
    uint8 Elementos;
    Elementos = u8SizeOfList;
    while ( u8SizeOfList > 0 ) 
    {

        u16Operacion += *pu8Src;
        *pu8Src++;
        u8SizeOfList--;

    }
    
    return u16Operacion/Elementos;
}

void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList)
{
	*pu8Src = u8Char2Set;
}