#ifndef GAMELIB_H_INCLUDED
#define GAMELIB_H_INCLUDED
#include <stdio.h>
#include <windows.h>
/**���ÿ���̨���ڱ���*/
void SetTitle(char *title);
/**�������ֵ�ǰ��ɫ�ͱ���ɫ*/
void Setcolor();
/**���ù��λ��*/
void Setposition();
/**��x��y���꿪ʼ����rowCount��*/
void Clear(int x,int y,int rowCount);
void ShowTrade();//����װ��
#endif // GAMELIB_H_INCLUDED
