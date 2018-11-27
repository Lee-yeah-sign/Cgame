#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
typedef struct _map
{
    int ID;//��ͼid
    char name[50];//��ͼ����
    int minlevel;//��ҵȼ�
    //����ṹ
    COORD coord;
    char introduce[500];//��ͼ����
}Map;
//��� ��ͼ ���� ����
//���ߣ����� ���� ����Ʒ
typedef enum _propstype
{
    //����ö��
    weapons,armor,con//���������ߣ�����Ʒ

}propType;
typedef struct _props
{
    int ID;//����id
    char name[50];//��������
    int level;//���ߵȼ�
    propType type;
    union//���� ��ѡ1
    {
        int attack;//������������Ͷ�Ӧ������
        int defence;//����Ƿ��ߣ��Ͷ�Ӧ������
        double power;//���������Ʒ���Ͷ�ӦѪ��
    };
    int stross;//���߿�棬����ұ����е��ӵ�����
    double price;//���߼۸�
    char describe[100];//��������
}Props;
typedef struct _martial{
    int id;         //���ɱ��
    char name[21];  //��������
    char type[11];  //�������ͣ����ɡ�а�ɡ�������а
    COORD hqCoord;  //�ܲ�����
    int isOpen;     //�Ƿ񿪷�
    char description[1000];//��������
}Martial;
typedef struct _bag{
    int playerId;       //������ұ��
    int propCount;      //��ǰ���ߵ�����
    int propMax;        //��������������
    Props props[8];      //�����еĵ������飬Ĭ��8�����߲��(8�������óɳ���)
}Bag;
typedef struct _player
{
    int id;
    char name[50];  //�������
    char pass[50];  //��ҵ�½����
    int life;       //�����������Ĭ��5����������һ��-1
    int level;      //��Ҽ���
    int exp;        //��ҵ�ǰ������ֵ
    int hp;         //��ҵ�ǰѪ��
    int mp;         //�������ֵ
    int gold;       //��ҽ����
    Martial martial;//��������
    Props weapons;    //��װ��������
    Props armor;     //��װ���ķ���
    Props con;       //��װ������Ʒ
    Bag bag;        //��ұ���
    COORD coord;//��ҵ�ǰ����
}Player;
/* ���� */
typedef struct _monster{
    int id;
    char name[50];  //��������
    int level;      //���Ｖ��
    int hp;         //��������ֵ
    int att;        //���﹥����
    int deff;       //���������
    int minMoney;   //��������Сֵ
    int maxMoney;   //���������ֵ
    int exp;        //ɱ����������þ���ֵ
    int state;      //����״̬��1-���棬0-����
    COORD Coord;   //�������ڵ�ͼ����
}Monster;
void Login();/**��ҵ�¼*/
void registered();/**���ע��*/
void Init();
/**��ʾ��Ϸ�Ļ�ӭ��Ϣ*/
void showWelcome();
/**��ʾ��ͼ��Ϣ*/
void showMAP();
/**��ʾ��Ϸ��ͼ�·�����Ϸ��Ϣ*/
void showInfomation();
/**��ʾ��Ϸ���˵�*/
void showMainMenu();
/**����Ϣ����ʵ�ֵ�ͼ��Ϣ*/
void showmapinfo();
/**������Ϸ���˵�ҵ��*/
void Process(char key);
/**����Ϣ������ʾ��ҵĸ�������*/
void showplayerinfo();
/**����Ϣ������ʾ������Ϣ*/
void showMonster();
/**��ҶԹ���Ĵ�*/
void fight(Monster *monster);
/**��һ��ܶ�*/
void Move(int x,int y);
/**��ӡ������Ϣ*/
void ShowTrade();
/**�����*/
int Trade(Player *player, int propId);
#endif // GAME_H_INCLUDED
