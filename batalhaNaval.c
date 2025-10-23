#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
  //Criação do tabuleiro
  int matriz[10][10] = {
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};
  //Navios, horizontal , vertical e diagonal
  int navio_hori[3] = {3, 3, 3};
  int navio_vert[3] = {3, 3, 3};
  int navio_diag[3] = {3, 3, 3};
  int navio_diag2[3] = {3, 3, 3};

  //Posição do navio horizontal
  int linha_hori = 5;
  int coluna_hori = 5;

  //Posição do navio vertical
  int linha_vert = 0;
  int coluna_vert = 0;

  //Posição dos navios diagonal
  int linha_diag = 7;
  int coluna_diag = 7;

  int linha_diag2 = 0;
  int coluna_diag2 = 5;

  // Garantir que o navio horizontal cabe no tabuleiro
  if (coluna_hori + 3 > 10) {
    printf("Erro: navio horizontal ultrapassa os limites do tabuleiro.\n");
    
  }

  // Garantir que o navio vertical cabe no tabuleiro
  if (linha_vert + 3 > 10) {
    printf("Erro: navio vertical ultrapassa os limites do tabuleiro.\n");
    
  }

  // Garantir que o navio diagonal cabe no tabuleiro
  if (linha_diag + 3 > 10 || coluna_diag + 3 > 10){
    printf("Erro: navio diagonal ultrapassa os limites do tabuleiro.\n");
  }


  //Colocando os navios na matriz
  for (int i = 0; i < 3; i++) {
      matriz[linha_hori][coluna_hori + i] = navio_hori[i];
  }
  for (int i = 0; i < 3; i++) {
    //Verificando se o navio sobrepõe o outro
    if (matriz[linha_vert + i][coluna_vert] == 3) {
      printf("Erro: sobreposição de navios detectada!\n");

      
  }
      matriz[linha_vert + i][coluna_vert] = navio_vert[i];
  }

  for (int i = 0; i < 3; i++){
    if(matriz[linha_diag2 + i][coluna_diag2 + i] == 3){
      printf("Erro: sobreposição do navio diagonal 2 detectada.\n");
    }
    matriz[linha_diag2 + i][coluna_diag2 + i] = navio_diag2[i];
  }

  for (int i = 0; i < 3; i++){
    //Verificar se o navio diagonal sobrepõe
    if(matriz[linha_diag + i][coluna_diag + i] == 3){
      printf("Erro: sobreposição do navio diagonal detectada.\n");
    }
    matriz[linha_diag + i][coluna_diag + i] = navio_diag[i];
  }



//Imprimindo a matriz com loop aninhado
  for(int i = 0; i < 10; i++){
  for(int j = 0; j < 10; j++){
    printf("%d ", matriz[i][j]);
  }
  printf("\n");
};

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
