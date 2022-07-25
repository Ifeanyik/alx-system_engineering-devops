#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sig_handle(int signum)
{
	if (signum == SIGTERM)
		printf("I am invincible!!!\n");
}

int main(void)
{
	sig_handle(SIGTERM);
	return (0);
}
