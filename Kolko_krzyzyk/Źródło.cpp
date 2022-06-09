#include <iostream>
using namespace std;
char tablica[10] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9' };

char wygrana()
{
	if (tablica[1] == tablica[2] && tablica[2] == tablica[3])
		return tablica[1];
	if (tablica[4] == tablica[5] && tablica[5] == tablica[6])
		return tablica[4];
	if (tablica[7] == tablica[8] && tablica[8] == tablica[9])
		return tablica[7];
	if (tablica[1] == tablica[4] && tablica[4] == tablica[7])
		return tablica[1];
	if (tablica[2] == tablica[5] && tablica[5] == tablica[8])
		return tablica[2];
	if (tablica[3] == tablica[6] && tablica[6] == tablica[9])
		return tablica[3];
	if (tablica[1] == tablica[5] && tablica[5] == tablica[9])
		return tablica[1];
	if (tablica[3] == tablica[5] && tablica[5] == tablica[7])
		return tablica[3];
	else
		return 'q';

}
void plansza()
{
	system("cls");
	std::cout << "\n\n\n\n\n";
	std::cout << "                                               |       |       \n";
	std::cout << "                                               |       |       \n";
	std::cout << "                                           " << tablica[1] << "   |   " << tablica[2] << "   |   " << tablica[3] << "   \n";
	std::cout << "                                               |       |       \n";
	std::cout << "                                        _______|_______|_______\n";
	std::cout << "                                               |       |       \n";
	std::cout << "                                               |       |       \n";
	std::cout << "                                           " << tablica[4] << "   |   " << tablica[5] << "   |   " << tablica[6] << "   \n";
	std::cout << "                                               |       |       \n";
	std::cout << "                                        _______|_______|_______\n";
	std::cout << "                                               |       |       \n";
	std::cout << "                                               |       |       \n";
	std::cout << "                                           " << tablica[7] << "   |   " << tablica[8] << "   |   " << tablica[9] << "   \n";
	std::cout << "                                               |       |       \n";
	std::cout << '\n';

}

int main()
{
	std::cout << "\n\n\n\n";
	std::cout << "                                         _  __       _  _      \n";
	std::cout << "                                        | |/ /      | || |     \n";
	std::cout << "                                        | ' /  ___  | || | _  ___ \n";
	std::cout << "                                        |  <  / _ \\ | || |/ // _ \\ \n";
	std::cout << "                                        | . \\| (_) || ||   <| (_)|\n";
	std::cout << "                                        |_|\\_\\\\___/ |_||_|\\_\\\\___/ \n";
	std::cout << "                                                     _\n";
	std::cout << "                                                    (_)\n";
	std::cout << "                                                     _\n";
	std::cout << "                                                    | |\n";
	std::cout << "                                                    | |\n";
	std::cout << "                                                    |_|\n";
	std::cout << "                                     _                             _\n";
	std::cout << "                                    | |                           | |\n";
	std::cout << "                                    | | ___ __ _____   _ _____   _| |\n";
	std::cout << "                                    | |/ / '__|_  / | | |_  / | | | |/ /\n";
	std::cout << "                                    |   <| |   / /| |_| |/ /| |_| |   <\n";
	std::cout << "                                    |_|\\_\\_|  /___|\\__, /___|\\__, |_|\\_\\\n";
	std::cout << "                                                    __/ |     __/ |\n";
	std::cout << "                                                   |___/     |___/\n";
	std::cout << "\n\n\n\n\n";
	system("pause");
	plansza();
	int tury = 0;
	int pole;
	while (tury != 9)
	{
		tury++;
		if (tury % 2 == 0)
		{
			O:
			std::cout << "                                                Tura O\n                                                   ";
			cin >> pole;
			if (pole < 1 || pole > 9)
			{
				cout << "                                                Zly ruch\n";
				goto O;
			}
			if (tablica[pole] != 'X' && tablica[pole] != 'O')
				tablica[pole] = 'O';
			else
			{
				cout << "                                                Zly ruch\n";
				goto O;
			}
		}
		else
		{
			X:
			std::cout << "                                                Tura X\n                                                   ";
			cin >> pole;
			if (pole < 1 || pole > 9)
			{
				cout << "                                                Zly ruch\n";
				goto X;
			}
			if (tablica[pole] != 'X' && tablica[pole] != 'O')
				tablica[pole] = 'X';
			else
			{
				cout << "                                                Zly ruch\n";
				goto X;
			}
		}
		if (wygrana() != 'q')
		{ 
			system("cls");
			if (wygrana() == 'O')
			{
				std::cout << "\n\n\n\n\n\n\n\n";
				std::cout << "                                   ____                                   _       \n";
				std::cout << "                                  / __ \\                                 | |      \n";
				std::cout << "                                 | |  | | __      ___   _  __ _ _ __ __ _| |_   _ \n";
				std::cout << "                                 | |  | | \\ \\ /\\ / / | | |/ _` | '__/ _` | | | | |\n";
				std::cout << "                                 | |__| |  \\ V  V /| |_| | (_| | | | (_| | | |_| |\n";
				std::cout << "                                  \\____/    \\_/\\_/  \\__, |\\__, |_|  \\__,_|_|\\__, |\n";
				std::cout << "                                                     __/ | __/ |             __/ |\n";
				std::cout << "                                                    |___/ |___/             |___/ \n";
				std::cout << "\n\n\n\n\n\n\n\n\n\n\n";
			}
			if (wygrana() == 'X')
			{
				std::cout << "\n\n\n\n\n\n\n\n";
				std::cout << "                                 __   __                                 _       \n";
				std::cout << "                                 \\ \\ / /                                | |      \n";
				std::cout << "                                  \\ V /  __      ___   _  __ _ _ __ __ _| |_   _ \n";
				std::cout << "                                   > <   \\ \\ /\\ / / | | |/ _` | '__/ _` | | | | |\n";
				std::cout << "                                  / . \\   \\ V  V /| |_| | (_| | | | (_| | | |_| |\n";
				std::cout << "                                 /_/ \\_\\   \\_/\\_/  \\__, |\\__, |_|  \\__,_|_|\\__, |\n";
				std::cout << "                                                    __/ | __/ |             __/ |\n";
				std::cout << "                                                   |___/ |___/             |___/ \n";
				std::cout << "\n\n\n\n\n\n\n\n\n\n\n";
			}
			break;
		}
			
		plansza();
	}
	if (wygrana() == 'q')
	{
		system("cls");
		std::cout << "\n\n\n\n";
		std::cout << "           _____                _       _\n";
		std::cout << "          |  __ \\              (_)     | |\n";
		std::cout << "          | |__) |___ _ __ ___  _ ___  | |\n";
		std::cout << "          |  _  // _ \\ '_ ` _ \\| / __| | |\n";
		std::cout << "          | | \\ \\  __/ | | | | | \\__ \\ |_|\n";
		std::cout << "          |_|  \\_\\___|_| |_| |_|_|___/ (_)\n";
		std::cout << "\n\n\n\n\n\n\n\n\n";
	}
}