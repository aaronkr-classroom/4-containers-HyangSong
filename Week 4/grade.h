#pragma once
#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <vector>
#include "Student_info.h"

// �����ε� �Լ�
double grade(double, double, double);
double grade(double, double, std::vector<double>&);
double grade(const Student_info&);

#endif // !GUARD_grade_h
