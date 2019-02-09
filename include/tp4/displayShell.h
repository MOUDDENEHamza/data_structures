#ifndef _DISPLAYSHELL_H_
#define _DISPLAYSHELL_H_

#include "libMath.h"

/*Display the init bar*/
void init_bar(void);

/*Display the plan equation*/
void display_equation(Plan *plan);

/*Display the point*/
void display_point(Point *pt);

/*Display the end bar*/
void end_bar(void);

#endif
