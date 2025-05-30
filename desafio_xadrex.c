#include<stdio.h>

void torre(int casas){

  if (casas > 0){
   printf("[torre movase para frente[ %d ]\n",casas);
     torre(casas-1);

  }
   
}
   
   

void bispo(int diagonal){

  if (diagonal > 0){
   printf("[bispo movase na diagonal direita para cima [ %d ]\n",diagonal);
     bispo(diagonal-1);

  }
   
  


}
   
   


void rainha (int esquerda){

  if (esquerda > 0){
   printf("[rainha movase [ %d ] casas para esquerda\n",esquerda);
   rainha(esquerda-1);

  }
   
}
  


int main (){

 printf("[***movimento peças de xadres***]\n");

 printf("[*** torre ***]\n");

    //int torre = 1;

    //while (torre <= 5)
    //{
      // printf("[torre: mova para frente %d ]\n",torre); 
       // torre++; 
   // }   

torre(5);





   printf("\n");
  
   printf("[***  bispo *** ]\n");

bispo(5);





//int bispo =1;

//do
//{
    //printf("[bispo movase na diagonal direita %d]\n",bispo);
    //bispo++;
//} while (bispo <= 5);




printf("\n");//***************************************************************************** 

printf("[*** rainha ***]\n");

rainha(8);


//for (int rainha = 1; rainha <= 8; rainha++)
//{
   // printf("[rainha movase [%d] casa para esquerda]\n",rainha);
//}


printf("\n");//*********************************************************************** 

printf("[*** cavalo *** ]\n");


   

  for ( int i = 1; i <= 2; i++)
   {
      printf("[cavalo movase[ %d ]para cima]\n",i);
   } 
   for (int j = 1; j <=1; j++)
   {
      printf("[cavalo movase[ %d ] direita  ]\n",j);
   }
   
   
   


  
   

   










}
   


































