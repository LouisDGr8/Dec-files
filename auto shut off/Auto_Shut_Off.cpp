#define _WIN32_WINNT 0x500
#include <iostream>
#include <windows.h>
#include <ctime>
//#include <iomanip>

using namespace std;


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

void empty()
{
	SetKeyboardState(0);
}

void commands()
{
	cout<<"Ctrl+Alt+M to abort countdown\nCtrl+Alt+K to change time(restarts previous)\n\n";
}

double time_wanted;
time_t poczatek;
int error=10;

void time_set()
{
//	while(error!=1)
//	{
		cout<<"In what time will the computer shut down automaticly(min) : ";
	
		cin>>time_wanted;
		time_wanted=time_wanted*60;
	
//		if(time_wanted<0)
//		{
//			cout<<"ERROR";
//		}
//		else
//		{
			cout<<"OK\n\n";
//			error=1;
//		}
//	}
	poczatek=time(0);
}

const int KEYEVENT_KEYUP = 0x02;

int main()
{
	keybd_event(VK_VOLUME_MUTE,0,0,0);
	keybd_event(VK_VOLUME_MUTE,0,KEYEVENT_KEYUP,0);
				
	cout<<"P.S it's an auto shut down program\n\n";
	
	commands();
	
	time_set();
	
	FreeConsole();
	
	while(true)
	{
		empty();
		Sleep(200);
		
		if(GetAsyncKeyState(VK_CONTROL)&&GetAsyncKeyState(VK_MENU)&&GetAsyncKeyState(0x4D))//m
		{
			AllocConsole();
			cout<<"Fin\n\n";
			system("pause");
			exit(0);
		}
		
		else if(GetAsyncKeyState(VK_CONTROL)&&GetAsyncKeyState(VK_MENU)&&GetAsyncKeyState(0x4B))//k
		{
			AllocConsole();
			time_set();
			FreeConsole();
		} 	
//		else if(GetAsyncKeyState(VK_CONTROL)&&GetAsyncKeyState(VK_MENU)&&GetAsyncKeyState(0x4A))//J
//		{
//			AllocConsole();
//			cout<<"Time till auto shut down: "<<setprecision(100000)<<difftime(poczatek,(time_t)time_wanted/100)/600;
//			system("pause");
//			FreeConsole();
//		} 
		Sleep(200);
		time_t koniec=time(0);
		
		if(difftime(koniec,poczatek)>=time_wanted)
		{
//			cout<<"\a"; nie dziala
			Sleep(10000);
//			cout<<"\a"; nie dziala
			keybd_event(VK_VOLUME_MUTE,0,0,0);
			keybd_event(VK_VOLUME_MUTE,0,KEYEVENT_KEYUP,0);
			
			keybd_event(VK_LWIN,0,0,0);
			keybd_event(VK_LWIN,0,KEYEVENT_KEYUP,0);
			SetCursorPos(294,711);
			Sleep(500);
			mouseLeftClick();
			Sleep(3000);
			//SetCursorPos(444,444);
			SetCursorPos(639,291);
			Sleep(500);
			mouseLeftClick();
			exit(0);
		}
		
		empty();
	}
}
