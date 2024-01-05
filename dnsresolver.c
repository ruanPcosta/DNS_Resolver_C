#include <stdio.h>
#include <netdb.h>
#include  <arpa/inet.h>
int main(int argc, char *argv[]){

if(argc <= 1){


printf("DNS RESOLVER -> R \n")

printf("Como se usa: \n ./dnsresolver.c sitealvo.com.br");



}else{

struct  hostent  *alvo = gethostbyname(argv[1]);
if(alvo == NULL){

printf("Voce não digitou nenhum site alvo");

}else{


printf("IP ALVO: %s \n", inet_ntoa(*(struct in_addr *)alvo -> h_addr));

return 0;

}}


}
