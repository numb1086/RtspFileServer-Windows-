#pragma comment(lib,"ws2_32.lib")
#include <winsock.h>
#include <iostream>

#ifndef _RTP_H
 #define _RTP_H
	/*  PT       encoding    media type
		96-127    dynamic         ?     */
	#define PayloadType 96
	#define fps 40
	#define sleepTime 15
	extern bool lock;
	extern char *fileName;
	struct RtpData{
		sockaddr_in addrClient;
		int rtpServerPort;
		int rtpClientPort;
	};
	DWORD WINAPI Rtp(struct RtpData *RtpParameter);
	void createRtpSocket(SOCKET *serverFD,sockaddr_in *addrClient,RtpData *RtpParameter);
	int OpenVideoFile();
	void createRtpHeader();
	void setRtpVersion();
	void setRtpPayloadType();
	void setSequenceNumber(int SequenceNumber);
	void setTimestamp(unsigned int timestamp);
	void setSSRC(unsigned int ssrc);
	void setMarker(int marker);
	void RtpEncoder(SOCKET sockFD,sockaddr_in addrClient,char *FrameStartCode,int FrameLength,int *SequenceNumber,unsigned int *timestamp);
	void setFUIndicator(char *FrameStartIndex);
	void setFUHeader(char *FrameStartIndex,bool start,bool end);
#endif