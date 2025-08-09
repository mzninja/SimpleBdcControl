// Definition der Klasse
class ClassPwrStg {
  public:
    ClassPwrStg(int DirPin, int FailPin, int PwmPin, int DisPin);
    void setPwrStg(bool active, bool direction, int PwmSetPoint);
  private:
    int   _DirPin;
    int   _FailPin;
    int   _PwmPin;
    int   _DisPin;
    int   _PwmSetPoint;
};

// Konstruktor Definition
ClassPwrStg::ClassPwrStg(int DirPin, int FailPin, int PwmPin, int DisPin) {
  _DirPin  = DirPin;
  _FailPin = FailPin;
  _PwmPin  = PwmPin;
  _DisPin  = DisPin;
  pinMode(DirPin,  OUTPUT);
  pinMode(FailPin, INPUT);
  pinMode(PwmPin,  OUTPUT);
  pinMode(DisPin  , OUTPUT);
  digitalWrite(DisPin, HIGH);
}

// Methoden Definition
void ClassPwrStg::setPwrStg(bool active, bool direction, int PwmSetPoint) {
    digitalWrite(_DisPin, active);
    digitalWrite(_DirPin, direction);
    analogWrite(_PwmPin, PwmSetPoint);
}

