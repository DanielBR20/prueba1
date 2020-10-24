#include <stdio.h>
#include <Codigo de Luhn.h>

//DATA TYPES

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

//DEFINITIONS

void Verificacion (uint8 *pu8Src, uint8 u8Size);

void main()
{
    uint8 au8Array[16];
    uint8 u8Size[16];
    
    printf("Ingrese los 16 digitos de la tarjeta >> ");
    scanf("%d", au8Array);
    
    Verificacion (&au8Array[0], u8Size);
}

void Verificacion (uint8 *pu8Src, uint8 u8Size)
{
    uint8 u8suma = 0, u8x = 0;
    uint8 u8i;
    uint8 au8array[16];
    *pu8Src = au8array;
    
    for (u8i = 0; u8i <= 15; u8i += 2)
    {
        if (u8i%2 == 0)
        {
            u8x = (au8array[u8i] - '0') * 2;
            if (u8x >= 10)
            {
                u8x = (u8x - 10) + 1;
            }
        }
        else
        {
            u8x = au8array[u8i] - '0';
        }
        u8suma = u8x + u8suma;
    }
    
    if (u8suma%10 == 0)
    {
        printf("Tarjeta valida");
    }
    else
    {
        printf("Tarjeta invalida");
    }
}

