/* Escreva um programa que declare uma matriz tridimensional para
armazenar as temperaturas de um mês. A temperatura é adentrada para
manhã, tarde e noite de cada dia. A primeira dimensão deverá ser usada para
os três períodos do dia, a segunda dimensão deve ser usada para os dias da
semana e a terceira dimensão usada para as quatro semanas do mês. O
programa deve ler as temperaturas e depois mostra a temperatura máxima,
mínima e a média da temperatura do mês. */

#include <iostream>

using namespace std;

int main() {
  float temp[3][7][4], max, min, media, soma = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 7; j++) {
      for (int k = 0; k < 4; k++) {
        cout << "Digite a temperatura do dia " << j + 1 << " da semana " << k + 1 << " no período " << i + 1 << ": ";
        cin >> temp[i][j][k];
      }
    }
  }

  max = temp[0][0][0];
  min = temp[0][0][0];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 7; j++) {
      for (int k = 0; k < 4; k++) {
        if (temp[i][j][k] > max) {
          max = temp[i][j][k];
        }
        if (temp[i][j][k] < min) {
          min = temp[i][j][k];
        }
        soma += temp[i][j][k];
      }
    }
  }

  media = soma / (3 * 7 * 4);

  cout << "Temperatura máxima: " << max << endl;
  cout << "Temperatura mínima: " << min << endl;
  cout << "Temperatura média: " << media << endl;

  return 0;
}
