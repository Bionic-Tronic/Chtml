#include "include/chtml.h"

int main (){
	struct chtml html;
	html.port = 8090;
	html.url = "127.0.0.1";
	html.errors_on = true;
	prepare_server(&html);
	Chtml(&html);
	html.h1(EMPTY,"Esta es mi pagina");
	html.show_html_console();
	while(true){
		html.send(&html);
	}
	return 0;
}

