int main(){

    char operador;
    printf("escolha o operador ['+', '-', '*', '/']: ");
    scanf("%c", &operador );

    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    double resultado;

    switch (operador)
    {
    case '+':
    resultado = num1 + num2;
    break;

    case '-':
    resultado = num1 - num2;
    break;

    case '*':
    resultado = num1 * num2;
    break;

    case '/':
    resultado = num1 / num2;
    break;

    


    return 0;
}