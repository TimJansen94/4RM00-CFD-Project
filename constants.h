#define NPI        20        /* number of grid cells in x-direction [-] */
#define NPJ        40        /* number of grid cells in y-direction [-] */
#define XMAX       20.0      /* width of the domain [m] */ 
#define YMAX       8.0       /* height of the domain [m] */
#define PI         3.1415927 /* value of pi [-] */
#define MAX_ITER   100       /* maximum number of outer iterations [-] */
#define U_ITER     1         /* number of Newton iterations for u equation [-] */
#define V_ITER     1         /* number of Newton iterations for u equation [-] */
#define PC_ITER    30        /* number of Newton iterations for pc equation [-] */
#define T_ITER     1         /* number of Newton iterations for T equation [-] */
#define EPS_ITER   1         /* number of Newton iterations for Eps equation [-] */
#define K_ITER     1         /* number of Newton iterations for K equation [-] */
#define SMAXneeded 1E-8      /* maximum accepted error in mass balance [kg/s] */
#define SAVGneeded 1E-9      /* maximum accepted average error in mass balance [kg/s] */
#define LARGE      1E30      /* arbitrary very large value [-] */
#define SMALL      1E-30     /* arbitrary very small value [-] */
#define P_ATM      101000.   /* athmospheric pressure [Pa] */
#define U_IN       1.0       /* in flow velocity [m/s] */
#define b_ship	   0.2*NPI 	 /* the begin of the ship as a factor of NPI */
#define count 	   0 		 /* the start of count1 which states the nose of the ship is 1 node sharp */
#define countmax   2 		 /* the maximum nodes which defines the broadness and height of the ships nose - relative to I*nodes */
#define r_x_y	   1 		 /* ratio of the Jsteps versus Isteps within the nose */
#define l_ship 	   5 		 /* the length of the barge of the ship */


#define Cmu        0.09
#define sigmak       1.
#define sigmaeps     1.3
#define C1eps      1.44
#define C2eps      1.92
#define kappa      0.4187
#define ERough     9.793
#define Ti         0.04
