#include <string>
#include "project.h"
#include "app.h"

using namespace std;

extern const string versao = "1.0.0";

int main(int argc, char *argv[]) {
    App project(argc, argv);
    while(project.run());
    return 0;
}