#ifndef _Timer_h 
#define _Timer_h
#ifndef Arduino_h
#include"Arduino.h"
#endif
typedef void(*activity)(int);
class Timer
{
private:
	unsigned long mCount;
	long mDelay;
	unsigned long time;
public:
	activity elapsed;
public:
	Timer();
	Timer(long);
	void update();
private:
	void tick(int);
};
#endif

