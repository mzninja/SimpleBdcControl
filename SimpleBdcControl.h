// defines
#define PWRSTG_ACTIVE 0
#define PWRSTG_INACTIVE 1

// Konstanten
const int MechSwtch3_Pin = 12;
const int MechSwtch1_Pin =  2;
const int MechSwtch4_Pin = 13;
const int MechSwtch2_Pin =  3;

const int   PwrStg1_DirPin      =  11;
const int   PwrStg1_FailPin     =  10;
const int   PwrStg1_PwmPin      =   9;
const int   PwrStg1_DisPin      =   8;
const int   PwrStg1_CurPin      =  A3;
const int   PwrStg1_CurOfs      = 512;
const int   PwrStg1_CurGain     =  20;
const float PwrStg1_CurShnt     =   0.05;
int         PwrStg1_PwmSetPoint = 255;
float       PwrStg1_CurAct      =   0;
float       PwrStg1_CurLast     =   0;

const int   PwrStg2_DirPin      =   4;
const int   PwrStg2_FailPin     =   5;
const int   PwrStg2_PwmPin      =   6;
const int   PwrStg2_DisPin      =   7;
const int   PwrStg2_CurPin      =  A2;
const int   PwrStg2_CurOfs      = 512;
const int   PwrStg2_CurGain     =  20;
const float PwrStg2_CurShnt     =   0.05; 
int         PwrStg2_PwmSetPoint = 255;
float       PwrStg2_CurAct      =   0;
float       PwrStg2_CurLast     =   0;

// Instanziieren der Klasse zur Endstufenansteuerung
ClassPwrStg  PwrStg1(PwrStg1_DirPin, PwrStg1_FailPin, PwrStg1_PwmPin, PwrStg1_DisPin);
ClassPwrStg  PwrStg2(PwrStg2_DirPin, PwrStg2_FailPin, PwrStg2_PwmPin, PwrStg2_DisPin);
