void Shoot(int d) {
    stop(100);
    digitalWrite(Shoot_Pin, 0);
    delay(d);
    digitalWrite(Shoot_Pin, 1);
    delay(500);
}