#include "lib.h"

//#include <spdlog/spdlog.h>

using namespace std;

int main()
{
    //auto logger = spdlog::stdout_logger_mt("console");
   // logger->info("version {} was started", version());

    cout << "build " << version() << endl;
    cout << "Hello, World!" << endl;
    
    return 0;
}
