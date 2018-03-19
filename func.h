#ifndef FUNC_H
#define FUNC_H

using namespace std;

namespace
{
    bool quit;
    void signal_handler(int sig)
    {
        signal(sig, signal_handler);
        quit = true;
    }
}
void normal_fuc(atomic<bool> &run)
{
    quit=false;
    signal(SIGINT, signal_handler);
    while(true)
    {
        cout << "this is function !! "<<endl;
        if(quit==true)
        {
            cout << "stop!!" << endl;
            run=false;
            break;
        }
    }
}
#endif // FUNC_H
