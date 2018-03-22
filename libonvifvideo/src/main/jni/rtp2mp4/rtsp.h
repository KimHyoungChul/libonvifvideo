/*--------------------------------------------------------
	
	COPYRIGHT 2007 (C) DVN (Holdings) Ltd (Hongkong)

	AUTHOR:		wangry@dvnchina.com
	PURPOSE:	kasenna simple rtsp lib
	CREATED:	2007-12-10  

	MODIFICATION HISTORY
	Date        By     Details
	----------  -----  -------

--------------------------------------------------------*/
#ifndef _RTSP_SOCK_H_
#define _RTSP_SOCK_H_ 

#ifdef __cplusplus
extern "C" 
{
#endif

/*----------------------------------------------------------
	��ϵͳ��������ֵ����:
	0 Ϊ�ɹ�
	��0 Ϊʧ������
----------------------------------------------------------*/
#define VERSION 1.0

/*-----------------------------------------------------------
  type = 0: �˳�����
  type = 1: ����
  type = 2: ����æ
-------------------------------------------------------------*/
typedef int (*rtsp_callback_func_t)(int type, char* data, int len);

unsigned long rtsp_open(char* url, int rtpPort, int* clip_len, rtsp_callback_func_t func);
int	rtsp_play(unsigned long hRtsp, int pos);
int rtsp_keepalive(unsigned long hRtsp);
void rtsp_close(unsigned long hRtsp);


#ifdef __cplusplus
}
#endif

#endif
