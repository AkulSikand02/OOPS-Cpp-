#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include <conio.h>

void SetColor(int ForgC)
 {
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
int main(void)
{
    for (int i =1;i<5;i++)
    {
        SetColor(i);
        printf("This text is Me");
        getche();
        system("cls");

    }
    return 0;
}
