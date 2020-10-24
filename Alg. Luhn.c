#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

void AlgoritmoDeLuhn (uint8 *pu8String, uint8 SizeStr);
void main ( void )
{
    uint8 SizeStr=15;
    uint8 CreditCart[15] = { 7, 5, 4, 6, 8 , 9, 7, 8, 2, 2, 4, 6, 3, 7, 4};
    printf("Estos son los 15 números de la tarjeta de crédito: ");
    for (uint8 i=0;i<SizeStr;i++)
    {
        printf("%x ", CreditCart[i]);
    }
    AlgoritmoDeLuhn( &CreditCart[0], SizeStr);
}

void AlgoritmoDeLuhn (uint8 *pu8String, uint8 SizeStr)
{
    uint8 u8Par;
    uint8 u8Total;
    uint8 u8Val;
    for(uint8 i=0;i<SizeStr;i++)
    {   
        u8Par=i%2;
        if (u8Par=0)
        {
            *pu8String+=*pu8String;
            if(*pu8String>10)
            {
                *pu8String=1+(*pu8String%10);
            }
            else
            {
                /*Nada por hacer*/
            }
        }
        else
        {
            /*Nada por hacer*/
        }
        u8Total += *pu8String;
        pu8String++;
    }   
    u8Val=u8Total%10;
    printf("\nEl último digito que aparezca debe de ser: %x\n",u8Val );
}