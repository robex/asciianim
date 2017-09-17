#include <stdio.h>
#include <unistd.h>

int main()
{
	const unsigned int sleeptime = 100000;
	fputs("processing...  ", stdout);
	fflush(stdout);

	for (int i = 0; i < 100; i++) {
		fputs("\b|", stdout);
		fflush(stdout);
		usleep(sleeptime);
		fputs("\b/", stdout);
		fflush(stdout);
		usleep(sleeptime);
		fputs("\b-", stdout);
		fflush(stdout);
		usleep(sleeptime);
		fputs("\b\\", stdout);
		fflush(stdout);
		usleep(sleeptime);
	}
	
	fputs("\n", stdout);
}
