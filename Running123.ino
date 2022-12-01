int L1 =12;
int M1 =11;
int R1 =5;
int L2 =13;
int M2 =10;
int R2 =4;
int L3 =14;
int M3 =6;
int R3 =3;
int L4 =15;
int M4 =7;
int R4 =2;
int L5 =16;
int M5 =8;
int R5 =1;

int tim=150;
/*int a [] = {L5,L4,L3,L2,M1,M3,R2,R3,R4,R5};
int b [] = {L1,L2,L3,L4,L5,M1,R2,M3,R4,M5};
int c [] = {L2,L3,L4,M1,R1,M5,R5};
int d [] = {L1,L2,L3,L4,L5,M1,R2,R3,R4,M5};
int e [] = {L1,L2,L3,L4,L5,M1,R1,M3,R3,M5,R5};
int f [] = {L1,L2,L3,L4,L5,M1,R1,M3,R3};
int g [] = {M1,R1,L2,L3,L4,R4,M5,M3,R3};
int h [] = {L1,L2,L3,L4,L5,R1,R2,R3,R4,R5,M3};
int i [] = {M1,M2,M3,M4,M5,R1,R5,L1,L5};
int j [] = {M1,M2,M3,M4,M5,L1,L4,L5,R1};
int k [] = {L1,L2,L3,L4,L5,M2,R1,M4,R5};
int l [] = {L1,L2,L3,L4,L5,M5,R5};
int m [] = {L1,L2,L3,L4,L5,M1,M2,R1,R2,R3,R4,R5};
int n [] = {L1,L2,L3,L4,M2,R1,R2,R3};
int o [] = {L2,L3,L4,R2,R3,R4,M1,M5};
int p [] = {L1,L2,L3,L4,L5,M1,R2,M3};
int q [] = {L2,L3,M1,M4,R2,R3,R5};
int r [] = {L1,L2,L3,L4,L5,M1,M3,M4,R2,R5};
int s [] = {R1,M1,L2,M3,R4,M5,L5};
int t [] = {L1,M1,R1,M2,M3,M4,M5};
int u [] = {L1,L2,L3,L4,M5,R1,R2,R3,R4};
int v [] = {L1,L2,L3,M5,R3,R2,R1};
int w [] = {L1,L2,L3,L4,L5,M4,R1,R2,R3,R4,R5};
int x [] = {L1,L2,M3,R4,R5,R1,R2,M3,L4,L5};
int y [] = {L1,L2,M3,R1,R2,M4,M5};
int z [] = {L1,M1,R1,R2,R3,L4,L5,M5,R5}; */
int clr [] = {L1,L2,L3,L4,L5,M1,M2,M3,M4,M5,R1,R2,R3,R4,R5};

int wt = 5000;
int clt = 2000;

void setup() {
  // put your setup code here, to run once:
for(int x=0; x<sizeof(clr); x++)
{
  pinMode(clr[x],OUTPUT);
}
}
void loop() {
  // put your main code here, to run repeatedly:
pall();
pclr();
pall();
pclr();
p0();
pclr();
p1();
pclr();
p2();
pclr();
p3();
pclr();
p4();
pclr();
p5();
pclr();
p6();
pclr();
p7();
pclr();
p8();
pclr();
p9();
pclr();
pall();
pclr();
}
void p1(){
  digitalWrite(M5,LOW);
  delay(tim);
  digitalWrite(M4,LOW);
  delay(tim);
  digitalWrite(M3,LOW);
  delay(tim);
  digitalWrite(M2,LOW);
  delay(tim);
  digitalWrite(M1,LOW);
  delay(wt);
}

void p2(){
  digitalWrite(L1,LOW);
  delay(tim);
  digitalWrite(M1,LOW);
  delay(tim);
  digitalWrite(R1,LOW);
  delay(tim);
  digitalWrite(R2,LOW);
  delay(tim);
  digitalWrite(R3,LOW);
  delay(tim);
  digitalWrite(M3,LOW);
  delay(tim);
  digitalWrite(L3,LOW);
  delay(tim);
  digitalWrite(L4,LOW);
  delay(tim);
  digitalWrite(L5,LOW);
  delay(tim);
  digitalWrite(M5,LOW);
  delay(tim);
  digitalWrite(R5,LOW);
  delay(wt);
}

void p3(){
  digitalWrite(L1,LOW);
  delay(tim);
  digitalWrite(M1,LOW);
  delay(tim);
  digitalWrite(R1,LOW);
  delay(tim);
  digitalWrite(R2,LOW);
  delay(tim);
  digitalWrite(R3,LOW);
  delay(tim);
  digitalWrite(M3,LOW);
  delay(tim);
  digitalWrite(L3,LOW);
  delay(tim);
  digitalWrite(L5,LOW);
  delay(tim);
  digitalWrite(M5,LOW);
  delay(tim);
  digitalWrite(R4,LOW);
  delay(tim);
  digitalWrite(R5,LOW);
  delay(wt);
}

void p4(){
  digitalWrite(L1,LOW);
  delay(tim);
  digitalWrite(L2,LOW);
  delay(tim);
  digitalWrite(L3,LOW);
  delay(tim);
  digitalWrite(M3,LOW);
  delay(tim);
  digitalWrite(R1,LOW);
  delay(tim);
  digitalWrite(R2,LOW);
  delay(tim);
  digitalWrite(R3,LOW);
  delay(tim);
  digitalWrite(R4,LOW);
  delay(tim);
  digitalWrite(R5,LOW);
  delay(wt);
}

