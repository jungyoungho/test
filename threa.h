#ifndef THREA_H
#define THREA_H
using namespace std;

void test(atomic<bool> &run)
{
    while(true)
    {
        if(run==false)
            break;
        cout << "always thread !! " << endl;
    }
}

#endif // THREA_H
