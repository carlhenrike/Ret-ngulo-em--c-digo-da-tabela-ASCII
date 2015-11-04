#include <stdio.h>
/**************************************  * Trabalho 2 de Programacao de Computadores I - Retangulo 
 * * Curso de Sistemas da informacao 
* Aluno: Carlos Henrique - matricula: 0050013583
* Professor: Alex Salgado ***************************************/


int main() 



{
	
	int x=0, y=0;
    int i, j;
    char simbolo;
	int continuar;
    
    
    do
{
	
	
        
        printf("Informe a altura\n");
        scanf("%d", &i);
        printf("Informe a largura\n");
        scanf("%d", &j);
        printf("Escolha um caracter de sua preferência?\n");
        scanf(" %c", &simbolo);
        
        printf("Ola, meu nome e Carlos Henrique e o seu retangulo ficou assim:\n");
        
        for( x; x < i; x++ ){
            for( y; y < j; y++ ){
                if( x == 0 || x == i - 1 || y == 0 || y == j - 1){
                    printf(" %c ", simbolo);
                }else{
                    printf("   ");
                }   
            }
            
            y = 0;
            printf( "\n" );
        }
        
      printf("\n Deseja continuar(s/n)?");
        scanf(" %c"); 
    }
	while(continuar == 's');
        
    
	

	
	
	
	return 0;
}
