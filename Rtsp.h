#pragma comment(lib,"ws2_32.lib")
#include <winsock.h>
#include <iostream>

#ifndef _RTSP_H_
 #define _RTSP_H

	#define BUF_SIZE 1024
	#define RtspServerPort 8554
	#define RtpServerPort 50000
	void Rtsp();
	void OPTIONS_Reply(SOCKET clientFD);
	void DESCRIBE_Reply(SOCKET clientFD,char *RtspContentBase);
	void SETUP_Reply(SOCKET clientFD);
	void PLAY_Reply(SOCKET clientFD,sockaddr_in addrClient,char *RtspUrl);
	void GET_PARAMETER_Reply(SOCKET clientFD);
	void TEARDOWN_Reply(SOCKET clientFD);
	void createRtspSocket(SOCKET *serverFD,SOCKET *clientFD,sockaddr_in *addrClient);
#endif