#include "gamelib.h"

void SetTitle(char *title)//���ÿ���̨��ɫ
{
    SetConsoleTitle(title);
}
void Setcolor(int forcolor,int backcolor)/**�������ֵ�ǰ��ɫ�ͱ���ɫ*/
{
    HANDLE winHandle;//�ݱ�
    winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(winHandle,forcolor + backcolor * 0x10);

}
void Setposition(int x,int y)
{
    HANDLE winHandle;//�ݱ�
    COORD pors = {x,y};
    winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    /**���ù�������*/
    SetConsoleCursorPosition(winHandle,pors);
}
void Clear(int x,int y,int rowCount)
{
     Setposition(x,y);
     int i,j;
     for(i=0;i<rowCount;i++)
     {
         Setposition(x,y+i);
         for(j=0;j<78;j++)
         {
             printf(" ");
         }
     }
}
