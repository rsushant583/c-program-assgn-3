#include <stdio.h>

int main() {

  char op;

  float first, second;
  printf("Enter an operator (+, -, *, /,%): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%f %f", &first, &second);

  switch (op) {
    case '+':
      printf("%.1f + %.1f = %.1f", first, second, first + second);
      break;
    case '-':
      printf("%.1f - %.1f = %.1f", first, second, first - second);
      break;
    case '*':
      printf("%.1f * %.1f = %.1f", first, second, first * second);
      break;
    case '/':
      printf("%.1f / %.1f = %.1f", first, second, first / second);
      break;
/*   case '/':
      printf("%(int).1f / %(int).1f = %.1f", first, second, first / second);
      break;*/
    // operator doesn't match any case constant
    default:
      printf("Error! Wrong operation occured");
  }

  return 0;
}
