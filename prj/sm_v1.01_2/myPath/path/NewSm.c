/**************************************************************************
* Copyright    : Copyright(C), 2019, pxf, person.
* File name    : NewSm.c
* Author       : pxf
* Version      : v1.0
* Created on   : 2019/01/12 22:45:55
* Description  : ״̬��NewSm���弰��״̬��������Դ�ļ�
* Others       : 
* History      : 190112 pxf ���ν���
***************************************************************************/

/*ͷ�ļ�����*/
#include "./NewSm.h"

/*״̬��NewSm����
* ����״̬����ش���״̬
***********************************************/
SMDF(NewSm, NEWSM_LIST);

/*���� : NewSm_act_init()
* ���� : NewSmRec - ״̬��¼����ָ��
* ��� : ��
* ���� : ��ʼ״̬��������
***********************************************/
void NewSm_act_init(void *NewSmRec){
    hNewSmRec hRec = (hNewSmRec)NewSmRec;

    // TODO

    hRec->next = NewSm_sta_default;
    hRec->last = NewSm_sta_init;
}

/*���� : NewSm_act_default()
* ���� : NewSmRec - ״̬��¼����ָ��
* ��� : ��
* ���� : Ĭ��״̬��������
***********************************************/
void NewSm_act_default(void *NewSmRec){
    hNewSmRec hRec = (hNewSmRec)NewSmRec;

    // TODO

    hRec->next = NewSm_sta_default;
    hRec->last = NewSm_sta_default;
}

/*���� : NewSm_act_examp()
* ���� : NewSmRec - ״̬��¼����ָ��
* ��� : ��
* ���� : ״̬examp��������
***********************************************/
void NewSm_act_examp(void *NewSmRec){
    hNewSmRec hRec = (hNewSmRec)NewSmRec;

    // TODO

    hRec->next = NewSm_sta_default;
    hRec->last = NewSm_sta_examp;
}

/*���� : NewSm_act_next()
* ���� : NewSmRec - ״̬��¼����ָ��
* ��� : ��
* ���� : ״̬next��������
***********************************************/
void NewSm_act_next(void *NewSmRec){
    hNewSmRec hRec = (hNewSmRec)NewSmRec;

    // TODO

    hRec->next = NewSm_sta_default;
    hRec->last = NewSm_sta_next;
}

/**************************** Copyright(C) pxf ****************************/
