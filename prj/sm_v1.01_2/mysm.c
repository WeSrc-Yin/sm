/**************************************************************************
* Copyright    : Copyright(C), 2019, pxf, person.
* File name    : mysm.c
* Author       : pxf
* Version      : v1.0
* Created on   : 2019/01/12 22:15:08
* Description  : 
* Others       : 
* History      : 190112 pxf ������
***************************************************************************/

/*ͷ�ļ�����*/
#include "./mysm.h"

/*״̬��mysm����
* ����״̬����ش���״̬
***********************************************/
SMDF(mysm, MYSM_LIST);

/*���� : mysm_act_init()
* ���� : mysmRec - ״̬��¼����ָ��
* ��� : ��
* ���� : ��ʼ״̬��������
***********************************************/
void mysm_act_init(void *mysmRec){
    hmysmRec hRec = (hmysmRec)mysmRec;

    // TODO

    hRec->next = mysm_sta_default;
    hRec->last = mysm_sta_init;
}

/*���� : mysm_act_default()
* ���� : mysmRec - ״̬��¼����ָ��
* ��� : ��
* ���� : Ĭ��״̬��������
***********************************************/
void mysm_act_default(void *mysmRec){
    hmysmRec hRec = (hmysmRec)mysmRec;

    // TODO

    hRec->next = mysm_sta_default;
    hRec->last = mysm_sta_default;
}

/*���� : mysm_act_examp()
* ���� : mysmRec - ״̬��¼����ָ��
* ��� : ��
* ���� : ״̬examp��������
***********************************************/
void mysm_act_examp(void *mysmRec){
    hmysmRec hRec = (hmysmRec)mysmRec;

    // TODO

    hRec->next = mysm_sta_default;
    hRec->last = mysm_sta_examp;
}

/*���� : mysm_act_next()
* ���� : mysmRec - ״̬��¼����ָ��
* ��� : ��
* ���� : ״̬next��������
***********************************************/
void mysm_act_next(void *mysmRec){
    hmysmRec hRec = (hmysmRec)mysmRec;

    // TODO

    hRec->next = mysm_sta_default;
    hRec->last = mysm_sta_next;
}

/**************************** Copyright(C) pxf ****************************/
