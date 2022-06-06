void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
    forward();
    delay(700);
    reverse();
    delay(700);
    left();
    delay(500);
    right();
    delay(500);
}

void forward()
{
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
}

void reverse()
{
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
}

void left()
{
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
}

void right()
{
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
}
