/**************************************************************************
* @copyright    :Copyright(C), 2019, pxf, person.
* @file         :mysm.c
* @author       :pxf
* @version      :v1.0
* @date         :2019/01/06 16:39:09
* @brief        :״̬��mysm���弰��״̬��������Դ�ļ�
* @others       :
* @history      :190106 pxf ������
***************************************************************************/

#include "mysm.h"

/*״̬��mysm����
* ����״̬����ش���״̬
***********************************************/
SMDF(mysm, MYSM_LIST);


/*���� :mysm_act_init()
* ���� :mysmRec - ״̬��¼����ָ��
* ��� :��
* ���� :��ʼ״̬��������
***********************************************/
void mysm_act_init(void *mysmRec){
    hmysmRec hRec = (hmysmRec)mysmRec;

    // TODO

    hRec->next = mysm_sta_default;
    hRec->last = mysm_sta_init;
}

/*���� :mysm_act_default()
* ���� :mysmRec - ״̬��¼����ָ��
* ��� :��
* ���� :Ĭ��״̬��������
***********************************************/
void mysm_act_default(void *mysmRec){
    hmysmRec hRec = (hmysmRec)mysmRec;

    // TODO

    hRec->next = mysm_sta_default;
    hRec->last = mysm_sta_default;
}

/*���� :mysm_act_examp()
* ���� :mysmRec - ״̬��¼����ָ��
* ��� :��
* ���� :״̬examp��������
***********************************************/
void mysm_act_examp(void *mysmRec){
    hmysmRec hRec = (hmysmRec)mysmRec;

    // TODO

    hRec->next = mysm_sta_default;
    hRec->last = mysm_sta_examp;
}

/*���� :mysm_act_next()
* ���� :mysmRec - ״̬��¼����ָ��
* ��� :��
* ���� :״̬next��������
***********************************************/
void mysm_act_next(void *mysmRec){
    hmysmRec hRec = (hmysmRec)mysmRec;

    // TODO

    hRec->next = mysm_sta_default;
    hRec->last = mysm_sta_next;
}

/**************************** Copyright(C) pxf ****************************/

