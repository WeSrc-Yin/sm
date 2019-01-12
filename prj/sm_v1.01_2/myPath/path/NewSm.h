/**************************************************************************
* Copyright    : Copyright(C), 2019, pxf, person.
* File name    : NewSm.h
* Author       : pxf
* Version      : v1.0
* Created on   : 2019/01/12 22:45:55
* Description  : ״̬��NewSm������״̬��ʹ��ʾ��ͷ�ļ�
* Others       : 
* History      : 190112 pxf ���ν���
***************************************************************************/

#ifndef NEWSM_H_
#define NEWSM_H_

/*ͷ�ļ�����*/
#include "../../sm_v1.01/sm.h"

/*״̬��NewSmʹ��ʾ����
* ��ǰ״̬������SMDF�ж����ʵ��NewSm����Ҫ����ֻ��������������
* ״̬�����з�ʽ������ֱ�Ӹ�ʱ��������SMR��ʹ���Զ����¼״̬���������SMRE
***********************************************
* SMR��ʽ
***********************************************
void test(void){
    while(1){SMR(NewSm);};
}
***********************************************
* SMRE��ʽ
***********************************************
void test2(void){
    static NewSmRec NewSmRunRec = {NewSm_sta_init};
    while(1){SMRE(NewSm, NewSmRunRec);};
}
***********************************************/


/*״̬��NewSm״̬���ж���
* ע������NewSm_init,NewSm_defaultδ�ڴ˶��壬Ĭ�ϻ����
***********************************************/
#define NEWSM_LIST(_)    \
    _(NewSm, examp)      \
    _(NewSm, next)


/*״̬��NewSm����
* �Ѹ���״̬��¼next,����һ״̬last��������������������
***********************************************/
SMDC(NewSm, NEWSM_LIST){
    sta next; // ����״̬��¼
    sta last; // ��һ״̬��¼
    // TODO
};

#endif /*NEWSM_H_*/

/**************************** Copyright(C) pxf ****************************/