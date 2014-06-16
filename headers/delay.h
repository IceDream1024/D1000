void delay(int j){  
  int i; 
  if( j == 0)
      j = 5;
                           
	TMOD = 0x01;            
	TH0 = 0xDC;             
	TL0 = 0x00;             
	TR0 = 1;                
                           
  for(i=0;i<1;i++){                        
      j = 0;               
      while(j<=5){							
          while(!TF0);     
          TH0=0xDC;        
          TL0=0x00;        
          TF0=0;           
          j++;             
      }                    
   }	
   							
}	
