void setup() { // func for settings
  Serial.begin(9600);  // init bluetooth data

  pinMode(13, OUTPUT); // init digital pin
  pinMode(11, OUTPUT); // init analog pin
  pinMode(12, OUTPUT); // init digital pin
  pinMode(10, OUTPUT); // init analog pin
}

void loop() { // main func with inifinite loop
  char blt_data = Serial.read(); // read bluetooth data and write in char var

  switch (blt_data) { // turn
    case 'F': up(); break; // up
    case 'B': down(); break; // down
    case 'L': left(); break; // left
    case 'R': right(); break; // right

    case 'G': up_left(); break; // up and left
    case 'I': up_right(); break; // up and right
    case 'H': down_left(); break; // down and left
    case 'J': down_right(); break; // down and right

    case 'S': stop_(); break; // stop
  }
}
