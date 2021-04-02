int solve(int hour, int minutes) {

  double h = ((hour % 12) * 360.0) / 12.0 + (30.0 * minutes) / 60.0;
  double m = (minutes * 360.0) / 60.0;
  double angle = abs(h - m);
  return min(angle, 360 - angle);

}