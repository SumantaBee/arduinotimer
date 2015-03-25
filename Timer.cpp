#include "Timer.h"


Timer::Timer()
{
	mDelay = 1000;
	time = 0;
	mCount=1;
}
Timer::Timer(long delay)
{
	mDelay = delay;
	time = 0;
	mCount=1;
}
void Timer::tick(int t)
{
	elapsed(t);
}
void Timer::update()
{
	if (millis() > time)
	{
		tick(mCount++);
		time += mDelay;
	}
}
