#include <AFMotor.h>
#include <Servo.h>
#define numofValsRec 5
#define digitsPerValRec 1
Servo myservo;
Servo myservo2;
AF_DCMotor LM(1);
AF_DCMotor RM(4);

int valsRec[numofValsRec];
int stringLength = numofValsRec * digitsPerValRec + 1;
int counter;
bool counterStart = false;
String recievedString;

void setup()
{
  Serial.begin(9600);
    LM.setSpeed(150);
  RM.setSpeed(150);
  myservo.attach(10);
  myservo2.attach(9);
    
   myservo2.write(180);
}

void receivedData()
{
  while(Serial.available())
{
  char c = Serial.read();

  if (c=='$')
  {
    counterStart = true;
  }
  if(counterStart)
  {
    if(counter<stringLength)
    {
      recievedString = String(recievedString+c);
      counter++;
    }
    if(counter>= stringLength)
    {
      for(int i = 0; i<numofValsRec; i++)
      {
        int num = (i*digitsPerValRec)+1;
      valsRec[i] = recievedString.substring(num,num + digitsPerValRec).toInt();
     
      }
      
      recievedString = "";
      counter = 0;
      counterStart = false;
    }
  }
}


}

void loop()
{
  receivedData();
  if(valsRec[0] == 1 && valsRec[1] == 1 && valsRec[2] == 1 && valsRec[3] == 1 && valsRec[4] == 1){myservo.write(50);}else{myservo.write(0);}
  if(valsRec[0] == 0 && valsRec[1] == 1 && valsRec[2] == 1 && valsRec[3] == 1 && valsRec[4] == 1){LM.run(BACKWARD);RM.run(BACKWARD);}else{LM.run(RELEASE); RM.run(RELEASE);}
  if(valsRec[0] == 1 && valsRec[1] == 1 && valsRec[2] == 0 && valsRec[3] == 0 && valsRec[4] == 1){myservo2.write(90);}else{myservo2.write(180);}
  //if(valsRec[0] == 0 && valsRec[1] == 0 && valsRec[2] == 0 && valsRec[3] == 1 && valsRec[4] == 1){LM.run(RELEASE);RM.run(FORWARD);}else{LM.run(RELEASE); RM.run(RELEASE);}
  
  //if(valsRec[1] == 1){LM.run(BACKWARD); RM.run(BACKWARD);}else{LM.run(RELEASE); RM.run(RELEASE);}
  //if(valsRec[2] == 1){LM.run(FORWARD); RM.run(RELEASE);}else{LM.run(RELEASE); RM.run(RELEASE);}
  //if(valsRec[3] == 1){LM.run(RELEASE); RM.run(FORWARD);}else{LM.run(RELEASE); RM.run(RELEASE);}
  //if(valsRec[4] == 1){myservo.write(90);}else{myservo.write(180);}
}



  
