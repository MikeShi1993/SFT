#include <iostream>
using std::cout;
using std::endl;

#include "color.h"
#include "timer.h"

#ifdef _WIN32
#include <windows.h>

void sleep(unsigned milliseconds)
{
    Sleep(milliseconds);
}
#else
#include <unistd.h>

void sleep(unsigned milliseconds)
{
    usleep(milliseconds * 1000); // takes microseconds
}
#endif

int main()
{
    timer Timer(std::cout, "Sleeping");
    sleep(8000);
    Timer.span();
    return 0;
}
