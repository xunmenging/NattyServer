/*
 *  Author : luopeng , email : hibroad@hotmail.com
 * 
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of Author. (C) 2017
 * 
 *
 
****       *****
  ***        *
  ***        *                         *               *
  * **       *                         *               *
  * **       *                         *               *
  *  **      *                        **              **
  *  **      *                       ***             ***
  *   **     *       ******       ***********     ***********    *****    *****
  *   **     *     **     **          **              **           **      **
  *    **    *    **       **         **              **           **      *
  *    **    *    **       **         **              **            *      *
  *     **   *    **       **         **              **            **     *
  *     **   *            ***         **              **             *    *
  *      **  *       ***** **         **              **             **   *
  *      **  *     ***     **         **              **             **   *
  *       ** *    **       **         **              **              *  *
  *       ** *   **        **         **              **              ** *
  *        ***   **        **         **              **               * *
  *        ***   **        **         **     *        **     *         **
  *         **   **        **  *      **     *        **     *         **
  *         **    **     ****  *       **   *          **   *          *
*****        *     ******   ***         ****            ****           *
                                                                       *
                                                                      *
                                                                  *****
                                                                  ****


 *
 */



#ifndef __NATTY_SERVACTION_H__
#define __NATTY_SERVACTION_H__

#include "NattyAbstractClass.h"
#include "NattyJson.h"

typedef struct _ActionParam {
	C_DEVID fromId; 
	C_DEVID toId;
	JSON_Value *json; 
	char *jsonstring; 
	U16 jsonlen;
	int index;
} ActionParam;


void ntyJsonRecvResult(C_DEVID devId, char *jsonresult);

void ntyJsonBroadCastRecvResult(C_DEVID fromId, C_DEVID toId, char *jsonresult, U32 index);

void ntyJsonCommonResult(C_DEVID devId, const char *code);

void ntyJsonCommonExtendResult(C_DEVID devId, const char * code, int id);

void ntyCommonReqAction(ActionParam *pActionParam);

void ntyJsonAddEfenceAction(ActionParam *pActionParam);

void ntyJsonDelEfenceAction(ActionParam *pActionParam);

void ntyJsonRunTimeAction(ActionParam *pActionParam);

void ntyJsonTurnAction(ActionParam *pActionParam);

void ntyJsonAddScheduleAction(ActionParam *pActionParam);

void ntyJsonDelScheduleAction(ActionParam *pActionParam);

void ntyJsonUpdateScheduleAction(ActionParam *pActionParam);

void ntyJsonSelectScheduleAction(ActionParam *pActionParam);

void ntyJsonTimeTablesAction(ActionParam *pActionParam);

void ntyJsonLocationWIFIAction(ActionParam *pActionParam);

void ntyJsonLocationLabAction(ActionParam *pActionParam);

void ntyJsonWeatherAction(ActionParam *pActionParam);

void ntyJsonAddContactsAction(ActionParam *pActionParam);

void ntyJsonUpdateContactsAction(ActionParam *pActionParam);

void ntyJsonDelContactsAction(ActionParam *pActionParam);

void ntyJsonICCIDAction(ActionParam *pActionParam);

void ntyJsonOfflineMsgReqAction(ActionParam *pActionParam);

int ntyVoiceDataReqAction(C_DEVID senderId, C_DEVID gId, char *filename);

int ntyVoiceReqAction(C_DEVID fromId, U32 msgId);

int ntyVoiceAckAction(C_DEVID fromId, U32 msgId);
#endif // __NATTY_SERVACTION_H__


