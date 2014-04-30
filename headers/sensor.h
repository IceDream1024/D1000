
/*********************************************


              SENSORES

*********************************************/
void sensorEsquerdo(void){
 	trigger = 1;
 	delay(0);
 	trigger = 0;
 	sen_esq = 0;
 	while( eco_esq == 0){ LED_VM = 0;}
 	LED_VM = 1;
 	while( eco_esq == 1){sen_esq++; }
}


void sensorDireito(void){
 	trigger = 1;
 	delay(0);
 	trigger = 0;
 	sen_dir = 0;
 	while( eco_dir == 0 ){LED_AM = 0;}
 	LED_AM = 1;
 	while( eco_dir == 1){ sen_dir++; } 	
}


void sensorFrontal(void){
 	trigger = 1;
 	delay(0);
 	trigger = 0;
 	sen_fro = 0;
 	while( eco_fro == 0 ){LED_VD = 0;}
 	LED_VD = 1;
 	while( eco_fro == 1){ sen_fro++; }
}
