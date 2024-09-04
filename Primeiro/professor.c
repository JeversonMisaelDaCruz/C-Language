#include <stdio.h>
int main()
{
  int nivel1 = 12;
  int nivel2 = 17;
  int nivel3 = 25;
  int nivel;
  int aulas;
  float sal;
  printf("Digite o nivel do professor\n");
  scanf("%d", &nivel);
  printf("Digite a quantidade de aula\n");
  scanf("%d", &aulas);

  if (nivel == 1)
  {
    sal = nivel1 * aulas;
    printf("Seu salário e: %f", sal);
  }
  else if (nivel == 2)
  {
    sal = nivel2 * aulas;
    printf("Seu salário e: %f", sal);
  }else if (nivel == 3) // Corrigido: condição na mesma linha
  {
    sal = nivel3 * aulas;
    printf("Seu salário é: %f\n", sal);
  }
  else
  {
    printf("Nível inválido.\n"); // Tratar caso o nível seja inválido
  }

  return 0;
}
   

