#include <iostream>
using std::cout;
using std::endl;

#include "color.h"
#include "timer.h"

int main()
{
    cout << Color::Cyan << "test" << endl
         << Color::None;
    return 0;
}
