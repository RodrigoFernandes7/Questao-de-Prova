// Aluno: Rodrigo Fernandes de Carvalho


#include <stdio.h>     // declaração das bibliotecas.
#include <stdlib.h>
#include <math.h>

 int main()  {
     
 int num, kwh, tipo;                                       // declaração das variaveis de tipos int e float. Já atribuindo valores a algumas delas.
 int qtdResidencial=0, qtdComercial=0, qtdIndustrial=0;
 float residencial=0, comercial=0, industrial=0, total;
 float mediaResidencial=0, mediaComercial=0, mediaIndustrial=0;
 
 do {                                             // Abertura do laço do while 
 printf("Digite o numero do consumidor: ");
 scanf("%d", &num);                                
 if (num == 0)                           // utilizando um if para que se o valor insirido for 0, ele ja encerre o código
 break;                      // fim do codigo caso o numero insirido for 0
 
 
 printf("Digite a quantidade de kWh que foi consumido no mes: ");        //imprimindo na tela a opção para o usuário digitar a quantidade do kwh
 scanf("%d", &kwh);
 printf("TIPO \n");                                                      // E o tipo de codigo, no caso, residencial, comercial e industrial.
 printf("Digite 1 para - Residencial \n");
 printf("Digite 2 para - Comercial \n");
 printf("Digite 3 para - Industrial \n");
 scanf("%d", &tipo);             // lendo esses dados.
 
 
 switch(tipo) {  // abertura de um switch com um total de 3 casos 
 
 case 1:     // caso o usuário tenha digitado "1", o codigo sera residencial, e seu total é igual ao valor do kwh multiplicado por 0.1
 {
 total = kwh * 0.1;
 residencial += kwh;
break;  // fim do caso 1.
}
 case 2:  //caso o usuário tenha digitado "2", o codigo sera comercial, e seu total é igual ao valor do kwh multiplicado por 0.4
 {
 total = kwh * 0.4;
 comercial += kwh;
 break;   // fim do caso 2.
 }
 case 3:   // e por último, se o usuário digitou "3", sera industrial e seu valor total sera igual ao valor do kwh multiplicado por 0.8
 {
 total = kwh * 0.8;
 industrial += kwh;
 break;   // fim do caso 3. Último caso.
}
}


if (tipo == 1)       // abrindo uma cadeia de "if else" para saber a quantidade dos tipos. 
qtdResidencial++;    // no caso, a quantidade de residencial, sempre que for digitado o numero "1", ele vai acrescentar mais 1 na variavel
else if (tipo == 2)
qtdComercial++;        // nesse caso é para o comercial, sempre que for digitado "2", ele vai acrescentar mais 1 a variavel.
else (tipo == 3);
qtdIndustrial++;      //  e por ultimo o industrial, sempre que for digitado "3", ele vai acrescentar mais 1 a variavel.

 printf("Custo total do consumidor: %f\n", total);  // finalização do "Do". Sempre repetindo esse laço enquanto o numero do consumidor(num) for diferente de 0.
 } while(num != 0);

 if (qtdComercial != 0)
 mediaComercial = comercial / qtdComercial;          // utilizando o if para calcular a media do tipo comercial, quando ela for no caso diferente de 0.
 if (qtdResidencial != 0)
 mediaResidencial = residencial / qtdResidencial;  // novamente calculando a media, porém do residencial.
 if (qtdIndustrial !=0)
 mediaIndustrial = industrial / qtdIndustrial;      // e por ultimo, calculando a média do industrial. 

 printf(" O total de consumo residencial foi: %f \n", residencial);  // imrpimindo na tela o valor do consumo do residencial
 printf("O total de consumo comercial foi: %f \n", comercial);        // imrpimindo o valor do consumo do comercial
 printf("O total de consumo industrial foi: %f \n", industrial);           // imprimindo o valoe do industrial
 printf("A media de consumo residencial foi: %f \n", mediaResidencial);   // já aqui sera a impresso a media do consumo do residenciaL. tipo 1
 printf("A media de consumo comercial foi: %f \n", mediaComercial);       // a média do comercial, no caso tipo 2
 printf("A media de consumo industrial foi: %f \n", mediaIndustrial);    // e por ultimo a media do industrial. tipo 3
 
 return(0);
 
 }
