//#pragma   comment(lib,"ControlCAN.lib") 
#include <stdio.h>
#include <Windows.h>
//#include <stdint.h>
//#include <BaseTsd.h>
#include "ControlCAN.h"
#include "CAN_control.h"
//#pragma comment(lib,"ControlCAN.lib")
int m_connect=0;//表示现有链接状态 1为连接

void main()
{	
	char *info;
	UINT ID=0x00000001;
	UCHAR Data[8]="1234567";
	BYTE DataLen=8;
	CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)monitor,NULL,0,NULL);
//	Connect();
	while(1)
	{
		if(m_connect==1)
		{
		Sleep(500);
		sendinfo(ID,Data,DataLen);
		}
		else
		{
		Sleep(500);
		}

	}
	
}