/*************************************************

	Controle dos motores

*************************************************/

//Nivel baixo
void ligarMotores(char sinal){
	if( sinal != 0 ){	
		motor1 = 1;
		motor2 = 1;
	}else{
		motor1 = 0;
		motor2 = 0;
	}
}

void parar(){
  motor1_1 = 0;
  motor1_2 = 0;
  motor2_1 = 0;
  motor2_2 = 0;
}

void motorEsquerdo(int port){
    switch(port){
    	  //para frente
        case 1:
            motor1_1 = 0;
            motor1_2 = 1;
            break;
        default:
            motor1_1 = 1;
            motor1_2 = 0;
            break;
    }
}

void motorDireito(int port){
    switch(port){
    	  //para frente
        case 1:
            motor2_1 = 1;
            motor2_2 = 0;
            break;
        default:
            motor2_1 = 0;
            motor2_2 = 1;
            break;
    }
}
