/**************************************************************************
* Copyright    : Copyright(C), 2019, pxf, person.
* File name    : mysm.h
* Author       : pxf
* Version      : v1.0
* Created on   : 2019/01/12 22:15:08
* Description  : 
* Others       : 
* History      : 190112 pxf 初建立
***************************************************************************/

#ifndef MYSM_H_
#define MYSM_H_

/*头文件包含*/
#include "./sm_v1.01/sm.h"

/*状态机mysm使用示例：
* 当前状态机已在SMDF中定义出实体mysm，需要做的只是让其运行起来
* 状态机运行方式有两种直接给时钟驱动的SMR和使用自定义记录状态后进驱动的SMRE
***********************************************
* SMR方式
***********************************************
void test(void){
    while(1){SMR(mysm);};
}
***********************************************
* SMRE方式
***********************************************
void test2(void){
    static mysmRec mysmRunRec = {mysm_sta_init};
    while(1){SMRE(mysm, mysmRunRec);};
}
***********************************************/


/*状态机mysm状态序列定义
* 注意其中mysm_init,mysm_default未在此定义，默认会给出
***********************************************/
#define MYSM_LIST(_)    \
    _(mysm, examp)      \
    _(mysm, next)


/*状态机mysm声明
* 已给出状态记录next,及上一状态last，其他参数需自行添加
***********************************************/
SMDC(mysm, MYSM_LIST){
    sta next; // 运行状态记录
    sta last; // 上一状态记录
    // TODO
};

#endif /*MYSM_H_*/

/**************************** Copyright(C) pxf ****************************/
