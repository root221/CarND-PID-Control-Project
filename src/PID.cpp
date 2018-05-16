#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	Kp_ = Kp;
	Ki_ = Ki;
	Kd_ = Kd;
	total_cte = 0;
	old_cte = 0;
}

void PID::UpdateError(double cte){
	old_cte = cte;
	total_cte += cte;
}


double PID::TotalError() {
	return total_cte;
}

