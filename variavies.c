//exercicio 1 e 2

// #include <stdio.h>
// int main() {
// int idade = 25;
// float peso = 60.5;
// char letraInicial = 'c';

// printf("idade: %d anos\n", idade);
// printf("peso: %.1f kg\n", peso);
// printf("letra inicial do nome é %c \n", letraInicial);

// //alterando valores
// idade = 30;
// peso = 80.5;
// letraInicial = 'J';

// //novos valores
// printf("novos valores-\n");
// printf("idade: %d anos\n", idade);
// printf("peso: %.1f kg\n", peso);
// printf("letra inicial do nome é %c \n", letraInicial);

// }

//exercicio 3

// #include <stdio.h>
// int main(){
//     int numA = 20;
//     int numB = 87541;  
//     numA = 10;
//     numB = 10;
//   int soma = numA + numB;
//     printf("A soma de %d e %d é: %d\n", numA,numB,soma);
//     return 0;
// }

//exercicio 4

#include <stdio.h>
int main() {
    int num1, num2, soma;

    // Solicitar os números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Calcular a soma
    soma = num1 + num2;

    // Exibir o resultado
    printf("A soma de %d e %d é: %d\n", num1, num2, soma);

    return 0;
}

//exercicio 5

// #include <stdio.h>
// int main(){
//     int a, b, c;
//     a=b=c=100;
//     a=b=c=200;
//     printf("a soma de a, b e c é: %d \n", a + b + c);
//     return 0;
// }