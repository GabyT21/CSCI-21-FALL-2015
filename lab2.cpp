/*
 * Name        : lab_2.h
 * Author      : Gabriela Toledo
 * Description : Using Arithmetic to finish the functions MakeChange() and
 *               LaunchHumanCannonball()
 * Sources     :
 */

#ifndef LAB_H
#define LAB_H

// Please note the header above. You need to include the name of the file, the
// author, a description of the program and any sources used
#include <iostream>
#include <cmath>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

// Function Prototypes (DO NOT ALTER)
void MakeChange(int initial_value, int &quarters, int &dimes, int &nickels,
                int &pennies);
double LaunchHumanCannonball(double initial_velocity, double launch_angle);

// Create a Constant named kPI which is initialized to 3.1415927
// CODE HERE
const kPI = 3.1415927;

#endif


// Please note the header above. You need to include the name of the file, the
// author, a description of the program and any sources used



/*
 * Given an initial integer value (representing change to be given, such as in a
 * financial transaction), break the value down into the number of quarters,
 * dimes, nickels, and pennies that would be given as change.
 * @param int initial_value - The amount of change to be broken down in pennies.
 * @param int quarters  - The number of quarters that come out of initial_value
 * @param int dimes - The number of dimes that come out of initial_value,
 *                    after quarters have been taken out
 * @param int nickels - The number of nickels that come out of initial_value,
 *                      after quarters and dimes have been taken out
 * @param int pennies - The number of pennies that come out of initial_value,
 *                      after quarters, dimes, and nickels have been taken out
 */
 int intital_value;
 int quarters;
 int dimes;
 int nickels;
 int pennies;
void MakeChange(int initial_value, int &quarters, int &dimes, int &nickels,
                int &pennies) {
  // CODE HERE
}

/*
 * Computes the horizontal distance traveled by a human cannonball given an
 * initial velocity and launch angle. Simplified -- does not account for many
 * factors that affect projectile motion.
 * @param double initial_velocity - Represents the initial velocity of the
 *                                  human cannonball in meters/second
 * @param double launch_angle -  Represents the launch angle of the human
 *                               cannonball in degrees
 * @return double  - Represents the horizontal distance the human cannonball
 *                   will travel
 */
 double initial_velocity;
 double launch_angle;
 double x_distance;
 double flight_time;
 double y_velocity;
 double radian_angle;
 double x_velocity;
 
 
double LaunchHumanCannonball(double initial_velocity, double launch_angle) {
  // (1) Convert launch_angle from degrees to radians
  //     [radian_angle = launch_angle * (kPI/180)]
  // CODE HERE
  radian_angle = launch_angle * (kPI/180);

  // (2) Compute final horizontal/x velocity
  //     [x_velocity = initial_velocity * cos(radian_angle)]
  // CODE HERE
    x_velocity = initial_velocity * cos(radian_angle);
  // (3) Compute final vertical/y velocity
  //     [y_velocity = initial_velocity * sin(radian_angle) * -1]
  // CODE HERE
    y_velocity = initial_velocity * sin(radian_angle) * -1;
  // (4) Compute time of flight
  //     [flight_time = (y_velocity) * 2 / -9.8]
  // CODE HERE
    flight_time = (y_velocity) * 2 / -9.8;
  // (5) Compute horizontal/x distance traveled
  //     [x_distance = x_velocity * flight_time]
  // CODE HERE
    x_distance = x_velocity * flight_time;
  // (6) Return horizontal/x distance
  // CODE HERE
}   x_distance =  initial_velocity;
