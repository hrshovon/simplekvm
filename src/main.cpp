#include "include/crow_all.h"

int main()
{
    crow::mustache::set_global_base("www");
    crow::SimpleApp app;
    CROW_ROUTE(app, "/")([](){
        auto page = crow::mustache::load_text("index.html");
        return page;
    });

    app.port(18080).multithreaded().run();
}
