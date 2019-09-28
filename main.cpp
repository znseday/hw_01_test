#include "my_lib.h"

//#include <spdlog/spdlog.h>
#include <iostream>

using namespace std;

int main()
{
    //auto logger = spdlog::stdout_logger_mt("console");
    //logger->info("version {} was started", version());

    cout << "build " << MyVersion() << endl;
    cout << "Hello, World!" << endl;
    
    return 0;
}
