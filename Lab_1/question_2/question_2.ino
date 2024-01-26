/**
* @brief Lab 1 - Question 2
* 
* Date: 01/19/2024
*/

#define MAX_ANGLE 360

float gCos_result[MAX_ANGLE] = {0.0};

/*!
* @brief Setup function
*/
void setup() {
  // Initialize serial port
  Serial.begin(9600);

  // Find the cosine of integers between 0 and 360 degrees
  for (int angle = 0; angle < 360; angle += 1) 
  {
    // Convert angle: degrees to radians
    float angle_rad = angle * M_PI / 180;

    // Store result in an array
    gCos_result[angle] = cos(angle_rad);

    // Print result over serial
    Serial.print(F("cos("));
    Serial.print(angle);
    Serial.print("°) = ");
    Serial.println(gCos_result[angle]);
  }
}

/*!
* @brief Loop function
*/
void loop() {
  // idles
}
