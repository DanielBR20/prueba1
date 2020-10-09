//DataTypes
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

//Definitions
#define INICIO_CODIGO_ACSII_MIN 96
#define FINAL_CODIGO_ACSII_MIN 123

#define INICIO_CODIGO_ACSII_MAY 64
#define FINAL_CODIGO_ACSII_MAY 91

#define ESPACIO_CODIGO_ACSII 32

//Funciones
void GENFUN_vCapsOn (uint8 *pu8Src, uint8 u8SizeOfList);
void GENFUN_vCapsOff (uint8 *pu8Src, uint8 u8SizeOfList);
uint8 GENFUN_u8Ocurrencia (uint8 *pu8Src, uint8 u8Let_A_Encontrar, uint8 u8SizeOfList);   