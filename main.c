#include "headers/d1000_api.h"

void robo();
void curva();


int main(){
        vermelho(1);
        amarelo(1);
        verde(1);
        
        while(1)
                robo();
                
        return 0;
}         

int cnt_re = 0;

void robo(){
   sensorFrontal();
   

   if(sen_fro > 100){
       
       cnt_re = 0;
       
       sensorEsquerdo();
       sensorDireito();
       
       
       
       if(sen_esq < 100){
           girar('D');
           delay(10);
           mover('F');
           delay(10);
       } 
       
       if(sen_dir < 100){
           girar('E');
           delay(10);
           mover('F');
           delay(10);
       }          
       
       mover('F');
       
   }else{           
           
           cnt_re++;
           
           mover('T');
           if(cnt_re < 5)
                   delay(15);
      else{
         delay(30);
         
         if(sen_esq > sen_dir)
            girar('E');
         else
            if(sen_esq == sen_dir)
                mover('F');
            else
               girar('D');
               
         delay(10); 
         
      }
           mover('P');
           
           curva();
      
   }
   
}


void curva(){
    sensorEsquerdo();
    sensorDireito();

    if(sen_esq > 500 && sen_dir > 500){
    
        if(sen_esq > sen_dir)
            girar('E');
        else
            girar('D');

        delay(20);
        
        mover('P');
        delay(5);
        mover('F');
        delay(20);
        
        return;
    
    }


    if(sen_esq > 500){
      
        girar('E');
        delay(10);
              return;
    }
    

    if(sen_dir > 500){
        girar('D');
        delay(10);
        return;
    }
}                   