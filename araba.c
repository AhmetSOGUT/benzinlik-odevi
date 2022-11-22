#include <stdio.h>


int main(){

int tutar,reno=0,mazda=0,honda=0,ford=0,tip;
 float rt=0,mt=0,ht=0,ft=0;

do
{
   printf("Marka degeri giriniz(reno 1, mazda 2, honda 3, ford 4\n");
   scanf("%d",&tip);
    
  
    printf("\n");
switch (tip)
{
case 1:
   printf("Ucreti giriniz\n");
   
    scanf("%d",&tutar);
   reno=reno+1;
   rt=rt+tutar;
    break;

case 2:
   printf("Ucreti giriniz\n");
   
    scanf("%d",&tutar);
   mazda=mazda+1;
   mt=mt+tutar;  
    break;

case 3:
   printf("Ucreti giriniz\n");   
    scanf("%d",&tutar);
   honda=honda+1;
   ht=ht+tutar;    
    break;

case 4:
   printf("Ucreti giriniz\n");   
    scanf("%d",&tutar);
   ford=ford+1;
   ft=ft+tutar;    
    break;

case 111:
break;

default: printf("Dogru tip giriniz\n");
    break;

}

}while(tip != 111);

if(reno>mazda ){
    if(reno>honda){
        if(reno>ford){
    
    printf("En cok gelen arac Renodur sayisi = %d kez\n",reno);
}
}
}
else if(mazda>honda){
    if(mazda>ford){

printf("En cok gelen arac Mazdadir sayisi = %d kez\n",mazda);
}
}

else if(honda>ford){
printf("En cok gelen arac Hondadir sayisi = %d kez\n",honda);
}
else if(ford>honda){
    printf("En cok gelen arac Forddur sayisi = %d kez\n",ford);
    
}

if(rt>mt ){
    if(rt>ht){
        if(rt>ft){
    
    printf("En cok satis yapilan arac Renodur sayisi = %.2f$ \n",rt);
}
}
}
else if(mt>ht){
    if(mt>ft){

printf("En cok satis yapilan arac Mazdadir sayisi = %.2f$ \n",mt);
}
}

else if(ht>ft){
printf("En cok satis yapilan arac Hondadir sayisi = %.2f$  \n",ht);
}
else if(ft>ht){
    printf("En cok satis yapilan arac Forddur sayisi = %.2f$  \n",ft);
    
}

}