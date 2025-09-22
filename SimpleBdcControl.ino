#include "PwrStgCtl_Ifx9201.h"
#include "SimpleBdcControl.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);   
  pinMode(3, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(MechSwtch1_Pin))
  {
    PwrStg1.setPwrStg(PWRSTG_ACTIVE, 1, 50);  
  }
  else if(digitalRead(MechSwtch3_Pin))
  {
    PwrStg1.setPwrStg(PWRSTG_ACTIVE, 0, 50);  
  }
  else
  {
    PwrStg1.setPwrStg(PWRSTG_INACTIVE, 1, 0);  
  }
  
  if(digitalRead(MechSwtch2_Pin))
  {
    PwrStg2.setPwrStg(PWRSTG_ACTIVE, 1, 50);  
  }
  else if(digitalRead(MechSwtch4_Pin))
  {
    PwrStg2.setPwrStg(PWRSTG_ACTIVE, 0, 50);  
  }
  else
  {
    PwrStg2.setPwrStg(PWRSTG_INACTIVE, 1, 0);  
  }
  delay(100);

}
