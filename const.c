//questao 1

//   #include <stdio.h>
//    int main() {
//        const char PLANETA[] = "Terra"; // Corrigido: string para armazenar o nome
//        const float GRAVIDADE = 9.8;
//        const int DISTANCIA_AO_SOL = 149; // milhões de km

//        printf("Planeta: %s\n", PLANETA); // Usar %s para strings
//        printf("Gravidade: %.1f m/s²\n", GRAVIDADE);
//        printf("Distância ao Sol: %d milhões de km\n", DISTANCIA_AO_SOL);

//        return 0;
//    }

//questão 2

// #include <stdio.h>
// int main(){
//     const int A= 10, B = 5;
//     int soma = A + B;
//     int subtracao = A - B;
//     int divisao = A/B;

//     printf("A soma de %d e %d: %d\n", A, B, soma);
//     printf("A subtração de %d e %d: %d\n", A, B, subtracao);
//     printf("A divisão de %d e %d: %d\n", A ,B, divisao);

// }

//QUESTAO 3 FAZENDO PARA DAR UM ERRO

// #include <stdio.h>
// int main(){
//     const int A= 10, B = 5;
//     int A= 20 , B = 2;
//     int soma = A + B;


//     printf("A soma de %d e %d: %d\n", A, B, soma);

// }

//QUESTAO 4

 #include <stdio.h>
   int main() {
       const float PI = 3.14159;
       const int RAIO = 10;
       float perimetro = 2 * PI * RAIO; // Fórmula correta
       float area = PI * RAIO * RAIO; // Fórmula correta

       printf("Raio: %d\n", RAIO);
       printf("Perímetro: %.2f\n", perimetro); // Usar %.2f para floats
       printf("Área: %.2f\n", area);

       return 0;
   }



