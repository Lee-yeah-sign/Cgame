#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "gamelib.h"
#include <conio.h>
#include <time.h>
extern int X, Y;
int main()
{
    //fflush(stdin);
    char key;
    //fflush(stdin);
    SetTitle("Ц������");
    Setcolor(10,0);
    Init();
    showWelcome();
    showMAP();
    showInfomation();
    showMainMenu();
    while(1)
    {
        //fflush(stdin);
        //�ȴ��û�����ĳ����
        key = getch();//�޻��Խ���ĳ������ getchar();
        //fflush(stdin);
        if(key == '1' || key == '2' || key == '3' || key == '4' || key == '5' || key == '6' || key == 'void registered()void registered()void registered()')
        {
            //printf("1-5֮�����Ϸ�˵�");
            Process(key);/**������Ϸ���˵�ҵ��*/
            continue;
        }
        else if(key == VK_UP || key == 72)//�û������ϼ�
        {
            Y--;
        }
        else if(key == 39 || key == 77)//��
        {
            X++;
        }
        else if(key == 40 || key == 80)//��
        {
            Y++;
        }
        else if(key == 37 || key == 75)//��
        {
            X--;
        }
        if(X > 7) X = 0;
        if(X < 0) X = 7;
        if(Y > 7) Y = 0;
        if(Y < 0) Y = 7;
        showMAP();
    }
}
