//Fun��o b�sica para contagem de tempo (atraso) de 1s
// (j<=100) criar delay de 1s.
// (j<=5) cria delay de 10us.
void delay(int j)			//
{  
int i; 
if( j == 0)
    j = 5;
                            //
                  //
                           //
	TMOD = 0x01;            //
	TH0 = 0xDC;             //
	TL0 = 0x00;             //
	TR0 = 1;                //
                           //
  for(i=0;i<1;i++)			//Ajusta o tempo em segundos
  {                        //
      j = 0;               //
      while(j<=5)			//Ajusta o tempo em cent�simos de segundos x i
      {							//
          while(!TF0);     //
          TH0=0xDC;        //
          TL0=0x00;        //
          TF0=0;           //
          j++;             //
      }                    //
   }								//
}	
