/* o comando while é uma estrutura de repetição:
while (<condição>){
    <bloco_de_comando>
} */

int main(){

    int i = 1;

    while (i <=10 )
    {
        printf("%i", i);
        i++;
    }
/* i++ pega o valor de i, soma mais uma unidade e joga novamnete para o bloco de comando*/ 
    return 0;
}

