String getReadableTime(unsigned long x) {

  unsigned long seconds;
  unsigned long minutes;
  unsigned long hours;
  unsigned long days;
  //unsigned long x;
  String result;
  
  seconds = x / 1000;
  minutes = seconds / 60;
  hours = minutes / 60;
  days = hours / 24;
  x %= 1000;
  seconds %= 60;
  minutes %= 60;
  hours %= 24;
  result = String(hours) + " hrs " + String(minutes) + " min "; //customize for usage. Can add seconds and days if needed
  return result;
}
