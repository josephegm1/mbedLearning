#include "mbed.h"

AnalogIn ain(p15);
AnalogOut aout(p18);

Serial pc(USBTX, USBRX, 115200);

int main() 
{
	while(1) 
	{
		wait(0.1);
		aout = ain;
		pc.printf("percentage: %3.3f%%\r\n", ain.read()*100.0f);
	}
}
