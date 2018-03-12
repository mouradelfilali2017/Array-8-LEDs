/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
** MOURAD EL FILALI                                                  05/03/2018  **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led0 = 5;          // donar nom al pin 5 de l’Arduino
unsigned long retard = 500;
//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);    
  digitalWrite(led0, HIGH);
  delay(retard);
  digitalWrite(led0, LOW);
  delay(retard);
  digitalWrite(led0, HIGH);  
  delay(retard);
  digitalWrite(led0, LOW);
  delay(retard);
  digitalWrite(led0, HIGH);
  delay(retard);
  digitalWrite(led0, LOW);
  delay(retard);
  
}
//********** Loop *****************************************************************
void loop()
{
  
 
 }
//********** Funcions *************************************************************


