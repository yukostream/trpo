#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include "FN.h"

int main()
{
COORD position;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
setlocale(LC_ALL,"RUS");
float x;
int o,y;
y = 3;
printf ("+------+---------------------+---------------------------+\n");
printf ("|  x   |      Сумма ряда     |       Значение функции    |\n");  
printf ("+------+---------------------+---------------------------+\n"); 
for ( x = 1; x < 2.1 ; x = x + 0.1)
{
    o = 0;
    position.X = o;
    position.Y = y;
    SetConsoleCursorPosition(hConsole,position);
    printf("|  %.1f", x );
    o += 7;         
    position.X = o;
    position.Y = y;
    SetConsoleCursorPosition(hConsole,position);            
    printf("|     %.8f",Ryad(x));
    o += 22;         
    position.X = o;
    position.Y = y;
    SetConsoleCursorPosition(hConsole,position); 
    printf("|         %.8f",Fn(x));
    o += 28;         
    position.X = o;
    position.Y = y;
    SetConsoleCursorPosition(hConsole,position);
    printf("|\n");
    printf ("+------+---------------------+---------------------------+");
    y = y + 2;
}
getch ();
}
    
    
    
    
    
    
    
    
    
    
    
    
    
