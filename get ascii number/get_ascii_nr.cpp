#include <iostream>
#include <windows.h>
#include <conio.h>


int main()
{
using namespace std;

	unsigned char znak;
    std::cout << "klawisz [ESC] wychodzi z programu." << std::endl;
    do
    {
        znak = getch();
        system("cls");
        std::cout << "znak: '" << znak << "' kod: " << static_cast < int >( znak ) << std::endl;
        while( kbhit() )
        {
            znak = getch();
            std::cout << "*znak: '" << znak << "' kod: " << static_cast < int >( znak ) << std::endl;
        }
        std::cout << std::endl;
    } while( znak != 27 ); //ESC

}
