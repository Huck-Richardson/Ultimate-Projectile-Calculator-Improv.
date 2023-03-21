# include <iostream>
# include <cmath>

int main () {

//Declaring Varibles
double v;
double vt;
double range;
double height;
double weight;
double fudge_factor;
double g;
double pro_area;
double cd;
double v_mph;
double power;
double mass;
double air_density;

//Title Screen
std::cout << "#############################################\n";
std::cout << "#                                           #\n";
std::cout << "#  ULTIMATE PROJECTILE CALCULATOR IMPROVED  #\n";
std::cout << "#            BY HUCK-RICHARDSON             #\n";
std::cout << "#                                      v0.6 #\n";
std::cout << "#############################################\n";

//Collecting Infomation
//Person Info
std::cout << "Please Enter your height (m)\n";
std::cin >> height;
std::cout << "Please Enter your weight (kg)\n";
std::cin >> weight;
std::cout << "Please enter your power output (w/kg)\n";
std::cin >> power;
//Projectile Info
std::cout << "Please Enter the mass of the projectile (kg)\n";
std::cin >> mass;
std::cout << "Please Enter the projected area of the projectile (m2)\n";
std::cin >> pro_area;
//Planet info
std::cout << "Please enter the gravitational acceleration (m/s)\n";
std::cin >> g;
std::cout << "Please enter enter the air density (kg/m3)\n";
std::cin >> air_density;

//Calculations
fudge_factor = weight / 1000;
v = cbrt((3 * height * weight * power) / (mass + fudge_factor));
cd = (2*mass*g) / (air_density * pow(v, 2) * pro_area);
vt = sqrt((((2*mass*g)/(pro_area*air_density*cd))));
range = (v * vt * cos(45) / g);

//How far can you throw it?
std::cout << "You can throw the object ";
std::cout << range;
std::cout << " meters with a top speed of " << v << " m/s \n";

}