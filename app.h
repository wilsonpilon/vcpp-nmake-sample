#ifndef APP_H
#define APP_H

#include <vector>
using namespace std;

class App {
private:
	string nome;
	string versao;
	int argc;
	vector<string> argv;
public:
	App(int cargc, char *cargv[]);
	void setNome(std::string cnome);
	void setVersao(string cversao);
	string getNome();
	string getVersao();
	void setArgc(int argc);
	bool run();
    void usage();
};

#endif