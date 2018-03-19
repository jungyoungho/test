#include <iostream>
#include <atomic>
#include <thread>
#include <signal.h>
#include "getch.h"
#include "threa.h"
#include "func.h"

using namespace std;


int main()
{
    int num{0};
    while(true)
    {
        num = getch();
        switch (num)
        {
            case 82:
            case 114:
            {
                atomic<bool> run{true};
                thread gogo(&test, ref(run));
                normal_fuc(ref(run));
                gogo.join();
            }
            break;
        }
    }
    return 0;
}
