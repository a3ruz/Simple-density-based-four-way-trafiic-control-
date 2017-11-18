
#define S1 A5
#define S2 A4
#define S3 A3
#define S4 A2


#define R1 4 
#define Y1 3
#define G1 2

#define R2 7
#define Y2 6
#define G2 5

#define R3 10
#define Y3 9
#define G3 8

#define R4 13 
#define Y4 12
#define G4 11

int i;
int AR1 ,AR2,AR3 ,AR4 ;
int ar1,ar2,ar3,ar4;
int L=1;
int K=0;
void way1(void);
void way2(void);
void way3(void);
void way4(void);
void Yon(void);
void Yoff(void);
void DY(void);
void DR(void);

void yellowc( int y);

void setup()

{
  Serial.begin(9600);
  for (i=2;i<14;i++)
  pinMode(i,OUTPUT);
   
  for (i=2;i<14;i++)
   {delay(50);
  digitalWrite(i,HIGH);
    delay(50);
    digitalWrite(i,LOW);
   } 
  pinMode(S1,INPUT);
  pinMode(S2,INPUT);
  pinMode(S3,INPUT);
  pinMode(S4,INPUT);
  way4();
 }
 
void loop() {  
  Serial.print("L= ");
  Serial.println(L);
  Serial.println(ar1);
  Serial.println(ar2);
  Serial.println(ar3);
  Serial.println(ar4);
  
  
ar1=analogRead(S1);
ar2=analogRead(S2);
ar3=analogRead(S3);
ar4=analogRead(S4);
//delay(500);
//}

if(ar1>1000)
AR1=1;
else
AR1=0;

if(ar2>1000)
AR2=1;
else
AR2=0;

if(ar3>1000)
AR3=1;
else
AR3=0;

if(ar4>1000)
AR4=1;
else
AR4=0;

K=AR1+AR2+AR3+AR4;

  if(K==0)
  {
    delay(500);
    Yon();
    delay(500);
    Yoff();
  }
  
    
 if(AR1==1)
 {
   if(L!=1)
  yellowc(L);
  way1();
 DR();
 }
 
 if(AR2==1)
 
 {
   if(L!=2)
  yellowc(L);
  way2();
 DR();
}

 if(AR3==1)
 {
   if(L!=3)
  yellowc(L);
 
   way3();
 DR();
}
  
  if(AR4==1)
 {
    if(L!=4)
    yellowc(L);
  way4();
 DR();
 }
 

}
void DY()
{
  delay(500);
}
void DR()
{
  delay(2000);
  }


void way1()
{
  if(L!=1)
  {
  digitalWrite(G1,LOW);
  digitalWrite(R1,LOW);
  digitalWrite(Y1,HIGH);
  DY();
  }
  L=1;
  
  digitalWrite(G1,HIGH);
  digitalWrite(R1,LOW);
  digitalWrite(Y1,LOW);
  
  digitalWrite(G2,LOW);
  digitalWrite(R2,HIGH);
  digitalWrite(Y2,LOW);
  
  digitalWrite(G3,LOW);
  digitalWrite(R3,HIGH);
  digitalWrite(Y3,LOW);
  
  digitalWrite(G4,LOW);
  digitalWrite(R4,HIGH);
  digitalWrite(Y4,LOW);
}


void way2()
{
  if(L!=2)
  {
  digitalWrite(G2,LOW);
  digitalWrite(R2,LOW);
  digitalWrite(Y2,HIGH);
  DY();
  }
  L=2;
  digitalWrite(G2,HIGH);
  digitalWrite(R2,LOW);
  digitalWrite(Y2,LOW);
  
  digitalWrite(G1,LOW);
  digitalWrite(R1,HIGH);
  digitalWrite(Y1,LOW);
  
  digitalWrite(G3,LOW);
  digitalWrite(R3,HIGH);
  digitalWrite(Y3,LOW);
  
  digitalWrite(G4,LOW);
  digitalWrite(R4,HIGH);
  digitalWrite(Y4,LOW);
}
void way3()
{
   if(L!=3)
   {
   digitalWrite(G3,LOW);
  digitalWrite(R3,LOW);
  
   digitalWrite(Y3,HIGH);
   DY();
   }
   L=3;
  
  digitalWrite(G3,HIGH);
  digitalWrite(R3,LOW);
  digitalWrite(Y3,LOW);

  digitalWrite(G1,LOW);
  digitalWrite(R1,HIGH);
  digitalWrite(Y1,LOW);
  
  digitalWrite(G2,LOW);
  digitalWrite(R2,HIGH);
  digitalWrite(Y2,LOW);
  
  digitalWrite(G4,LOW);
  digitalWrite(R4,HIGH);
  digitalWrite(Y4,LOW);
}

void way4()
{
  if(L!=4){
  digitalWrite(G4,LOW);
  digitalWrite(R4,LOW);
  digitalWrite(Y4,HIGH);
   DY();
  }
  L=4;
  
  digitalWrite(G4,HIGH);
  digitalWrite(R4,LOW);
  digitalWrite(Y4,LOW);
  
  digitalWrite(G1,LOW);
  digitalWrite(R1,HIGH);
  digitalWrite(Y1,LOW);
  
  digitalWrite(G2,LOW);
  digitalWrite(R2,HIGH);
  digitalWrite(Y2,LOW);
  
  digitalWrite(G3,LOW);
  digitalWrite(R3,HIGH);
  digitalWrite(Y3,LOW);
}



void yellowc( int y)
{
  switch (y)
{
    case 1:
    digitalWrite(G1,LOW);
    digitalWrite(Y1,HIGH);
    break;
    
 
    case 2:
    digitalWrite(G2,LOW);
    digitalWrite(Y2,HIGH);
    break;
    
  
    case 3:
    digitalWrite(G3,LOW);
    digitalWrite(Y3,HIGH);
    break;
    
    case 4:
    digitalWrite(G4,LOW);
    digitalWrite(Y4,HIGH);
    break;    
    
    default:
   
    break;
    }

}
void Yon()
{
  
  digitalWrite(G1,LOW);
  digitalWrite(R1,LOW);
  digitalWrite(Y1,HIGH);
  
  digitalWrite(G2,LOW);
  digitalWrite(R2,LOW);
  digitalWrite(Y2,HIGH);
  
  digitalWrite(G3,LOW);
  digitalWrite(R3,LOW);
  digitalWrite(Y3,HIGH);
  
  digitalWrite(G4,LOW);
  digitalWrite(R4,LOW);
  digitalWrite(Y4,HIGH);
}


  void Yoff()
{
  
  digitalWrite(G1,LOW);
  digitalWrite(R1,LOW);
  digitalWrite(Y1,LOW);
  
  digitalWrite(G2,LOW);
  digitalWrite(R2,LOW);
  digitalWrite(Y2,LOW);
  
  digitalWrite(G3,LOW);
  digitalWrite(R3,LOW);
  digitalWrite(Y3,LOW);
  
  digitalWrite(G4,LOW);
  digitalWrite(R4,LOW);
  digitalWrite(Y4,LOW);
}





