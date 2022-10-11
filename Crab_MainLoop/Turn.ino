// Functions for turn
void up () {
  analogWrite(11, 255); digitalWrite(13, 1); analogWrite(10, 255); digitalWrite(12, 0);
}

void down () {
  analogWrite(11, 255); digitalWrite(13, 0);  analogWrite(10, 255); digitalWrite(12, 1);
}

void left () {
  analogWrite(11, 0); digitalWrite(13, 1);  analogWrite(10, 255); digitalWrite(12, 0);
}

void right () {
  analogWrite(11, 255); digitalWrite(13, 1);  analogWrite(10, 0); digitalWrite(12, 1);
}


void up_left () {
  analogWrite(11, 255 / 2); digitalWrite(13, 1);  analogWrite(10, 255); digitalWrite(12, 0);
}

void up_right () {
  analogWrite(11, 255); digitalWrite(13, 1);  analogWrite(10, 255 / 2); digitalWrite(12, 0);
}

void down_left () {
  analogWrite(11, 255 / 2); digitalWrite(13, 0);  analogWrite(10, 255); digitalWrite(12, 1);
}

void down_right () {
  analogWrite(11, 255); digitalWrite(13, 0);  analogWrite(10, 255 / 2); digitalWrite(12, 1);
}


void stop_ () {
  analogWrite(11, 0); digitalWrite(13, 0);  analogWrite(10, 0); digitalWrite(12, 0);
}
