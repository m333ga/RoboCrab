// motor's vars
int motor1 = 10,
    motor2 = 11,
    motor3 = 12,
    motor4 = 13;

void setup() {
  Serial.begin(9600); // init bluetooth data

  for (int motor = motor1; motor >= motor1 && motor <= motor4; motor++) pinMode(motor, OUTPUT); // init digital pins
}

// func for go
void go( int turn1 = 0, int turn2 = 0, int turn3 = 0, int turn4 = 0 ) {
  digitalWrite(motor1, turn1);
  digitalWrite(motor2, turn2);
  digitalWrite(motor3, turn3);
  digitalWrite(motor4, turn4);
}

void loop() {

  switch ( Serial.read() ) { // turn
    case 'F': go(1, 1, 1, 1); break; // up
    case 'B': go(0, 0, 0, 0); break; // down

    case 'L': go(1, 0, 1, 0); break; // left
    case 'R': go(0, 1, 0, 1); break; // right

    case 'S': go(0, 0, 0, 0); break; // stop
  }

}
