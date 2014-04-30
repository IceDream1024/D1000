void mover(char direcao){
     
     switch(direcao){
         case 'F':
             motorDireito(1);
             motorEsquerdo(1);
             break;
         case 'T':
             motorDireito(0);
             motorEsquerdo(0);
             break;
         case 'P':
             parar();
             break;
     
     }
     
}
void girar(char sentido){
    
    switch(sentido){
    
        case 'E':
             motorDireito(0);
             motorEsquerdo(1);
             delay(0);
             break;
        case 'D':
             motorDireito(1);
             motorEsquerdo(0);
             delay(0);
             break;
                    
    }
         
}
