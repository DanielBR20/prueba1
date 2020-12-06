#include <stdio.h>
#include <time.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long uint64;

#define MAX_TIME            25
#define TRUE                1
#define FALSE               0
#define UNO                 1
#define CERO                0

typedef enum
{
    StateMenu = UNO,
    StateBML
}States;
uint8 MENU( void );
uint8 BML( void );