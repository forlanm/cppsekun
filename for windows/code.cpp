#include <iostream>
#include <windows.h>
using namespace std;
int main ()
{
	int sec = 0;
	int min = 0;
	int hou = 0;
	for (;;)
	{
		cout<<"	||	Прошло  "<<hou<<" часов "<<min<<" минут "<<sec<< " секунд   || "<<endl;
		sec++;
		Sleep(1);
		if (sec == 60 ){
			min += 1;
			sec = 0;
			}
		if (min == 60)
			{
				hou += 1;
				min = 0;
				sec = 0;
			}
	}

}
