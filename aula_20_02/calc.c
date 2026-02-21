#include <stdio.h>
int main(){
    int n1, n2, rt;
    char op;
    printf("Digite seu primeiro numero\n: ");
    scanf("%d", &n1);
    printf("Digite seu operador\n: ");
    scanf(" %c", &op);
    printf("Digite seu segundo numero\n: ");
    scanf("%d", &n2);
     switch (op)
     {
     case '+':
        rt = n1 + n2;
            break;
        case '-':       
            rt = n1 - n2;
            break;
        case '/':
            rt = n1/n2;
            break;
        case '*':
            rt = n1*n2;
            break;

        
        default:
            break;
        }
        printf("O seu resultado e: %d\n", rt);

        return 0;
    }