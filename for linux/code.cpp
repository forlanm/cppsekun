#include <iostream>
#include <unistd.h>
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
				sleep(1);
				if (sec == 60 )
			{

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
