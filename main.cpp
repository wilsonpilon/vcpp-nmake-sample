#include <string>
#include "project.h"
#include "app.h"

using namespace std;

extern const string versao = "1.0.0";

int main(int argc, char *argv[]) {
    while(run(argc,argv));
    return 0;
}