void p5(){
  digitalWrite(L1,LOW);
  delay(tim);
  digitalWrite(L2,LOW);
  delay(tim);
  digitalWrite(L3,LOW);
  delay(tim);
  digitalWrite(L5,LOW);
  delay(tim);
  digitalWrite(M1,LOW);
  delay(tim);
  digitalWrite(M3,LOW);
  delay(tim);
  digitalWrite(M5,LOW);
  delay(tim);
  digitalWrite(R1,LOW);
  delay(tim);
  digitalWrite(R3,LOW);
  delay(tim);
  digitalWrite(R4,LOW);
  delay(tim);
  digitalWrite(R5,LOW);
  delay(wt);
}

void p6(){
  digitalWrite(L1,LOW);
  delay(tim);
  digitalWrite(L2,LOW);
  delay(tim);
  digitalWrite(L3,LOW);
  delay(tim);
  digitalWrite(L4,LOW);
  delay(tim);
  digitalWrite(L5,LOW);
  delay(tim);
  digitalWrite(M1,LOW);
  delay(tim);
  digitalWrite(M3,LOW);
  delay(tim);
  digitalWrite(M5,LOW);
  delay(tim);
  digitalWrite(R1,LOW);
  delay(tim);
  digitalWrite(R3,LOW);
  delay(tim);
  digitalWrite(R4,LOW);
  delay(tim);
  digitalWrite(R5,LOW);
  delay(wt);
}

void p7(){
  digitalWrite(L1,LOW);
  delay(tim);
  digitalWrite(M1,LOW);
  delay(tim);
  digitalWrite(R1,LOW);
  delay(tim);
  digitalWrite(R2,LOW);
  delay(tim);
  digitalWrite(R3,LOW);
  delay(tim);
  digitalWrite(R4,LOW);
  delay(tim);
  digitalWrite(R5,LOW);
  delay(wt);
}
void p8(){
  digitalWrite(L1,LOW);
  delay(tim);
  digitalWrite(L2,LOW);
  delay(tim);
  digitalWrite(L3,LOW);
  delay(tim);
  digitalWrite(L4,LOW);
  delay(tim);
  digitalWrite(L5,LOW);
  delay(tim);
  digitalWrite(M1,LOW);
  delay(tim);
  digitalWrite(M3,LOW);
  delay(tim);
  digitalWrite(M5,LOW);
  delay(tim);
  digitalWrite(R1,LOW);
  delay(tim);
  digitalWrite(R2,LOW);
  delay(tim);
  digitalWrite(R3,LOW);
  delay(tim);
  digitalWrite(R4,LOW);
  delay(tim);
  digitalWrite(R5,LOW);
  delay(wt);
}
void p9(){
  digitalWrite(L1,LOW);
  delay(tim);
  digitalWrite(L2,LOW);
  delay(tim);
  digitalWrite(L3,LOW);
  delay(tim);
  digitalWrite(L5,LOW);
  delay(tim);
  digitalWrite(M1,LOW);
  delay(tim);
  digitalWrite(M3,LOW);
  delay(tim);
  digitalWrite(M5,LOW);
  delay(tim);
  digitalWrite(R1,LOW);
  delay(tim);
  digitalWrite(R2,LOW);
  delay(tim);
  digitalWrite(R3,LOW);
  delay(tim);
  digitalWrite(R4,LOW);
  delay(tim);
  digitalWrite(R5,LOW);
  delay(wt);
}
void p0(){
  digitalWrite(L1,LOW);
  delay(tim);
  digitalWrite(L2,LOW);
  delay(tim);
  digitalWrite(L3,LOW);
  delay(tim);
  digitalWrite(L4,LOW);
  delay(tim);
  digitalWrite(L5,LOW);
  delay(tim);
  digitalWrite(M1,LOW);
  delay(tim);
  digitalWrite(M5,LOW);
  delay(tim);
  digitalWrite(R1,LOW);
  delay(tim);
  digitalWrite(R2,LOW);
  delay(tim);
  digitalWrite(R3,LOW);
  delay(tim);
  digitalWrite(R4,LOW);
  delay(tim);
  digitalWrite(R5,LOW);
  delay(wt);
}
void pclr(){
  digitalWrite(L1,HIGH);
  digitalWrite(L2,HIGH);
  digitalWrite(L3,HIGH);
  digitalWrite(L4,HIGH);
  digitalWrite(L5,HIGH);
  digitalWrite(M1,HIGH);
  digitalWrite(M2,HIGH);
  digitalWrite(M3,HIGH);
  digitalWrite(M4,HIGH);
  digitalWrite(M5,HIGH);
  digitalWrite(R1,HIGH);
  digitalWrite(R2,HIGH);
  digitalWrite(R3,HIGH);
  digitalWrite(R4,HIGH);
  digitalWrite(R5,HIGH);
  delay(clt);
}
void pall(){
  digitalWrite(L1,LOW);
  digitalWrite(L2,LOW);
  digitalWrite(L3,LOW);
  digitalWrite(L4,LOW);
  digitalWrite(L5,LOW);
  digitalWrite(M1,LOW);
  digitalWrite(M2,LOW);
  digitalWrite(M3,LOW);
  digitalWrite(M4,LOW);
  digitalWrite(M5,LOW);
  digitalWrite(R1,LOW);
  digitalWrite(R2,LOW);
  digitalWrite(R3,LOW);
  digitalWrite(R4,LOW);
  digitalWrite(R5,LOW);
  delay(wt);
}
