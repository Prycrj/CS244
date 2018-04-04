#include "grades.h"


double GPA::getGPA()
{
int sum=0;
for (int i=0; i<SIZE; i++)
{
sum+=grades[i];
}
return sum/SIZE;
}
