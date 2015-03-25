# arduinotimer
A timer class for Arduino to do some fixed work at a specific delay. This library does not use 'delay()' function
Please give credit to me when you use my code.


Use:
include<Timer.h>

Create an object of Timer class with 
Timer t(500);
or 
Timer t();
the later one initializes the Timer with a default 1sec delay

then set the tick function as
void functionname(int count);
and make the reference as 
t.elapsed=functionname; in the setup () function
in the loop () function remember to call the t.update() function to update the timer.
