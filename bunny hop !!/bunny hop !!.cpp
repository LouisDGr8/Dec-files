#define _WIN32_WINNT 0x0501
#include <windows.h>
#include <winuser.h>
#include <iostream>
using namespace std;

//int sleep=0;

//void sleepy()
//{
//	cout<<"Sleep time [miliseconds] [500-700]? : ";
//	cin>>sleep;
//}

void mouseLeftClick ()
{
     INPUT Input = {0};
     
     // left down
     Input.type = INPUT_MOUSE;
     Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
     ::SendInput(1,&Input,sizeof(INPUT));
     
     // left up
     ::ZeroMemory(&Input,sizeof(INPUT));
     Input.type = INPUT_MOUSE;
     Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
     ::SendInput(1,&Input,sizeof(INPUT));
}

int debil=1;

bool bul=false;
const int KEYEVENT_KEYUP = 0x02;

void bunny_hop()
{
	cout<<"Press P to stop \n";
	bul=false;
	             	
	while(bul!=true)
	{
		if(debil%3==0)
		{
			mouseLeftClick ();
		}
		
		keybd_event(VK_MENU,0,0,0);
		keybd_event(VK_F4,0,0,0);
		
		if(GetAsyncKeyState(0x50))//P
		{
			bul=true;
		}
		
		keybd_event(VK_MENU,0,KEYEVENT_KEYUP,0);
		keybd_event(VK_F4,0,KEYEVENT_KEYUP,0);
		
		Sleep(100);
		debil++;
	}
	keybd_event(VK_MENU,0,KEYEVENT_KEYUP,0);
	keybd_event(VK_F4,0,KEYEVENT_KEYUP,0);

	cout<<"B-hop ended \n";
}   

bool bull=false;

int main()
{
//	sleepy();
	
	cout<<"Press I to start b_hop\n";
	while(bull!=true)
	{
		Sleep(300);
		
		if(GetAsyncKeyState(VK_ESCAPE))//ESC
		{
			bull=true;
			continue;
		}
		
//		if(GetAsyncKeyState(0x53))//S
//		{
//			sleepy();
//			continue;
//		}
//		
		if(GetAsyncKeyState(0x49))//I
		{
			bunny_hop();
			continue;
		}
		
	}
	
}
