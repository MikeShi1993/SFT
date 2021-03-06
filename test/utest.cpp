#include <iostream>
using std::cout;
using std::endl;

#include "color.h"
#include "timer.h"

#ifdef _WIN32
#include <windows.h>

void u_sleep(unsigned milliseconds)
{
    Sleep(milliseconds);
}
#else
#include <unistd.h>

void u_sleep(unsigned milliseconds)
{
    sleep(milliseconds / 1000); // takes microseconds
}
#endif

int main()
{
    Timer timer(std::cout, "Sleeping");
    u_sleep(2000);
    timer.span();
    return 0;
}
