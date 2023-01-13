#include "crow_all.h"
#include <string>

using namespace std;
using namespace crow;

class CustomLogger : public crow::ILogHandler {
    public:
        CustomLogger(){}
        void log(std::string message, crow::LogLevel /*level*/){
            std::cerr << message << std::endl;
        }
};
int main(int argc, char ** argv){
    CustomLogger logger;
    crow::logger::setHandler(&logger);
    
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](const request &req, response &res){
        ifstream in("../templates/flying.html", ifstream::in);
        if(in){
            ostringstream contents;
            contents << in.rdbuf();
            in.close();
            res.write(contents.str());
        }else {
            res.write("Not found");
        }
        res.end();
    });

    char* port =  getenv("PORT");
    uint16_t iPort = static_cast<uint16_t>(port != NULL? stoi(port): 18080);
    cout << "PORT = "<<iPort << "\n";
    app.port(iPort).multithreaded().run();
}