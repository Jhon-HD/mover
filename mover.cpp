#include"stdio.h"
#include"stdlib.h"
#include"windows.h"
#include <conio.h>
void gotoxy(int x, int y){
HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X=x;
dwPos.Y=y; 
SetConsoleCursorPosition(hcon,dwPos); 
}



int main(){


char opcion;
int x=10 , y=10;

while(opcion!='z'){
 
 system("cls");//si le quitamos esto el caracter dejara rastro desde el punto que sea movido 
 gotoxy(x,y);
 printf("*");
 opcion=getch();
 switch(opcion){
  
 case 'w': y--; 
 break;
 
 case 's': y++;
 break;
 
 case 'a': x--;
 break;
 
 case 'd': x++;
 break;
 
  
        }
    }
}