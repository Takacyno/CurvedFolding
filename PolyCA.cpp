#include <iostream>
#include <fstream>
#include <time.h>
#include <exception>
#include <conio.h>
#include <windows.h>
#include <memory.h>
#include <cfloat>
#include <vector>
#include <cmath>
#include <tuple>
#include <map>
#include <string>
#include <cstring>
#define NUM 7
#define SAMPLENUM 40
#define REPEAT 1
#define RULINGDISPLACEMENTNUMBER 21
#define BETWEENALPHA 3
#define MULTIPLYTABLE1BY 0.1
#define BORDEREXPANTION 2
#define TRIAL 1

#define  SIZE_OF_BASE 200
#define  NUMBER_OF_BRACES 21

#define STARTNUM 1
#define GOALNUM  15

#if STARTNUM == 1
    #if GOALNUM == 2
        #define ALPHANUMBER 1
    #elif GOALNUM == 3
        #define ALPHANUMBER 1
    #elif GOALNUM == 4
        #define ALPHANUMBER 1
    #elif GOALNUM == 5
        #define ALPHANUMBER 1
    #elif GOALNUM == 6
        #define ALPHANUMBER 1
    #elif GOALNUM == 7
        #define ALPHANUMBER 1
    #elif GOALNUM == 8
        #define ALPHANUMBER 1
    #elif GOALNUM == 9
        #define ALPHANUMBER 1
    #elif GOALNUM == 10
        #define ALPHANUMBER 1
    #elif GOALNUM == 11
        #define ALPHANUMBER 1
    #elif GOALNUM == 12
        #define ALPHANUMBER 5
    #elif GOALNUM == 13
        #define ALPHANUMBER 3
    #elif GOALNUM == 14
        #define ALPHANUMBER 10
    #elif GOALNUM == 15
        #define ALPHANUMBER 7     
    #elif GOALNUM == 1
        #define ALPHANUMBER 1                          
    #endif
#elif STARTNUM == 2
    #if GOALNUM == 1
        #define ALPHANUMBER 11
    #elif GOALNUM == 3
        #define ALPHANUMBER 1
    #elif GOALNUM == 4
        #define ALPHANUMBER 6
    #elif GOALNUM == 5
        #define ALPHANUMBER 1
    #elif GOALNUM == 6
        #define ALPHANUMBER 1
    #elif GOALNUM == 7
        #define ALPHANUMBER 6
    #elif GOALNUM == 8
        #define ALPHANUMBER 6
    #elif GOALNUM == 9
        #define ALPHANUMBER 1
    #elif GOALNUM == 10
        #define ALPHANUMBER 1
    #elif GOALNUM == 11
        #define ALPHANUMBER 11
    #elif GOALNUM == 12
        #define ALPHANUMBER 15
    #elif GOALNUM == 13
        #define ALPHANUMBER 13
    #elif GOALNUM == 14
        #define ALPHANUMBER 20
    #elif GOALNUM == 15
        #define ALPHANUMBER 17
    #elif GOALNUM == 2
        #define ALPHANUMBER 2
    #endif
#elif STARTNUM == 3
    #if GOALNUM == 1
        #define ALPHANUMBER 26
    #elif GOALNUM == 2
        #define ALPHANUMBER 16
    #elif GOALNUM == 4
        #define ALPHANUMBER 21
    #elif GOALNUM == 5
        #define ALPHANUMBER 16
    #elif GOALNUM == 6
        #define ALPHANUMBER 16
    #elif GOALNUM == 7
        #define ALPHANUMBER 21
    #elif GOALNUM == 8
        #define ALPHANUMBER 21
    #elif GOALNUM == 9
        #define ALPHANUMBER 11
    #elif GOALNUM == 10
        #define ALPHANUMBER 11
    #elif GOALNUM == 11
        #define ALPHANUMBER 26
    #elif GOALNUM == 12
        #define ALPHANUMBER 30
    #elif GOALNUM == 13
        #define ALPHANUMBER 28
    #elif GOALNUM == 14
        #define ALPHANUMBER 35
    #elif GOALNUM == 15
        #define ALPHANUMBER 32
    #elif GOALNUM == 3
        #define ALPHANUMBER 3        
    #endif
#elif STARTNUM == 4
    #if GOALNUM == 1
        #define ALPHANUMBER 6
    #elif GOALNUM == 2
        #define ALPHANUMBER 1
    #elif GOALNUM == 3
        #define ALPHANUMBER 1
    #elif GOALNUM == 5
        #define ALPHANUMBER 1
    #elif GOALNUM == 6
        #define ALPHANUMBER 1
    #elif GOALNUM == 7
        #define ALPHANUMBER 1
    #elif GOALNUM == 8
        #define ALPHANUMBER 1
    #elif GOALNUM == 9
        #define ALPHANUMBER 1
    #elif GOALNUM == 10
        #define ALPHANUMBER 1
    #elif GOALNUM == 11
        #define ALPHANUMBER 6
    #elif GOALNUM == 12
        #define ALPHANUMBER 10
    #elif GOALNUM == 13
        #define ALPHANUMBER 8
    #elif GOALNUM == 14
        #define ALPHANUMBER 15
    #elif GOALNUM == 15
        #define ALPHANUMBER 12
    #elif GOALNUM == 4
        #define ALPHANUMBER 4        
    #endif
#elif STARTNUM == 5
    #if GOALNUM == 1
        #define ALPHANUMBER 11
    #elif GOALNUM == 2
        #define ALPHANUMBER 1
    #elif GOALNUM == 3
        #define ALPHANUMBER 1
    #elif GOALNUM == 4
        #define ALPHANUMBER 6
    #elif GOALNUM == 6
        #define ALPHANUMBER 1
    #elif GOALNUM == 7
        #define ALPHANUMBER 6
    #elif GOALNUM == 8
        #define ALPHANUMBER 6
    #elif GOALNUM == 9
        #define ALPHANUMBER 1
    #elif GOALNUM == 10
        #define ALPHANUMBER 1
    #elif GOALNUM == 11
        #define ALPHANUMBER 11
    #elif GOALNUM == 12
        #define ALPHANUMBER 15
    #elif GOALNUM == 13
        #define ALPHANUMBER 13
    #elif GOALNUM == 14
        #define ALPHANUMBER 20
    #elif GOALNUM == 15
        #define ALPHANUMBER 17
    #elif GOALNUM == 5
        #define ALPHANUMBER 5        
    #endif
#elif STARTNUM == 6
    #if GOALNUM == 1
        #define ALPHANUMBER 11
    #elif GOALNUM == 2
        #define ALPHANUMBER 1
    #elif GOALNUM == 3
        #define ALPHANUMBER 1
    #elif GOALNUM == 4
        #define ALPHANUMBER 6
    #elif GOALNUM == 5
        #define ALPHANUMBER 1
    #elif GOALNUM == 7
        #define ALPHANUMBER 6
    #elif GOALNUM == 8
        #define ALPHANUMBER 6
    #elif GOALNUM == 9
        #define ALPHANUMBER 1
    #elif GOALNUM == 10
        #define ALPHANUMBER 1
    #elif GOALNUM == 11
        #define ALPHANUMBER 11
    #elif GOALNUM == 12
        #define ALPHANUMBER 15
    #elif GOALNUM == 13
        #define ALPHANUMBER 13
    #elif GOALNUM == 14
        #define ALPHANUMBER 20
    #elif GOALNUM == 15
        #define ALPHANUMBER 17
    #elif GOALNUM == 6
        #define ALPHANUMBER 6        
    #endif
#elif STARTNUM == 7
    #if GOALNUM == 1
        #define ALPHANUMBER 6
    #elif GOALNUM == 2
        #define ALPHANUMBER 1
    #elif GOALNUM == 3
        #define ALPHANUMBER 1
    #elif GOALNUM == 4
        #define ALPHANUMBER 1
    #elif GOALNUM == 5
        #define ALPHANUMBER 1
    #elif GOALNUM == 6
        #define ALPHANUMBER 1
    #elif GOALNUM == 8
        #define ALPHANUMBER 1
    #elif GOALNUM == 9
        #define ALPHANUMBER 1
    #elif GOALNUM == 10
        #define ALPHANUMBER 1
    #elif GOALNUM == 11
        #define ALPHANUMBER 6
    #elif GOALNUM == 12
        #define ALPHANUMBER 10
    #elif GOALNUM == 13
        #define ALPHANUMBER 8
    #elif GOALNUM == 14
        #define ALPHANUMBER 15
    #elif GOALNUM == 15
        #define ALPHANUMBER 12
    #elif GOALNUM == 7
        #define ALPHANUMBER 7        
    #endif
#elif STARTNUM == 8
    #if GOALNUM == 1
        #define ALPHANUMBER 6
    #elif GOALNUM == 2
        #define ALPHANUMBER 1
    #elif GOALNUM == 3
        #define ALPHANUMBER 1
    #elif GOALNUM == 4
        #define ALPHANUMBER 1
    #elif GOALNUM == 5
        #define ALPHANUMBER 1
    #elif GOALNUM == 6
        #define ALPHANUMBER 1
    #elif GOALNUM == 7
        #define ALPHANUMBER 1
    #elif GOALNUM == 9
        #define ALPHANUMBER 1
    #elif GOALNUM == 10
        #define ALPHANUMBER 1
    #elif GOALNUM == 11
        #define ALPHANUMBER 6
    #elif GOALNUM == 12
        #define ALPHANUMBER 10
    #elif GOALNUM == 13
        #define ALPHANUMBER 8
    #elif GOALNUM == 14
        #define ALPHANUMBER 15
    #elif GOALNUM == 15
        #define ALPHANUMBER 12
    #elif GOALNUM == 8
        #define ALPHANUMBER 8        
    #endif
#elif STARTNUM == 9
    #if GOALNUM == 1
        #define ALPHANUMBER 16
    #elif GOALNUM == 2
        #define ALPHANUMBER 6
    #elif GOALNUM == 3
        #define ALPHANUMBER 1
    #elif GOALNUM == 4
        #define ALPHANUMBER 11
    #elif GOALNUM == 5
        #define ALPHANUMBER 6
    #elif GOALNUM == 6
        #define ALPHANUMBER 6
    #elif GOALNUM == 7
        #define ALPHANUMBER 11
    #elif GOALNUM == 8
        #define ALPHANUMBER 11
    #elif GOALNUM == 10
        #define ALPHANUMBER 1
    #elif GOALNUM == 11
        #define ALPHANUMBER 16
    #elif GOALNUM == 12
        #define ALPHANUMBER 20
    #elif GOALNUM == 13
        #define ALPHANUMBER 18
    #elif GOALNUM == 14
        #define ALPHANUMBER 25
    #elif GOALNUM == 15
        #define ALPHANUMBER 22
    #elif GOALNUM == 9
        #define ALPHANUMBER 9        
    #endif
#elif STARTNUM == 10
    #if GOALNUM == 1
        #define ALPHANUMBER 16
    #elif GOALNUM == 2
        #define ALPHANUMBER 6
    #elif GOALNUM == 3
        #define ALPHANUMBER 1
    #elif GOALNUM == 4
        #define ALPHANUMBER 11
    #elif GOALNUM == 5
        #define ALPHANUMBER 6
    #elif GOALNUM == 6
        #define ALPHANUMBER 6
    #elif GOALNUM == 7
        #define ALPHANUMBER 11
    #elif GOALNUM == 8
        #define ALPHANUMBER 11
    #elif GOALNUM == 9
        #define ALPHANUMBER 1
    #elif GOALNUM == 11
        #define ALPHANUMBER 16
    #elif GOALNUM == 12
        #define ALPHANUMBER 20
    #elif GOALNUM == 13
        #define ALPHANUMBER 18
    #elif GOALNUM == 14
        #define ALPHANUMBER 25
    #elif GOALNUM == 15
        #define ALPHANUMBER 22
    #elif GOALNUM == 10
        #define ALPHANUMBER 10        
    #endif
#elif STARTNUM == 11
    #if GOALNUM == 1
        #define ALPHANUMBER 2
    #elif GOALNUM == 2
        #define ALPHANUMBER 1
    #elif GOALNUM == 3
        #define ALPHANUMBER 1
    #elif GOALNUM == 4
        #define ALPHANUMBER 1
    #elif GOALNUM == 5
        #define ALPHANUMBER 1
    #elif GOALNUM == 6
        #define ALPHANUMBER 1
    #elif GOALNUM == 7
        #define ALPHANUMBER 1
    #elif GOALNUM == 8
        #define ALPHANUMBER 1
    #elif GOALNUM == 9
        #define ALPHANUMBER 1
    #elif GOALNUM == 10
        #define ALPHANUMBER 1
    #elif GOALNUM == 12
        #define ALPHANUMBER 6
    #elif GOALNUM == 13
        #define ALPHANUMBER 4
    #elif GOALNUM == 14
        #define ALPHANUMBER 10
    #elif GOALNUM == 15
        #define ALPHANUMBER 8                               
    #endif
#elif STARTNUM == 12
    #if GOALNUM == 1
        #define ALPHANUMBER 1
    #elif GOALNUM == 2
        #define ALPHANUMBER 1
    #elif GOALNUM == 3
        #define ALPHANUMBER 1
    #elif GOALNUM == 4
        #define ALPHANUMBER 1
    #elif GOALNUM == 5
        #define ALPHANUMBER 1
    #elif GOALNUM == 6
        #define ALPHANUMBER 1
    #elif GOALNUM == 7
        #define ALPHANUMBER 1
    #elif GOALNUM == 8
        #define ALPHANUMBER 1
    #elif GOALNUM == 9
        #define ALPHANUMBER 1
    #elif GOALNUM == 10
        #define ALPHANUMBER 1
    #elif GOALNUM == 11
        #define ALPHANUMBER 1
    #elif GOALNUM == 13
        #define ALPHANUMBER 1
    #elif GOALNUM == 14
        #define ALPHANUMBER 6
    #elif GOALNUM == 15
        #define ALPHANUMBER 4                               
    #endif
#elif STARTNUM == 13
    #if GOALNUM == 1
        #define ALPHANUMBER 1
    #elif GOALNUM == 2
        #define ALPHANUMBER 1
    #elif GOALNUM == 3
        #define ALPHANUMBER 1
    #elif GOALNUM == 4
        #define ALPHANUMBER 1
    #elif GOALNUM == 5
        #define ALPHANUMBER 1
    #elif GOALNUM == 6
        #define ALPHANUMBER 1
    #elif GOALNUM == 7
        #define ALPHANUMBER 1
    #elif GOALNUM == 8
        #define ALPHANUMBER 1
    #elif GOALNUM == 9
        #define ALPHANUMBER 1
    #elif GOALNUM == 10
        #define ALPHANUMBER 1
    #elif GOALNUM == 11
        #define ALPHANUMBER 1
    #elif GOALNUM == 12
        #define ALPHANUMBER 3
    #elif GOALNUM == 14
        #define ALPHANUMBER 8
    #elif GOALNUM == 15
        #define ALPHANUMBER 6                               
    #endif
#elif STARTNUM == 14
    #if GOALNUM == 1
        #define ALPHANUMBER 1
    #elif GOALNUM == 2
        #define ALPHANUMBER 1
    #elif GOALNUM == 3
        #define ALPHANUMBER 1
    #elif GOALNUM == 4
        #define ALPHANUMBER 1
    #elif GOALNUM == 5
        #define ALPHANUMBER 1
    #elif GOALNUM == 6
        #define ALPHANUMBER 1
    #elif GOALNUM == 7
        #define ALPHANUMBER 1
    #elif GOALNUM == 8
        #define ALPHANUMBER 1
    #elif GOALNUM == 9
        #define ALPHANUMBER 1
    #elif GOALNUM == 10
        #define ALPHANUMBER 1
    #elif GOALNUM == 11
        #define ALPHANUMBER 1
    #elif GOALNUM == 12
        #define ALPHANUMBER 1
    #elif GOALNUM == 13
        #define ALPHANUMBER 1
    #elif GOALNUM == 15
        #define ALPHANUMBER 1                               
    #endif
#elif STARTNUM == 15
    #if GOALNUM == 1
        #define ALPHANUMBER 1
    #elif GOALNUM == 2
        #define ALPHANUMBER 1
    #elif GOALNUM == 3
        #define ALPHANUMBER 1
    #elif GOALNUM == 4
        #define ALPHANUMBER 1
    #elif GOALNUM == 5
        #define ALPHANUMBER 1
    #elif GOALNUM == 6
        #define ALPHANUMBER 1
    #elif GOALNUM == 7
        #define ALPHANUMBER 1
    #elif GOALNUM == 8
        #define ALPHANUMBER 1
    #elif GOALNUM == 9
        #define ALPHANUMBER 1
    #elif GOALNUM == 10
        #define ALPHANUMBER 1
    #elif GOALNUM == 11
        #define ALPHANUMBER 1
    #elif GOALNUM == 12
        #define ALPHANUMBER 1
    #elif GOALNUM == 13
        #define ALPHANUMBER 1
    #elif GOALNUM == 14
        #define ALPHANUMBER 4                               
    #endif

#endif

using namespace std;
double dxdef=5.0,dx2d[SAMPLENUM],PI=acos(-1);
double x2d[2][SAMPLENUM]={},t2d[2][SAMPLENUM]={},n2d[2][SAMPLENUM]={},k2dControl[NUM]={0.000000,0.004536,0.005988,0.007399,0.005987,0.004538,0.000000},k2d[SAMPLENUM]={},costPointsWhere2d[9][9][2]={},curveCrossPoints2d[2][3]={},curveTipToEdge[2]={},alphaDisplacement[ALPHANUMBER]={},
betaControlDisplacement[RULINGDISPLACEMENTNUMBER][NUM]={{0.1,0.1,0.1,0.1,0.1,0.1,0.1},{-0.1,-0.1,-0.1,-0.1,-0.1,-0.1,-0.1},{0,0.0286,0.0571,0.857,0.114,0.143,0.171},{-0,-0.0286,-0.0571,-0.857,-0.114,-0.143,-0.171},{0.2,0.171,0.143,0.114,0.0857,0.0571,0.0286},{-0.2,-0.171,-0.143,-0.114,-0.0857,-0.0571,-0.0286},{0.1,0,0,0,0,0,0},{0,0.1,0,0,0,0,0},{0,0,0.1,0,0,0,0},{0,0,0,0.1,0,0,0},{0,0,0,0,0.1,0,0},{0,0,0,0,0,0.1,0},{0,0,0,0,0,0,0.1},{-0.1,0,0,0,0,0,0},{0,-0.1,0,0,0,0,0},{0,0,-0.1,0,0,0,0},{0,0,0,-0.1,0,0,0},{0,0,0,0,-0.1,0,0},{0,0,0,0,0,-0.1,0},{0,0,0,0,0,0,-0.1},{0,0,0,0,0,0,0}};
double betaControls[100][2][NUM]={{{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}},
        {{2.022672,1.991598,1.849320,1.562967,1.298554,1.156659,1.127758},{1.118921,1.149995,1.292273,1.578625,1.843039,1.984934,2.013835}},//1
        {{2.022672,1.991598,1.849320,1.562967,1.298554,1.156659,1.127758},{2.216568,1.884956,2.076942,2.251475,2.408554,2.495821,2.426008}},//2
        {{1.326450,1.274090,1.117011,0.890118,0.663225,0.523599,0.401426},{2.216568,1.884956,2.076942,2.251475,2.408554,2.495821,2.426008}},//3
        {{1.326450,1.274090,1.117011,0.890118,0.663225,0.523599,0.401426},{0.523599,0.610865,0.750492,0.925025,1.134464,1.291544,1.431170}},//4 
        {{1.326450,1.274090,1.117011,0.890118,0.663225,0.523599,0.401426},{1.118921,1.149995,1.292273,1.578625,1.843039,1.984934,2.013835}},//5
        {{3.101130,2.70104, 2.07535, 1.53729, 1.08705, 0.431637,0.026462},{2.882340, 2.26317, 2.20766, 2.36902, 1.85598, 2.04419, 1.98954}},
        {{2.345050,2.23057,1.59664, 1.26279, 0.912938, 0.345252,0.351388},{1.506030,2.25665,2.13326, 1.10488, 1.27852, 0.967396, 0.140843}},
        {{3.094230, 2.66480,2.31964, 2.07496, 1.62904, 1.14793, 0.559920},{2.416570,2.18378,2.17535, 1.66893, 1.74515, 0.824348, 0.304696}},
        {{1.167420,0.990758,0.835253,0.599957,0.362943,0.20605,0.0633111},{2.064900,0.961894,0.656198,0.868829,1.30951,1.04860, 0.0928332}},
        {{3.078280, 2.93554, 2.77865, 2.54164, 2.30634, 2.15083, 1.97417},{3.048760, 2.09299, 1.83208, 2.27276, 2.48539, 2.17970, 1.07669}},
        {{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}},
        {{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}},
        {{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}},
        {{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}},
        {{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}}
};
double TAcontrols[100][NUM][2]={{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
    {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
    {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
    {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
    {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
    {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
    {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
    {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
    {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
    {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
    {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
    {{-0.020968,1.278760},{-0.025872,1.271570},{0.001967,1.180910},{0.014687,1.020460},{0.019002,0.917876},{0.037042,0.879190},{0.048538,0.500812}},//1
    {{-0.016698,1.052870},{-0.025259,0.761789},{-0.034240,0.952727},{-0.000822,1.167250},{0.045883,1.303490},{0.038034,0.916677},{0.037396,0.642997}},//2  #12
    {{-0.043265,0.004075},{-0.046234,0.898317},{-0.043387,1.173530},{-0.015075,1.098120},{-0.009331,1.310630},{0.043463,1.382640},{0.011635,0.397745}},//3 15?
    {{-0.039798,0.348895},{-0.031103,0.545826},{-0.042697,1.033500},{-0.047583,1.327890},{-0.022588,1.343760},{-0.012474,1.452100},{0.025140,1.486380}},//4 ×
    {{-0.026836,0.276029},{-0.045035,0.555462},{-0.046875,0.989400},{-0.026034,1.244960},{0.018975,1.135130},{0.027432,1.095200},{0.010836,0.933887}},//5
    {//6
	{-0.047229,	1.312740	},
	{-0.028185,	0.823437	},
	{-0.037173,	0.946016	},
	{-0.023745,	1.118880	},
	{0.003951	,0.979908	},
	{0.038748,	0.634081	},
	{0.036279,	0.274447	}
    },{//7
	{-0.028039,	0.409010	},
	{-0.034430,	0.687963	},
	{-0.037637,	1.033840	},
	{-0.028689,	1.214810	},
	{0.031530,	1.300180	},
	{0.045746,	1.292180	},
	{0.019793,	0.719171	}
    },{//8
	{-0.032446,	0.200286	},
	{-0.048630,	0.775499	},
	{-0.045624,	1.109050	},
	{-0.006624,	1.023290	},
	{0.016259,	0.842804	},
	{0.049271,	0.768788	},
	{0.010631,	0.512557	}
    },{//9
	{-0.022668,	0.094726	},
	{-0.036044,	0.841510	},
	{-0.041839,	1.307280	},
	{-0.035833,	1.337100	},
	{-0.015639,	1.412840	},
	{0.044504,	1.151530	},
	{0.040234,	0.581349	}
}};
int startToEnd[2]={3,SAMPLENUM-4},errorCnt=0;
int betaControlIdx[NUM]={};
double radians(double degree){
    return PI*degree/180;
}
void spline(double X[SAMPLENUM],double X_control[NUM]){
    int spnum=NUM-1,tmp;
    double t,dt,a[NUM]={},b[NUM]={},c[NUM]={},d[NUM]={},w[NUM]={};
    for (int i = 0; i < NUM; i++){
        a[i]=X_control[i];
    }
    c[0]=c[spnum]=0.0;
    for(int i=1; i<spnum; i++) {
		c[i] = 3.0 * (a[i-1] - 2.0 * a[i] + a[i+1]);
	}
	w[0]=0.0;
	for(int i=1; i<spnum; i++) {
		tmp = 4.0 - w[i-1];
		c[i] = (c[i] - c[i-1])/tmp;
		w[i] = 1.0 / tmp;
	}
	for(int i=spnum-1; i>0; i--) {
		c[i] = c[i] - c[i+1] * w[i];
	}
	b[spnum] = d[spnum] =0.0;
	for(int i=0; i<spnum; i++) {
		d[i] = ( c[i+1] - c[i]) / 3.0;
		b[i] = a[i+1] - a[i] - c[i] - d[i];
	}
    for (int k = 0; k < SAMPLENUM; k++){
        t=(double)k/(double)SAMPLENUM*(double)(NUM-1);
        tmp=(int)floor(t);
        if(tmp<0){
            tmp=0;
        }else if(tmp>=spnum){
            tmp=spnum-1;
        }
        dt=t-(double)tmp;
        X[k]=a[tmp]+(b[tmp]+(c[tmp]+d[tmp]*dt)*dt)*dt;
    }
}


void unit_m44(double *m44)
{
	m44[0] = 1.0;	m44[1] = 0.0;	m44[2] = 0.0;	m44[3] = 0.0;
	m44[4] = 0.0;	m44[5] = 1.0;	m44[6] = 0.0;	m44[7] = 0.0;
	m44[8] = 0.0;	m44[9] = 0.0;	m44[10] = 1.0;	m44[11] = 0.0;
	m44[12] = 0.0;	m44[13] = 0.0;	m44[14] = 0.0;	m44[15] = 1.0;
}

void mult_m44_n44(double *_n44, double *_m44, int dst)
{
	int i,j,k;
	double m0[16]={}, m1[16], m2[16];
	memcpy(m1, _n44, sizeof(double)*16);
	memcpy(m2, _m44, sizeof(double)*16);
	memset(m0, 0, sizeof(double)*16);

	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			for(k = 0; k < 4; k++){
				m0[i*4+j] += m1[i*4+k] * m2[k*4+j];
			}
		}
	}
	if(dst == 0){
		memcpy(_m44, m0, sizeof(double)*16);
	} else{
		memcpy(_n44, m0, sizeof(double)*16);
	}
}

int inv_m33(double *m)
{
	double det, mat[9];
	det = m[0]*m[4]*m[8] + m[1]*m[5]*m[6] + m[2]*m[3]*m[7] - m[0]*m[5]*m[7] - m[1]*m[3]*m[8] - m[2]*m[4]*m[6];
	if(fabs(det) < DBL_MIN)
		return -1;
	mat[0] = (m[4]*m[8]-m[5]*m[7])/det;
	mat[1] = (m[2]*m[7]-m[1]*m[8])/det;
	mat[2] = (m[1]*m[5]-m[2]*m[4])/det;
	mat[3] = (m[5]*m[6]-m[3]*m[8])/det;
	mat[4] = (m[0]*m[8]-m[2]*m[6])/det;
	mat[5] = (m[2]*m[3]-m[0]*m[5])/det;
	mat[6] = (m[3]*m[7]-m[4]*m[6])/det;
	mat[7] = (m[1]*m[6]-m[0]*m[7])/det;
	mat[8] = (m[0]*m[4]-m[1]*m[3])/det;
	memcpy(m,mat,sizeof(double)*9);
	return 0;
}
void mult_m44_v4(double *_m44, double *_v4)
{
	int i,j;
	double v0[4], m[4][4], v1[4];

	memcpy(v1, _v4, sizeof(double)*4);
	memcpy(m, _m44, sizeof(double)*16);
	memset(v0, 0, sizeof(double)*4);

	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			v0[i] += m[i][j] * v1[j];
		}
	}
	memcpy(_v4, v0, sizeof(double)*4);
}

int getMat(int vcnt,double* vx0, double* vy0, double* vz0,double* vx1, double* vy1, double* vz1,double* _mat,double* _normalVec){
	int i, cnt, ret = 0;
	double mat[16], rm[16], tm0[16], tm1[16], eps = 0.0000001;
	double rmat[3][3];
	double tv00, tv01, tv02, tv10, tv11, tv12;
	double w, sw, cw, p, sp, cp, k, ck, sk, F[3];
	double dfdp[3][3], dfdp_coef[3][3][3];
	double m[9], b0, b1, b2, dw, dp, dk;
    double initialNormalVec[4]={0,0,1,1};
#if 1
	if (vcnt < 3) {
		ret = -1;
		goto end;
	}

	// translation
	tv00 = tv01 = tv02 = tv10 = tv11 = tv12 = 0;
	for (i = 0; i < vcnt; i++) {
		tv00 += vx0[i];	tv01 += vy0[i];	tv02 += vz0[i];
		tv10 += vx1[i];	tv11 += vy1[i];	tv12 += vz1[i];
	}
	tv00 /= vcnt;	tv01 /= vcnt;	tv02 /= vcnt;
	tv10 /= vcnt;	tv11 /= vcnt;	tv12 /= vcnt;
	for (i = 0; i < vcnt; i++) {
		vx0[i] -= tv00;	vy0[i] -= tv01;	vz0[i] -= tv02;
		vx1[i] -= tv10;	vy1[i] -= tv11;	vz1[i] -= tv12;
	}

	// initial value for rotation matrix
	w = 0;	cw = cos(w);	sw = sin(w);
	p = 0;	cp = cos(p);	sp = sin(p);
	k = 0;	ck = cos(k);	sk = sin(k);
	cnt = 0;
	dw = dp = dk = DBL_MAX;
	while ((fabs(dw) > eps || fabs(dp) > eps || fabs(dk) > eps) && cnt < 100) {
		memset(m, 0, sizeof(double) * 9);
		b0 = b1 = b2 = 0;

		rmat[0][0] = cp * ck;
		rmat[0][1] = -cp * sk;
		rmat[0][2] = sp;
		rmat[1][0] = cw * sk + sw * sp * ck;
		rmat[1][1] = cw * ck - sw * sp * sk;
		rmat[1][2] = -sw * cp;
		rmat[2][0] = sw * sk - cw * sp * ck;
		rmat[2][1] = sw * ck + cw * sp * sk;
		rmat[2][2] = cw * cp;

		dfdp_coef[0][0][0] = 0;
		dfdp_coef[0][0][1] = 0;
		dfdp_coef[0][0][2] = 0;
		dfdp_coef[0][1][0] = -sp * ck;
		dfdp_coef[0][1][1] = sp * sk;
		dfdp_coef[0][1][2] = cp;
		dfdp_coef[0][2][0] = -cp * sk;
		dfdp_coef[0][2][1] = -cp * ck;
		dfdp_coef[0][2][2] = 0;

		dfdp_coef[1][0][0] = -sw * sk + cw * sp * ck;
		dfdp_coef[1][0][1] = -sw * ck - cw * sp * sk;
		dfdp_coef[1][0][2] = -cw * cp;
		dfdp_coef[1][1][0] = sw * cp * ck;
		dfdp_coef[1][1][1] = -sw * cp * sk;
		dfdp_coef[1][1][2] = sw * sp;
		dfdp_coef[1][2][0] = cw * ck - sw * sp * sk;
		dfdp_coef[1][2][1] = -cw * sk - sw * sp * ck;
		dfdp_coef[1][2][2] = 0;

		dfdp_coef[2][0][0] = cw * sk + sw * sp * ck;
		dfdp_coef[2][0][1] = cw * ck - sw * sp * sk;
		dfdp_coef[2][0][2] = -sw * cp;
		dfdp_coef[2][1][0] = -cw * cp * ck;
		dfdp_coef[2][1][1] = cw * cp * sk;
		dfdp_coef[2][1][2] = -cw * sp;
		dfdp_coef[2][2][0] = sw * ck + cw * sp * sk;
		dfdp_coef[2][2][1] = -sw * sk + cw * sp * ck;
		dfdp_coef[2][2][2] = 0;

		for (i = 0; i < vcnt; i++) {

			F[0] = rmat[0][0] * vx0[i] + rmat[0][1] * vy0[i] + rmat[0][2] * vz0[i] - vx1[i];
			F[1] = rmat[1][0] * vx0[i] + rmat[1][1] * vy0[i] + rmat[1][2] * vz0[i] - vy1[i];
			F[2] = rmat[2][0] * vx0[i] + rmat[2][1] * vy0[i] + rmat[2][2] * vz0[i] - vz1[i];

			dfdp[0][0] = dfdp_coef[0][0][0] * vx0[i] + dfdp_coef[0][0][1] * vy0[i] + dfdp_coef[0][0][2] * vz0[i];
			dfdp[0][1] = dfdp_coef[0][1][0] * vx0[i] + dfdp_coef[0][1][1] * vy0[i] + dfdp_coef[0][1][2] * vz0[i];
			dfdp[0][2] = dfdp_coef[0][2][0] * vx0[i] + dfdp_coef[0][2][1] * vy0[i] + dfdp_coef[0][2][2] * vz0[i];

			dfdp[1][0] = dfdp_coef[1][0][0] * vx0[i] + dfdp_coef[1][0][1] * vy0[i] + dfdp_coef[1][0][2] * vz0[i];
			dfdp[1][1] = dfdp_coef[1][1][0] * vx0[i] + dfdp_coef[1][1][1] * vy0[i] + dfdp_coef[1][1][2] * vz0[i];
			dfdp[1][2] = dfdp_coef[1][2][0] * vx0[i] + dfdp_coef[1][2][1] * vy0[i] + dfdp_coef[1][2][2] * vz0[i];

			dfdp[2][0] = dfdp_coef[2][0][0] * vx0[i] + dfdp_coef[2][0][1] * vy0[i] + dfdp_coef[2][0][2] * vz0[i];
			dfdp[2][1] = dfdp_coef[2][1][0] * vx0[i] + dfdp_coef[2][1][1] * vy0[i] + dfdp_coef[2][1][2] * vz0[i];
			dfdp[2][2] = dfdp_coef[2][2][0] * vx0[i] + dfdp_coef[2][2][1] * vy0[i] + dfdp_coef[2][2][2] * vz0[i];

			m[0] += dfdp[0][0] * dfdp[0][0] + dfdp[1][0] * dfdp[1][0] + dfdp[2][0] * dfdp[2][0];
			m[1] += dfdp[0][0] * dfdp[0][1] + dfdp[1][0] * dfdp[1][1] + dfdp[2][0] * dfdp[2][1];
			m[2] += dfdp[0][0] * dfdp[0][2] + dfdp[1][0] * dfdp[1][2] + dfdp[2][0] * dfdp[2][2];
			m[3] += dfdp[0][1] * dfdp[0][0] + dfdp[1][1] * dfdp[1][0] + dfdp[2][1] * dfdp[2][0];
			m[4] += dfdp[0][1] * dfdp[0][1] + dfdp[1][1] * dfdp[1][1] + dfdp[2][1] * dfdp[2][1];
			m[5] += dfdp[0][1] * dfdp[0][2] + dfdp[1][1] * dfdp[1][2] + dfdp[2][1] * dfdp[2][2];
			m[6] += dfdp[0][2] * dfdp[0][0] + dfdp[1][2] * dfdp[1][0] + dfdp[2][2] * dfdp[2][0];
			m[7] += dfdp[0][2] * dfdp[0][1] + dfdp[1][2] * dfdp[1][1] + dfdp[2][2] * dfdp[2][1];
			m[8] += dfdp[0][2] * dfdp[0][2] + dfdp[1][2] * dfdp[1][2] + dfdp[2][2] * dfdp[2][2];

			b0 += dfdp[0][0] * F[0] + dfdp[1][0] * F[1] + dfdp[2][0] * F[2];
			b1 += dfdp[0][1] * F[0] + dfdp[1][1] * F[1] + dfdp[2][1] * F[2];
			b2 += dfdp[0][2] * F[0] + dfdp[1][2] * F[1] + dfdp[2][2] * F[2];
		}
		inv_m33(m);
		dw = m[0] * b0 + m[1] * b1 + m[2] * b2;
		dp = m[3] * b0 + m[4] * b1 + m[5] * b2;
		dk = m[6] * b0 + m[7] * b1 + m[8] * b2;
		w = w - dw;	sw = sin(w);	cw = cos(w);
		p = p - dp;	sp = sin(p);	cp = cos(p);
		k = k - dk;	sk = sin(k);	ck = cos(k);

		cnt++;
	}
	rmat[0][0] = cp * ck;
	rmat[0][1] = -cp * sk;
	rmat[0][2] = sp;
	rmat[1][0] = cw * sk + sw * sp * ck;
	rmat[1][1] = cw * ck - sw * sp * sk;
	rmat[1][2] = -sw * cp;
	rmat[2][0] = sw * sk - cw * sp * ck;
	rmat[2][1] = sw * ck + cw * sp * sk;
	rmat[2][2] = cw * cp;

	unit_m44(tm0);	tm0[3] = -tv00;	tm0[7] = -tv01;	tm0[11] = -tv02;
	unit_m44(tm1);	tm1[3] = tv10;	tm1[7] = tv11;	tm1[11] = tv12;
	rm[0] = rmat[0][0];	rm[1] = rmat[0][1];	rm[2] = rmat[0][2];	rm[3] = 0;
	rm[4] = rmat[1][0];	rm[5] = rmat[1][1];	rm[6] = rmat[1][2];	rm[7] = 0;
	rm[8] = rmat[2][0];	rm[9] = rmat[2][1];	rm[10]= rmat[2][2];	rm[11] = 0;
	rm[12] = 0;		rm[13] = 0;		rm[14] = 0;		rm[15] = 1;
    for(int i=0;i<16;i++){
        mat[i]=tm1[i];
    }
	mult_m44_n44(mat, rm, 1);	// dst=1 : n44[16] = n44[16] * m44[16] 
    mult_m44_v4(rm,initialNormalVec);
	mult_m44_n44(mat, tm0, 1);
	if (_mat){
        // for(int i=0;i<16;i++){
        //     _mat[i]=mat[i];
        // }   
        memcpy(_mat, mat, sizeof(double) * 16);
    } 
    if(_normalVec){
        memcpy(_normalVec, initialNormalVec, sizeof(double) * 4);
    }
#else
    unit_m44(_mat);
#endif
end:
	return ret;
}


double area2(double A_x,double A_y,double B_x,double B_y,double C_x,double C_y){
    return A_x*(B_y-C_y)+B_x*(C_y-A_y)+C_x*(A_y-B_y);
}

int cross(double A_x,double A_y,double B_x,double B_y,double C_x,double C_y,double D_x,double D_y){
    if(area2(A_x,A_y,B_x,B_y,C_x,C_y)*area2(A_x,A_y,B_x,B_y,D_x,D_y)<0&&area2(C_x,C_y,D_x,D_y,A_x,A_y)*area2(C_x,C_y,D_x,D_y,B_x,B_y)<0){
        return 1;
    }else{
        return 0;
    }
}

double distance2d(double A_x,double A_y,double B_x,double B_y){
    return sqrt((A_x-B_x)*(A_x-B_x)+(A_y-B_y)*(A_y-B_y));
}

double distance3d(double A_x,double A_y,double A_z,double B_x,double B_y,double B_z){
    return sqrt((A_x-B_x)*(A_x-B_x)+(A_y-B_y)*(A_y-B_y)+(A_z-B_z)*(A_z-B_z));
}

double contain_triangle(double point1x,double point1y,double point2x,double point2y,double point3x,double point3y,double Px,double Py){
    int crossNumber=0;
    crossNumber+=cross(point1x,point1y,point2x,
    point2y,Px,Py,-1.234,-1.234);
    crossNumber+=cross(point3x,point3y,point2x,point2y,Px,Py,-1.234,-1.234);
    crossNumber+=cross(point1x,point1y,point3x,point3y,Px,Py,-1.234,-1.234);
    if(crossNumber==1){
        return 1;
    }else if(crossNumber==0||crossNumber==2){
        return 0;
    }else{
        std::cout<<"line is crossing convex triangle 3times"<<endl;
        exit(1);
    }
}

double contain_square(double point1x,double point1y,double point2x,double point2y,double point3x,double point3y,double point4x,double point4y,double Px,double Py){
    int crossNumber=0;
    crossNumber+=cross(point1x,point1y,point2x,
    point2y,Px,Py,-1.234,-1.234);
    crossNumber+=cross(point3x,point3y,point2x,point2y,Px,Py,-1.234,-1.234);
    crossNumber+=cross(point4x,point4y,point3x,point3y,Px,Py,-1.234,-1.234);
    crossNumber+=cross(point1x,point1y,point4x,point4y,Px,Py,-1.234,-1.234);
    if(crossNumber==1||crossNumber==3){
        return 1;
    }else if(crossNumber==0||crossNumber==2||crossNumber==4){
        return 0;
    }else{
        std::cout<<"line is crossing convex square 3,4times"<<endl;
        exit(1);
    }
}

double contain_pentagon(double point1x,double point1y,double point2x,double point2y,double point3x,double point3y,double point4x,double point4y,double point5x,double point5y,double Px,double Py){
    int crossNumber=0;
    crossNumber+=cross(point1x,point1y,point2x,
    point2y,Px,Py,-1.234,-1.234);
    crossNumber+=cross(point3x,point3y,point2x,point2y,Px,Py,-1.234,-1.234);
    crossNumber+=cross(point4x,point4y,point3x,point3y,Px,Py,-1.234,-1.234);
    crossNumber+=cross(point5x,point5y,point4x,
    point4y,Px,Py,-1.234,-1.234);
    crossNumber+=cross(point5x,point5y,point1x,point1y,Px,Py,-1.234,-1.234);
    if(crossNumber==1||crossNumber==3||crossNumber==5){
        return 1;
    }else if(crossNumber==0||crossNumber==2||crossNumber==4){
        return 0;
    }else{
        std::cout<<"line is crossing pentagon 5times"<<endl;
        exit(1);
    }
}

tuple<double,double,int> where_are_rulings_cross_points2d(double A_x,double A_y,double B_x,double B_y){
    int count=0,line=0;
    errorCnt++; 
    if(cross(A_x,A_y,B_x,B_y,0,-100,0,100)==1){
        count++;
        line=1;
    }else if(cross(A_x,A_y,B_x,B_y,200,100,0,100)==1){
        count++;
        line=2;
    }else if(cross(A_x,A_y,B_x,B_y,200,-100,200,100)==1){
        count++;
        line=3;
    }else if(cross(A_x,A_y,B_x,B_y,0,-100,200,-100)==1){
        count++;
        line=4;
    }
    if(count==1){
        switch(line){
            case 1: return forward_as_tuple(0,(B_y-A_y)/(B_x-A_x)*(0-A_x)+A_y,1);
            case 2: return forward_as_tuple((B_x-A_x)/(B_y-A_y)*(100-A_y)+A_x,100,2);
            case 3: return forward_as_tuple(200,(B_y-A_y)/(B_x-A_x)*(200-A_x)+A_y,3);
            case 4: return forward_as_tuple((B_x-A_x)/(B_y-A_y)*(-100-A_y)+A_x,-100,4);
            default: std::cout<<"ruling and borderline error "<<endl;
                exit(1);
        }
    }else{
        std::cout<<"ruling crossed "<<count<<" borderlines "<<errorCnt<<endl;
        std::cout<<A_x<<" "<<A_y<<" "<<B_x<<" "<<B_y<<endl;
        exit(1);
    }
}

tuple<double,double,int> where_are_rulings_expantion_cross_points2d(double A_x,double A_y,double B_x,double B_y){
    int count=0,line=0;
    errorCnt++; 
    if(cross(A_x,A_y,B_x,B_y,100-BORDEREXPANTION*100,-BORDEREXPANTION*100,100-BORDEREXPANTION*100,BORDEREXPANTION*100)==1){
        count++;
        line=1;
    }else if(cross(A_x,A_y,B_x,B_y,100-BORDEREXPANTION*100,BORDEREXPANTION*100,100+BORDEREXPANTION*100,BORDEREXPANTION*100)==1){
        count++;
        line=2;
    }else if(cross(A_x,A_y,B_x,B_y,100+BORDEREXPANTION*100,-BORDEREXPANTION*100,100+BORDEREXPANTION*100,BORDEREXPANTION*100)==1){
        count++;
        line=3;
    }else if(cross(A_x,A_y,B_x,B_y,100-BORDEREXPANTION*100,-BORDEREXPANTION*100,100+BORDEREXPANTION*100,-BORDEREXPANTION*100)==1){
        count++;
        line=4;
    }
    if(count==1){
        switch(line){
            case 1: return forward_as_tuple(100-BORDEREXPANTION*100,(B_y-A_y)/(B_x-A_x)*(0-A_x)+A_y,line);
            case 2: return forward_as_tuple((B_x-A_x)/(B_y-A_y)*(100-A_y)+A_x,BORDEREXPANTION*100,line);
            case 3: return forward_as_tuple(100+BORDEREXPANTION*100,(B_y-A_y)/(B_x-A_x)*(200-A_x)+A_y,line);
            case 4: return forward_as_tuple((B_x-A_x)/(B_y-A_y)*(-100-A_y)+A_x,-BORDEREXPANTION*100,line);
            default: std::cout<<"ruling and borderline error "<<endl;
                exit(1);
        }
    }else{
        std::cout<<"ruling crossed "<<count<<" borderlines "<<errorCnt<<endl;
        std::cout<<A_x<<" "<<A_y<<" "<<B_x<<" "<<B_y<<endl;
        exit(1);
    }
}

int collision_triangle_and_line3d(double v0x,double v0y,double v0z,double v1x,double v1y,double v1z,double v2x,double v2y,double v2z,double e0x,double e0y,double e0z,double e1x,double e1y,double e1z){
    if((v0x==e0x&&v0y==e0y&&v0z==e0z)||(v1x==e0x&&v1y==e0y&&v1z==e0z)||(v2x==e0x&&v2y==e0y&&v2z==e0z)||(v0x==e1x&&v0y==e1y&&v0z==e1z)||(v1x==e1x&&v1y==e1y&&v1z==e1z)||(v2x==e1x&&v2y==e1y&&v2z==e1z)){
        return 0;
    }
    double v0tov1[3]={v1x-v0x,v1y-v0y,v1z-v0z};
    double v0tov2[3]={v2x-v0x,v2y-v0y,v2z-v0z};
    double v1tov2[3]={v2x-v1x,v2y-v1y,v2z-v1z};
    double n[3]={v0tov1[1]*v0tov2[2]-v0tov1[2]*v0tov2[1],v0tov1[2]*v0tov2[0]-v0tov1[0]*v0tov2[2],v0tov1[0]*v0tov2[1]-v0tov1[1]*v0tov2[0]};
    double t=-(n[0]*(e0x-v0x)+n[1]*(e0y-v0y)+n[2]*(e0z-v0z))/(n[0]*(e1x-e0x)+n[1]*(e1y-e0y)+n[2]*(e1z-e0z));
    if(t>0 && t<1){
        double p[3]={e0x+(e1x-e0x)*t,e0y+(e1y-e0y)*t,e0z+(e1z-e0z)*t};
        double x[3]={v0tov1[1]*n[2]-v0tov1[2]*n[1],v0tov1[2]*n[0]-v0tov1[0]*n[2],v0tov1[0]*n[1]-v0tov1[1]*n[0]};
        if((v0tov2[0]*x[0]+v0tov2[1]*x[1]+v0tov2[2]*x[2])*((p[0]-v0x)*x[0]+(p[1]-v0y)*x[1]+(p[2]-v0z)*x[2])<=0){
            return 0;
        }
        x[0]=v0tov2[1]*n[2]-v0tov2[2]*n[1];
        x[1]=v0tov2[2]*n[0]-v0tov2[0]*n[2];
        x[2]=v0tov2[0]*n[1]-v0tov2[1]*n[0];
        if((v0tov1[0]*x[0]+v0tov1[1]*x[1]+v0tov1[2]*x[2])*((p[0]-v0x)*x[0]+(p[1]-v0y)*x[1]+(p[2]-v0z)*x[2])<=0){
            return 0;
        }
        x[0]=v1tov2[1]*n[2]-v1tov2[2]*n[1];
        x[1]=v1tov2[2]*n[0]-v1tov2[0]*n[2];
        x[2]=v1tov2[0]*n[1]-v1tov2[1]*n[0];
        if(-(v0tov1[0]*x[0]+v0tov1[1]*x[1]+v0tov1[2]*x[2])*((p[0]-v1x)*x[0]+(p[1]-v1y)*x[1]+(p[2]-v1z)*x[2])<=0){
            return 0;
        }
        return 1;
    }
    return 0;
}

int collision_triangle3d(double t1p1x,double t1p1y,double t1p1z,double t1p2x,double t1p2y,double t1p2z,double t1p3x,double t1p3y,double t1p3z,double t2p1x,double t2p1y,double t2p1z,double t2p2x,double t2p2y,double t2p2z,double t2p3x,double t2p3y,double t2p3z){
    if((t1p1x==t2p1x && t1p1y==t2p1y && t1p1z==t2p1z)||(t1p1x==t2p2x && t1p1y==t2p2y && t1p1z==t2p2z)||(t1p1x==t2p3x && t1p1y==t2p3y && t1p1z==t2p3z)){
        return 0;
    }
    if((t1p2x==t2p1x && t1p2y==t2p1y && t1p2z==t2p1z)||(t1p2x==t2p2x && t1p2y==t2p2y && t1p2z==t2p2z)||(t1p2x==t2p3x && t1p2y==t2p3y && t1p2z==t2p3z)){
        return 0;
    }
    if((t1p3x==t2p1x && t1p3y==t2p1y && t1p3z==t2p1z)||(t1p3x==t2p2x && t1p3y==t2p2y && t1p3z==t2p2z)||(t1p3x==t2p3x && t1p3y==t2p3y && t1p3z==t2p3z)){
        return 0;
    }
    if(collision_triangle_and_line3d(t1p1x,t1p1y,t1p1z,t1p2x,t1p2y,t1p2z,t1p3x,t1p3y,t1p3z,t2p1x,t2p1y,t2p1z,t2p2x,t2p2y,t2p2z)==1){
        return 1;
    }
    if(collision_triangle_and_line3d(t1p1x,t1p1y,t1p1z,t1p2x,t1p2y,t1p2z,t1p3x,t1p3y,t1p3z,t2p1x,t2p1y,t2p1z,t2p3x,t2p3y,t2p3z)==1){
        return 1;
    }
    if(collision_triangle_and_line3d(t1p1x,t1p1y,t1p1z,t1p2x,t1p2y,t1p2z,t1p3x,t1p3y,t1p3z,t2p3x,t2p3y,t2p3z,t2p2x,t2p2y,t2p2z)==1){
        return 1;
    }
    if(collision_triangle_and_line3d(t2p1x,t2p1y,t2p1z,t2p2x,t2p2y,t2p2z,t2p3x,t2p3y,t2p3z,t1p1x,t1p1y,t1p1z,t1p2x,t1p2y,t1p2z)==1){
        return 1;
    }
    if(collision_triangle_and_line3d(t2p1x,t2p1y,t2p1z,t2p2x,t2p2y,t2p2z,t2p3x,t2p3y,t2p3z,t1p1x,t1p1y,t1p1z,t1p3x,t1p3y,t1p3z)==1){
        return 1;
    }
    if(collision_triangle_and_line3d(t2p1x,t2p1y,t2p1z,t2p2x,t2p2y,t2p2z,t2p3x,t2p3y,t2p3z,t1p3x,t1p3y,t1p3z,t1p2x,t1p2y,t1p2z)==1){
        return 1;
    }
    return 0;
}

vector<double> collisionPoint3d(double v0x,double v0y,double v0z,double v1x,double v1y,double v1z,double v2x,double v2y,double v2z,double e0x,double e0y,double e0z,double e1x,double e1y,double e1z){
    double v0tov1[3]={v1x-v0x,v1y-v0y,v1z-v0z};
    double v0tov2[3]={v2x-v0x,v2y-v0y,v2z-v0z};
    double v1tov2[3]={v2x-v1x,v2y-v1y,v2z-v1z};
    double n[3]={v0tov1[1]*v0tov2[2]-v0tov1[2]*v0tov2[1],v0tov1[2]*v0tov2[0]-v0tov1[0]*v0tov2[2],v0tov1[0]*v0tov2[1]-v0tov1[1]*v0tov2[0]};
    double t=-(n[0]*(e0x-v0x)+n[1]*(e0y-v0y)+n[2]*(e0z-v0z))/(n[0]*(e1x-e0x)+n[1]*(e1y-e0y)+n[2]*(e1z-e0z));
    return {e0x+(e1x-e0x)*t,e0y+(e1y-e0y)*t,e0z+(e1z-e0z)*t};
}


void collision_triangle3d_model_and_brace(vector<vector<vector<vector<double>>>>& bracePoints,int braceNumber,double t1p1x,double t1p1y,double t1p1z,double t1p2x,double t1p2y,double t1p2z,double t1p3x,double t1p3y,double t1p3z,double t2p1x,double t2p1y,double t2p1z,double t2p2x,double t2p2y,double t2p2z,double t2p3x,double t2p3y,double t2p3z){
    if((t1p1x==t2p1x && t1p1y==t2p1y && t1p1z==t2p1z)||(t1p1x==t2p2x && t1p1y==t2p2y && t1p1z==t2p2z)||(t1p1x==t2p3x && t1p1y==t2p3y && t1p1z==t2p3z)){
        return;
    }
    if((t1p2x==t2p1x && t1p2y==t2p1y && t1p2z==t2p1z)||(t1p2x==t2p2x && t1p2y==t2p2y && t1p2z==t2p2z)||(t1p2x==t2p3x && t1p2y==t2p3y && t1p2z==t2p3z)){
        return;
    }
    if((t1p3x==t2p1x && t1p3y==t2p1y && t1p3z==t2p1z)||(t1p3x==t2p2x && t1p3y==t2p2y && t1p3z==t2p2z)||(t1p3x==t2p3x && t1p3y==t2p3y && t1p3z==t2p3z)){
        return;
    }
    vector<vector<double>> oneBracePoints={};
    if(collision_triangle_and_line3d(t1p1x,t1p1y,t1p1z,t1p2x,t1p2y,t1p2z,t1p3x,t1p3y,t1p3z,t2p1x,t2p1y,t2p1z,t2p2x,t2p2y,t2p2z)==1){
        oneBracePoints.push_back(collisionPoint3d(t1p1x,t1p1y,t1p1z,t1p2x,t1p2y,t1p2z,t1p3x,t1p3y,t1p3z,t2p1x,t2p1y,t2p1z,t2p2x,t2p2y,t2p2z));
    }
    if(collision_triangle_and_line3d(t1p1x,t1p1y,t1p1z,t1p2x,t1p2y,t1p2z,t1p3x,t1p3y,t1p3z,t2p1x,t2p1y,t2p1z,t2p3x,t2p3y,t2p3z)==1){
        oneBracePoints.push_back(collisionPoint3d(t1p1x,t1p1y,t1p1z,t1p2x,t1p2y,t1p2z,t1p3x,t1p3y,t1p3z,t2p1x,t2p1y,t2p1z,t2p3x,t2p3y,t2p3z));
    }
    if(collision_triangle_and_line3d(t1p1x,t1p1y,t1p1z,t1p2x,t1p2y,t1p2z,t1p3x,t1p3y,t1p3z,t2p3x,t2p3y,t2p3z,t2p2x,t2p2y,t2p2z)==1){
        oneBracePoints.push_back(collisionPoint3d(t1p1x,t1p1y,t1p1z,t1p2x,t1p2y,t1p2z,t1p3x,t1p3y,t1p3z,t2p3x,t2p3y,t2p3z,t2p2x,t2p2y,t2p2z));
    }
    if(collision_triangle_and_line3d(t2p1x,t2p1y,t2p1z,t2p2x,t2p2y,t2p2z,t2p3x,t2p3y,t2p3z,t1p1x,t1p1y,t1p1z,t1p2x,t1p2y,t1p2z)==1){
        oneBracePoints.push_back(collisionPoint3d(t2p1x,t2p1y,t2p1z,t2p2x,t2p2y,t2p2z,t2p3x,t2p3y,t2p3z,t1p1x,t1p1y,t1p1z,t1p2x,t1p2y,t1p2z));
    }
    if(collision_triangle_and_line3d(t2p1x,t2p1y,t2p1z,t2p2x,t2p2y,t2p2z,t2p3x,t2p3y,t2p3z,t1p1x,t1p1y,t1p1z,t1p3x,t1p3y,t1p3z)==1){
        oneBracePoints.push_back(collisionPoint3d(t2p1x,t2p1y,t2p1z,t2p2x,t2p2y,t2p2z,t2p3x,t2p3y,t2p3z,t1p1x,t1p1y,t1p1z,t1p3x,t1p3y,t1p3z));
    }
    if(collision_triangle_and_line3d(t2p1x,t2p1y,t2p1z,t2p2x,t2p2y,t2p2z,t2p3x,t2p3y,t2p3z,t1p3x,t1p3y,t1p3z,t1p2x,t1p2y,t1p2z)==1){
        oneBracePoints.push_back(collisionPoint3d(t2p1x,t2p1y,t2p1z,t2p2x,t2p2y,t2p2z,t2p3x,t2p3y,t2p3z,t1p3x,t1p3y,t1p3z,t1p2x,t1p2y,t1p2z));
    }
    if(oneBracePoints.size()>0){
        bracePoints[braceNumber].push_back(oneBracePoints);
    }
}

class curvedFoldingModel{
public:
    int kindOfCrossEdge[2][SAMPLENUM]={0},kindOfCrossEdgeControl[2][NUM]={0},costPointsWhichRuling[9][9][2]={0},check[9][9]={0},cornerRuling[4]={-1,-1,-1,-1},pentagonOrNot[2][2]={},triangleOrNot[2][2]={};
    double ModelNum[3]={0},dx[SAMPLENUM],betaControl[2][NUM]={0},beta[2][SAMPLENUM]={0},betaVector[4][SAMPLENUM]={0},betaVectorControl[4][NUM]={0},alpha[SAMPLENUM]={0},dalpha[SAMPLENUM]={0},x3d[3][SAMPLENUM]={0},t3d[3][SAMPLENUM]={0},n3d[3][SAMPLENUM]={0},b3d[3][SAMPLENUM]={0},gamma[6][SAMPLENUM]={0},rulingLength[2][SAMPLENUM]={0},rulingLengthControl[2][NUM]={0},borderPoints2d[4][SAMPLENUM]={0},borderPoints2dControl[4][NUM]={0},borderPoints3d[6][SAMPLENUM]={0},tao[SAMPLENUM]={0},k3d[SAMPLENUM]={0},polygonPoints3d[SAMPLENUM][2][4][3]={},costPointsWhere3d[9][9][3]={0},curveCrossPoints3d[2][3]={0},cornerPoints2d[4][3]={0},cornerPoints3d[4][3]={0},cost=10000,
    normalVectorOfBase[3]={0,0,0},
    baseCornerPoints3d[4]{};
    double baseVector1[3];
    double baseVector2[3];
    double basePoints[4][3];
    vector<vector<vector<double>>> bracePointsUnCut;
    vector<vector<vector<vector<double>>>> bracePoints;

    void name(int a,int b,double c){
        this->ModelNum[0]=a;
        this->ModelNum[1]=b;
        this->ModelNum[2]=c;
    }


    int check_ruling_cross2d(){
        int cross_countL=0,cross_countR=0;
        for (int i = 3; i < SAMPLENUM-4; i++)    
        {
            if(cross(x2d[0][i],x2d[1][i],this->borderPoints2d[0][i],this->borderPoints2d[1][i],x2d[0][i+1],x2d[1][i+1],this->borderPoints2d[0][i+1],this->borderPoints2d[1][i+1])==1){
                cross_countL++;
            }
            if(cross(x2d[0][i],x2d[1][i],this->borderPoints2d[2][i],this->borderPoints2d[3][i],x2d[0][i+1],x2d[1][i+1],this->borderPoints2d[2][i+1],this->borderPoints2d[3][i+1])==1){
                cross_countR++;
            }
        }
        double vectors[2][2]={},vecLen;
        for (int k = 0; k < 2; k++){
            vectors[0][0]=(curveCrossPoints2d[k][0]-x2d[0][startToEnd[k]]);
            vectors[0][1]=(curveCrossPoints2d[k][1]-x2d[1][startToEnd[k]]);
            vecLen=sqrt(pow(vectors[0][0],2)+pow(vectors[0][1],2));
            vectors[0][0]/=vecLen;
            vectors[0][1]/=vecLen;
            for(int j=0;j<2;j++){
                vectors[1][0]=(borderPoints2d[0+j*2][startToEnd[k]]-x2d[0][startToEnd[k]]);
                vectors[1][1]=(borderPoints2d[1+j*2][startToEnd[k]]-x2d[1][startToEnd[k]]);
                vecLen=sqrt(pow(vectors[1][0],2)+pow(vectors[1][1],2));
                vectors[1][0]/=vecLen;
                vectors[1][1]/=vecLen;
                if((vectors[0][1]*vectors[1][0]-vectors[0][0]*vectors[1][1])*pow(-1,k+j)<=0){
                    cross_countL++;
                }
            }
        }
        if(cross_countL>0||cross_countR>0){
            return 1;
        }
        return 0;
    }
    
    void where_are_rulings_cross_points3d(){
        for (int i = 3; i < SAMPLENUM-3; i++)
        {
            this->borderPoints3d[0][i]=this->x3d[0][i]+this->gamma[0][i]*this->rulingLength[0][i];
            this->borderPoints3d[1][i]=this->x3d[1][i]+this->gamma[1][i]*this->rulingLength[0][i];
            this->borderPoints3d[2][i]=this->x3d[2][i]+this->gamma[2][i]*this->rulingLength[0][i];
            this->borderPoints3d[3][i]=this->x3d[0][i]+this->gamma[3][i]*this->rulingLength[1][i];
            this->borderPoints3d[4][i]=this->x3d[1][i]+this->gamma[4][i]*this->rulingLength[1][i];
            this->borderPoints3d[5][i]=this->x3d[2][i]+this->gamma[5][i]*this->rulingLength[1][i];
        }
    }

    void where_are_corner_points2d(){
        int i=0,j=0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if(fabs(this->kindOfCrossEdge[j][startToEnd[i]]-curveCrossPoints2d[i][2])==1||fabs(int(this->kindOfCrossEdge[j][startToEnd[i]])%4-int(curveCrossPoints2d[i][2])%4)==1){
                    if((curveCrossPoints2d[i][2]==1&&this->kindOfCrossEdge[j][startToEnd[i]]==2)||(curveCrossPoints2d[i][2]==2&&this->kindOfCrossEdge[j][startToEnd[i]]==1)){
                        this->cornerPoints2d[i*2+j][0]=0;
                        this->cornerPoints2d[i*2+j][1]=100;
                        this->cornerPoints2d[i*2+j][2]=1;
                    
                    }else if((curveCrossPoints2d[i][2]==2&&this->kindOfCrossEdge[i][startToEnd[i]]==3)||(curveCrossPoints2d[i][2]==3&&this->kindOfCrossEdge[j][startToEnd[i]]==2)){
                        this->cornerPoints2d[i*2+j][0]=200;
                        this->cornerPoints2d[i*2+j][1]=100;
                        this->cornerPoints2d[i*2+j][2]=2;
                    }else if((curveCrossPoints2d[i][2]==4&&this->kindOfCrossEdge[j][startToEnd[i]]==3)||(curveCrossPoints2d[i][2]==3&&this->kindOfCrossEdge[j][startToEnd[i]]==4)){
                        this->cornerPoints2d[i*2+j][0]=200;
                        this->cornerPoints2d[i*2+j][1]=-100;
                        this->cornerPoints2d[i*2+j][2]=3;
                    }else{
                        this->cornerPoints2d[i*2+j][0]=0;
                        this->cornerPoints2d[i*2+j][1]=-100;
                        this->cornerPoints2d[i*2+j][2]=4;
                    }
                }else if(this->kindOfCrossEdge[j][startToEnd[i]]==curveCrossPoints2d[i][2]){
                    triangleOrNot[i][j]=1;
                    if((curveCrossPoints2d[i][2]==1&&borderPoints2d[2*j+1][startToEnd[i]]>curveCrossPoints2d[i][1])||(curveCrossPoints2d[i][2]==2&&borderPoints2d[2*j][startToEnd[i]]<curveCrossPoints2d[i][0])){
                        this->cornerPoints2d[i*2+j][0]=0;
                        this->cornerPoints2d[i*2+j][1]=100;
                        this->cornerPoints2d[i*2+j][2]=1;
                    }else if((curveCrossPoints2d[i][2]==2&&borderPoints2d[2*j][startToEnd[i]]>curveCrossPoints2d[i][0])||(curveCrossPoints2d[i][2]==3&&borderPoints2d[2*j+1][startToEnd[i]]>curveCrossPoints2d[i][1])){
                        this->cornerPoints2d[i*2+j][0]=200;
                        this->cornerPoints2d[i*2+j][1]=100;
                        this->cornerPoints2d[i*2+j][2]=2;
                    }else if((curveCrossPoints2d[i][2]==3&&borderPoints2d[2*j+1][startToEnd[i]]<curveCrossPoints2d[i][1])||(curveCrossPoints2d[i][2]==4&&borderPoints2d[2*j][startToEnd[i]]>curveCrossPoints2d[i][0])){
                        this->cornerPoints2d[i*2+j][0]=200;
                        this->cornerPoints2d[i*2+j][1]=-100;
                        this->cornerPoints2d[i*2+j][2]=3;
                    }else{
                        this->cornerPoints2d[i*2+j][0]=0;
                        this->cornerPoints2d[i*2+j][1]=-100;
                        this->cornerPoints2d[i*2+j][2]=4;
                    }
                }else{
                    pentagonOrNot[i][j]=1;
                    if((curveCrossPoints2d[0][2]==1&&i==0&&j==0)||(curveCrossPoints2d[0][2]==2&&i==0&&j==1)||(curveCrossPoints2d[0][2]==3&&i==1&&j==1)||(curveCrossPoints2d[0][2]==4&&i==1&&j==0)){
                        this->cornerPoints2d[i*2+j][0]=0;
                        this->cornerPoints2d[i*2+j][1]=100;
                        this->cornerPoints2d[i*2+j][2]=1;
                    }else if((curveCrossPoints2d[0][2]==1&&i==1&&j==0)||(curveCrossPoints2d[0][2]==2&&i==0&&j==0)||(curveCrossPoints2d[0][2]==3&&i==0&&j==1)||(curveCrossPoints2d[0][2]==4&&i==1&&j==1)){
                        this->cornerPoints2d[i*2+j][0]=200;
                        this->cornerPoints2d[i*2+j][1]=100;
                        this->cornerPoints2d[i*2+j][2]=2;
                    }else if((curveCrossPoints2d[0][2]==1&&i==1&&j==1)||(curveCrossPoints2d[0][2]==2&&i==1&&j==0)||(curveCrossPoints2d[0][2]==3&&i==0&&j==0)||(curveCrossPoints2d[0][2]==4&&i==0&&j==1)){
                        this->cornerPoints2d[i*2+j][0]=200;
                        this->cornerPoints2d[i*2+j][1]=-100;
                        this->cornerPoints2d[i*2+j][2]=3;
                    }else{
                        this->cornerPoints2d[i*2+j][0]=0;
                        this->cornerPoints2d[i*2+j][1]=-100;
                        this->cornerPoints2d[i*2+j][2]=4;
                    }
                }
            }
        }
    }
    int calculate_2d(double betaToInsert[2][NUM]){
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < NUM; j++){
                this->betaControl[i][j]=betaToInsert[i][j];
            }
        }
        spline(this->beta[0],this->betaControl[0]);
        spline(this->beta[1],this->betaControl[1]);
        for (int i = 0; i < SAMPLENUM; i++)
        {
            this->betaVector[0][i]=cos(this->beta[0][i])*t2d[0][i]-sin(this->beta[0][i])*t2d[1][i];
            this->betaVector[1][i]=sin(this->beta[0][i])*t2d[0][i]+cos(this->beta[0][i])*t2d[1][i];
            this->betaVector[2][i]=cos(-this->beta[1][i])*t2d[0][i]-sin(-this->beta[1][i])*t2d[1][i];
            this->betaVector[3][i]=sin(-this->beta[1][i])*t2d[0][i]+cos(-this->beta[1][i])*t2d[1][i];
            double denominator=sqrt(betaVector[0][i]*betaVector[0][i]+betaVector[1][i]*betaVector[1][i]);
            betaVector[0][i]/=denominator;
            betaVector[1][i]/=denominator;
            denominator=sqrt(betaVector[2][i]*betaVector[2][i]+betaVector[3][i]*betaVector[3][i]);
            betaVector[2][i]/=denominator;
            betaVector[3][i]/=denominator; 
        }
        
        for (int i = 3; i < SAMPLENUM-3; i++)
        {
            double a=0,b=0;
            int c=0;
            std::tie(a,b,c)=where_are_rulings_cross_points2d(x2d[0][i],x2d[1][i],x2d[0][i]+400*this->betaVector[0][i],x2d[1][i]+400*this->betaVector[1][i]);
            this->borderPoints2d[0][i]=a;
            this->borderPoints2d[1][i]=b;
            this->kindOfCrossEdge[0][i]=c;
            std::tie(a,b,c)=where_are_rulings_cross_points2d(x2d[0][i],x2d[1][i],x2d[0][i]+400*this->betaVector[2][i],x2d[1][i]+400*this->betaVector[3][i]);
            this->borderPoints2d[2][i]=a;
            this->borderPoints2d[3][i]=b;
            this->kindOfCrossEdge[1][i]=c;
            this->rulingLength[0][i]=distance2d(x2d[0][i],x2d[1][i],this->borderPoints2d[0][i],this->borderPoints2d[1][i]);
            this->rulingLength[1][i]=distance2d(x2d[0][i],x2d[1][i],this->borderPoints2d[2][i],this->borderPoints2d[3][i]);
            if(i!=3){
                if(kindOfCrossEdge[0][i-1]!=kindOfCrossEdge[0][i]){
                    if(kindOfCrossEdge[0][i-1]==curveCrossPoints2d[0][2]){
                        cornerRuling[0]=i-1;
                    }else{
                        cornerRuling[2]=i-1;
                    }
                }
                if(kindOfCrossEdge[1][i-1]!=kindOfCrossEdge[1][i]){
                    if(kindOfCrossEdge[1][i-1]==curveCrossPoints2d[0][2]){
                        cornerRuling[1]=i-1;
                    }else{
                        cornerRuling[3]=i-1;
                    }
                }
            }
        }
        if(this->check_ruling_cross2d()){
            return -1;
        }
        this->where_are_corner_points2d();
        if(curveCrossPoints2d[0][2]==curveCrossPoints2d[1][2]){
            std::cout<<this->ModelNum[0]<<" "<<this->ModelNum[1]<<" "<<this->ModelNum[2]<<endl;
            std::cout<<"start and end are on the same edge"<<endl;
            exit(1);
        }
        
        return 1;
    }

    void draw_2d(){
        float Float=0;
        for (int i = 0; i <3; i++)
        {
            Float=this->ModelNum[i];
            std::cout<<Float<<" ";
        }
        std::cout<<endl;
        for (int i = 3; i < SAMPLENUM-3; i++)
        {
            Float=x2d[0][i];
            std::cout<<Float<<" ";
        }
        std::cout<<endl;
        for (int i = 3; i < SAMPLENUM-3; i++)
        {
            Float=x2d[1][i];
            std::cout<<Float<<" ";
        }
        std::cout<<endl;
        for (int i = 3; i < SAMPLENUM-3; i++)
        {
            Float=this->borderPoints2d[0][i];
            std::cout<<Float<<" ";
        }
        std::cout<<endl;    
        for (int i = 3; i < SAMPLENUM-3; i++)
        {
            Float=this->borderPoints2d[1][i];
            std::cout<<Float<<" ";
        }
        std::cout<<endl;    
        for (int i = 3; i < SAMPLENUM-3; i++)
        {
            Float=this->borderPoints2d[2][i];
            std::cout<<Float<<" ";
        }
        std::cout<<endl;    
        for (int i = 3; i < SAMPLENUM-3; i++)
        {
            Float=this->borderPoints2d[3][i];
            std::cout<<Float<<" ";
        }
        std::cout<<endl;    
        for (int i = 0; i < 3; i++)
        {
            Float=curveCrossPoints2d[0][i];
            std::cout<<Float<<" ";
        }
        std::cout<<endl;    
        for (int i = 0; i < 3; i++)
        {
            Float=curveCrossPoints2d[1][i];
            std::cout<<Float<<" ";

        }
        std::cout<<endl;    
        // for (int i = 0; i < 9; i++)
        // {
        //     for (int j = 0; j < 9; j++)
        //     {
        //         Float=costPointsWhere2d[i][j][0];
        //         std::cout<<Float<<" ";
        //         Float=costPointsWhere2d[i][j][1];
        //         std::cout<<Float<<" ";
        //         std::cout<<endl;    
        //     }
        // }
    }
    void where_are_corner_points3d(){
        double curveCrossPointToCorner=0,A=0,B=0;
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                if(fabs(this->kindOfCrossEdge[j][startToEnd[i]]-curveCrossPoints2d[i][2])==1||fabs(int(this->kindOfCrossEdge[j][startToEnd[i]])%4-int(curveCrossPoints2d[i][2])%4)==1){
                    double vector1[2]={curveCrossPoints2d[i][0]-x2d[0][startToEnd[i]],curveCrossPoints2d[i][1]-x2d[1][startToEnd[i]]};
                    double vector2[2]={this->borderPoints2d[2*j][startToEnd[i]]-x2d[0][startToEnd[i]],this->borderPoints2d[2*j+1][startToEnd[i]]-x2d[1][startToEnd[i]]};
                    double vector3[2]={this->cornerPoints2d[i*2+j][0]-x2d[0][startToEnd[i]],this->cornerPoints2d[i*2+j][1]-x2d[1][startToEnd[i]]};
                    double c=vector2[0]*vector1[1]-vector2[1]*vector1[0];
                    double x[2]={(vector1[1]*vector3[0]-vector1[0]*vector3[1])/c,-(vector2[1]*vector3[0]-vector2[0]*vector3[1])/c};

                    this->cornerPoints3d[i*2+j][0]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][0]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][0]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][0])*x[0]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][0]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][0])*x[1];

                    this->cornerPoints3d[i*2+j][1]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][1]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][1]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][1])*x[0]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][1]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][1])*x[1];

                    this->cornerPoints3d[i*2+j][2]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][2]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][2]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][2])*x[0]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][2]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][2])*x[1];
                }else if(this->kindOfCrossEdge[j][startToEnd[i]]==curveCrossPoints2d[i][2]){
                    if(pentagonOrNot[1-i][j]!=1){
                        double vector1[2]={this->borderPoints2d[2*j][this->cornerRuling[i*2+j]+1]-this->borderPoints2d[2*j][this->cornerRuling[i*2+j]],this->borderPoints2d[1+2*j][this->cornerRuling[i*2+j]+1]-this->borderPoints2d[1+2*j][this->cornerRuling[i*2+j]]};
                        double vector2[2]={this->borderPoints2d[2*j][this->cornerRuling[i*2+j]]-x2d[0][this->cornerRuling[i*2+j]],this->borderPoints2d[1+2*j][this->cornerRuling[i*2+j]]-x2d[1][this->cornerRuling[i*2+j]]};
                        double vector3[2]={this->cornerPoints2d[i*2+j][0]-borderPoints2d[2*j+0][this->cornerRuling[i*2+j]],this->cornerPoints2d[i*2+j][1]-borderPoints2d[2*j+1][this->cornerRuling[i*2+j]]};
                        double c=vector2[0]*vector1[1]-vector2[1]*vector1[0];
                        double x[2]={(vector1[1]*vector3[0]-vector1[0]*vector3[1])/c,-(vector2[1]*vector3[0]-vector2[0]*vector3[1])/c};

                        this->cornerPoints3d[i*2+j][0]=polygonPoints3d[this->cornerRuling[i*2+j]][j][3][0]+(polygonPoints3d[this->cornerRuling[i*2+j]][j][3][0]-polygonPoints3d[this->cornerRuling[i*2+j]][j][0][0])*x[0]+(polygonPoints3d[this->cornerRuling[i*2+j]][j][2][0]-polygonPoints3d[this->cornerRuling[i*2+j]][j][3][0])*x[1];

                        this->cornerPoints3d[i*2+j][1]=polygonPoints3d[this->cornerRuling[i*2+j]][j][3][1]+(polygonPoints3d[this->cornerRuling[i*2+j]][j][3][1]-polygonPoints3d[this->cornerRuling[i*2+j]][j][0][1])*x[0]+(polygonPoints3d[this->cornerRuling[i*2+j]][j][2][1]-polygonPoints3d[this->cornerRuling[i*2+j]][j][3][1])*x[1];

                        this->cornerPoints3d[i*2+j][2]=polygonPoints3d[this->cornerRuling[i*2+j]][j][3][2]+(polygonPoints3d[this->cornerRuling[i*2+j]][j][3][2]-polygonPoints3d[this->cornerRuling[i*2+j]][j][0][2])*x[0]+(polygonPoints3d[this->cornerRuling[i*2+j]][j][2][2]-polygonPoints3d[this->cornerRuling[i*2+j]][j][3][2])*x[1];
                    }
                }else{
                    double vector1[2]={curveCrossPoints2d[i][0]-x2d[0][startToEnd[i]],curveCrossPoints2d[i][1]-x2d[1][startToEnd[i]]};
                    double vector2[2]={this->borderPoints2d[2*j][startToEnd[i]]-x2d[0][startToEnd[i]],this->borderPoints2d[2*j+1][startToEnd[i]]-x2d[1][startToEnd[i]]};
                    double vector3[2]={this->cornerPoints2d[i*2+j][0]-x2d[0][startToEnd[i]],this->cornerPoints2d[i*2+j][1]-x2d[1][startToEnd[i]]};
                    double c=vector2[0]*vector1[1]-vector2[1]*vector1[0];
                    double x[2]={(vector1[1]*vector3[0]-vector1[0]*vector3[1])/c,-(vector2[1]*vector3[0]-vector2[0]*vector3[1])/c};

                    this->cornerPoints3d[i*2+j][0]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][0]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][0]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][0])*x[0]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][0]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][0])*x[1];

                    this->cornerPoints3d[i*2+j][1]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][1]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][1]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][1])*x[0]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][1]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][1])*x[1];

                    this->cornerPoints3d[i*2+j][2]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][2]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][2]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][2])*x[0]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][2]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][2])*x[1];

                    vector1[0]=curveCrossPoints2d[i][0]-x2d[0][startToEnd[i]];
                    vector1[1]=curveCrossPoints2d[i][1]-x2d[1][startToEnd[i]];
                    vector2[0]=this->borderPoints2d[2*j][startToEnd[i]]-x2d[0][startToEnd[i]];
                    vector2[1]=this->borderPoints2d[2*j+1][startToEnd[i]]-x2d[1][startToEnd[i]];
                    vector3[0]=this->cornerPoints2d[(1-i)*2+j][0]-x2d[0][startToEnd[i]];
                    vector3[1]=this->cornerPoints2d[(1-i)*2+j][1]-x2d[1][startToEnd[i]];
                    c=vector2[0]*vector1[1]-vector2[1]*vector1[0];
                    x[0]=(vector1[1]*vector3[0]-vector1[0]*vector3[1])/c;
                    x[1]=-(vector2[1]*vector3[0]-vector2[0]*vector3[1])/c;

                    this->cornerPoints3d[(1-i)*2+j][0]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][0]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][0]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][0])*x[0]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][0]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][0])*x[1];

                    this->cornerPoints3d[(1-i)*2+j][1]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][1]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][1]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][1])*x[0]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][1]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][1])*x[1];

                    this->cornerPoints3d[(1-i)*2+j][2]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][2]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][2]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][2])*x[0]+(polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][2]-polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][2])*x[1];
                }
            }
        }
    }

    void between_which_ruling_are_cost_points(){
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                this->check[i][j]=0;
            }
        }
        
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                if(fabs(this->kindOfCrossEdge[j][startToEnd[i]]-curveCrossPoints2d[i][2])==1||fabs(int(this->kindOfCrossEdge[j][startToEnd[i]])%4-int(curveCrossPoints2d[i][2])%4)==1){
                    for (int k = 0; k < 9; k++){
                        for (int l = 0; l < 9; l++){
                            if(contain_square(x2d[0][startToEnd[i]],x2d[1][startToEnd[i]],curveCrossPoints2d[i][0],curveCrossPoints2d[i][1],this->cornerPoints2d[i*2+j][0],this->cornerPoints2d[i*2+j][1],this->borderPoints2d[0+2*j][startToEnd[i]],this->borderPoints2d[1+2*j][startToEnd[i]],costPointsWhere2d[k][l][0],costPointsWhere2d[k][l][1])){
                                this->check[k][l]=1;
                                this->costPointsWhichRuling[k][l][0]=i*(SAMPLENUM-6)+2;
                                this->costPointsWhichRuling[k][l][1]=j;
                            }
                        }
                    }
                }else if(fabs(this->kindOfCrossEdge[j][startToEnd[i]]-curveCrossPoints2d[i][2])==2){
                    for (int k = 0; k < 9; k++){
                        for (int l = 0; l < 9; l++){
                            if(contain_pentagon(x2d[0][startToEnd[i]],x2d[1][startToEnd[i]],curveCrossPoints2d[i][0],curveCrossPoints2d[i][1],this->cornerPoints2d[i*2+j][0],this->cornerPoints2d[i*2+j][1],this->cornerPoints2d[(1-i)*2+j][0],this->cornerPoints2d[(1-i)*2+j][1],this->borderPoints2d[0+2*j][startToEnd[i]],this->borderPoints2d[1+2*j][startToEnd[i]],costPointsWhere2d[k][l][0],costPointsWhere2d[k][l][1])){
                                this->check[k][l]=1;
                                this->costPointsWhichRuling[k][l][0]=i*(SAMPLENUM-6)+2;
                                this->costPointsWhichRuling[k][l][1]=j;
                            }
                        }
                    }
                }else{
                    for (int k = 0; k < 9; k++){
                        for (int l = 0; l < 9; l++){
                            if(contain_triangle(x2d[0][startToEnd[i]],x2d[1][startToEnd[i]],curveCrossPoints2d[i][0],curveCrossPoints2d[i][1],this->borderPoints2d[0+2*j][startToEnd[i]],this->borderPoints2d[1+2*j][startToEnd[i]],costPointsWhere2d[k][l][0],costPointsWhere2d[k][l][1])){
                                this->check[k][l]=1;
                                this->costPointsWhichRuling[k][l][0]=i*(SAMPLENUM-6)+2;
                                this->costPointsWhichRuling[k][l][1]=j;
                            }
                        }
                    }
                }

            }
        }
        double cornerOfEnd[4][2]={};
        switch (int(curveCrossPoints2d[1][2])){
        case 1: 
            cornerOfEnd[0][0]=0;
            cornerOfEnd[0][1]=-100;
            cornerOfEnd[1][0]=200;
            cornerOfEnd[1][1]=-100;
            cornerOfEnd[2][0]=0;
            cornerOfEnd[2][1]=100;
            cornerOfEnd[3][0]=200;
            cornerOfEnd[3][1]=100;
            break;
        case 2: 
            cornerOfEnd[0][0]=0;
            cornerOfEnd[0][1]=100;
            cornerOfEnd[1][0]=0;
            cornerOfEnd[1][1]=-100;
            cornerOfEnd[2][0]=200;
            cornerOfEnd[2][1]=100;
            cornerOfEnd[3][0]=200;
            cornerOfEnd[3][1]=-100;
            break;
        case 3: 
            cornerOfEnd[0][0]=200;
            cornerOfEnd[0][1]=100;
            cornerOfEnd[1][0]=0;
            cornerOfEnd[1][1]=100;
            cornerOfEnd[2][0]=200;
            cornerOfEnd[2][1]=-100;
            cornerOfEnd[3][0]=0;
            cornerOfEnd[3][1]=-100;
            break;            
        case 4: 
            cornerOfEnd[0][0]=200;
            cornerOfEnd[0][1]=-100;
            cornerOfEnd[1][0]=200;
            cornerOfEnd[1][1]=100;
            cornerOfEnd[2][0]=0;
            cornerOfEnd[2][1]=-100;
            cornerOfEnd[3][0]=0;
            cornerOfEnd[3][1]=100;
            break;            
        default:
            std::cout<<"crossed borderline error"<<endl;
            exit(1);
            break;
        }
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if(this->check[i][j]==0){
                    int cycle=0,left=3,right=SAMPLENUM-5;
                    while(1){
                        cycle++;
                        int target=int((left+right)/2);
                        if(contain_square(x2d[0][target],x2d[1][target],x2d[0][target+1],x2d[1][target+1],this->borderPoints2d[0][target+1],this->borderPoints2d[1][target+1],this->borderPoints2d[0][target],this->borderPoints2d[1][target],costPointsWhere2d[i][j][0],costPointsWhere2d[i][j][1])){
                            this->costPointsWhichRuling[i][j][0]=target;
                            this->costPointsWhichRuling[i][j][1]=0;
                            break;
                        }else if(contain_square(x2d[0][target],x2d[1][target],x2d[0][target+1],x2d[1][target+1],this->borderPoints2d[2][target+1],this->borderPoints2d[3][target+1],this->borderPoints2d[2][target],this->borderPoints2d[3][target],costPointsWhere2d[i][j][0],costPointsWhere2d[i][j][1])){
                            this->costPointsWhichRuling[i][j][0]=target;
                            this->costPointsWhichRuling[i][j][1]=1;
                            break;
                        }else if(cornerRuling[0]!=-1&&contain_triangle(borderPoints2d[0][cornerRuling[0]],borderPoints2d[1][cornerRuling[0]],borderPoints2d[0][cornerRuling[0]+1],borderPoints2d[1][cornerRuling[0]+1],cornerPoints2d[0][0],cornerPoints2d[0][1],costPointsWhere2d[i][j][0],costPointsWhere2d[i][j][1])){
                            this->check[i][j]=2;
                            this->costPointsWhichRuling[i][j][0]=cornerRuling[0];
                            this->costPointsWhichRuling[i][j][1]=0;
                            break; 
                        }else if(cornerRuling[2]!=-1&&contain_triangle(borderPoints2d[0][cornerRuling[2]],borderPoints2d[1][cornerRuling[2]],borderPoints2d[0][cornerRuling[2]+1],borderPoints2d[1][cornerRuling[2]+1],cornerPoints2d[2][0],cornerPoints2d[2][1],costPointsWhere2d[i][j][0],costPointsWhere2d[i][j][1])){
                            this->check[i][j]=4;
                            this->costPointsWhichRuling[i][j][0]=cornerRuling[2];
                            this->costPointsWhichRuling[i][j][1]=0;
                            break;
                        }else if(cornerRuling[1]!=-1&&contain_triangle(borderPoints2d[2][cornerRuling[1]],borderPoints2d[3][cornerRuling[1]],borderPoints2d[2][cornerRuling[1]+1],borderPoints2d[3][cornerRuling[1]+1],cornerPoints2d[1][0],cornerPoints2d[1][1],costPointsWhere2d[i][j][0],costPointsWhere2d[i][j][1])){
                            this->check[i][j]=3;
                            this->costPointsWhichRuling[i][j][0]=cornerRuling[1];
                            this->costPointsWhichRuling[i][j][1]=1;
                            break;
                        }else if(cornerRuling[3]!=-1&&contain_triangle(borderPoints2d[2][cornerRuling[3]],borderPoints2d[3][cornerRuling[3]],borderPoints2d[2][cornerRuling[3]+1],borderPoints2d[3][cornerRuling[3]+1],cornerPoints2d[3][0],cornerPoints2d[3][1],costPointsWhere2d[i][j][0],costPointsWhere2d[i][j][1])){
                            this->check[i][j]=5;
                            this->costPointsWhichRuling[i][j][0]=cornerRuling[3];
                            this->costPointsWhichRuling[i][j][1]=1;
                            break;
                        }else if((this->kindOfCrossEdge[0][target+1]==curveCrossPoints2d[1][2]&&contain_square(x2d[0][target+1],x2d[1][target+1],this->borderPoints2d[0][target+1],this->borderPoints2d[1][target+1],cornerOfEnd[0][0],cornerOfEnd[0][1],curveCrossPoints2d[1][0],curveCrossPoints2d[1][1],costPointsWhere2d[i][j][0],costPointsWhere2d[i][j][1]))||(this->kindOfCrossEdge[1][target+1]==curveCrossPoints2d[1][2]&&contain_square(x2d[0][target+1],x2d[1][target+1],this->borderPoints2d[2][target+1],this->borderPoints2d[3][target+1],cornerOfEnd[2][0],cornerOfEnd[2][1],curveCrossPoints2d[1][0],curveCrossPoints2d[1][1],costPointsWhere2d[i][j][0],costPointsWhere2d[i][j][1]))||(this->kindOfCrossEdge[0][target+1]!=curveCrossPoints2d[1][2]&&contain_pentagon(x2d[0][target+1],x2d[1][target+1],this->borderPoints2d[0][target+1],this->borderPoints2d[1][target+1],cornerOfEnd[1][0],cornerOfEnd[1][1],cornerOfEnd[0][0],cornerOfEnd[0][1],curveCrossPoints2d[1][0],curveCrossPoints2d[1][1],costPointsWhere2d[i][j][0],costPointsWhere2d[i][j][1]))||(this->kindOfCrossEdge[1][target+1]!=curveCrossPoints2d[1][2]&&contain_pentagon(x2d[0][target+1],x2d[1][target+1],this->borderPoints2d[2][target+1],this->borderPoints2d[3][target+1],cornerOfEnd[3][0],cornerOfEnd[3][1],cornerOfEnd[2][0],cornerOfEnd[2][1],curveCrossPoints2d[1][0],curveCrossPoints2d[1][1],costPointsWhere2d[i][j][0],costPointsWhere2d[i][j][1]))){
                            left=target+1;
                        }else{
                            right=target-1;
                        }
                        if(cycle==20){
                            std::cout<<this->ModelNum[0]<<" "<<this->ModelNum[1]<<" "<<this->ModelNum[2]<<endl;
                            std::cout<<"two heap rulings search error "<<i<<" "<<j<<" "<<target<<" "<<this->check[i][j]<<endl;
                            exit(1);
                        }
                    }
                }
            }
        }
    }
    void where_are_cost_points3d(){
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if(this->costPointsWhichRuling[i][j][0]==2||this->costPointsWhichRuling[i][j][0]==SAMPLENUM-4){
                    int k=0,l=this->costPointsWhichRuling[i][j][1];
                    double u=0,v=0;
                    if(this->costPointsWhichRuling[i][j][0]==SAMPLENUM-4){
                        k=1;
                    }
                    if(pentagonOrNot[1-k][l]!=1&&pentagonOrNot[k][l]!=1){
                        if(triangleOrNot[k][l]==1){
                            double vector1[2]={this->borderPoints2d[2*l][startToEnd[k]]-x2d[0][startToEnd[k]],this->borderPoints2d[2*l+1][startToEnd[k]]-x2d[1][startToEnd[k]]};
                            double vector2[2]={curveCrossPoints2d[k][0]-x2d[0][startToEnd[k]],curveCrossPoints2d[k][1]-x2d[1][startToEnd[k]]};
                            double vector3[2]={costPointsWhere2d[i][j][0]-x2d[0][startToEnd[k]],costPointsWhere2d[i][j][1]-x2d[1][startToEnd[k]]};
                            double c=vector1[0]*vector2[1]-vector2[0]*vector1[1];
                            double x[2]={(vector2[1]*vector3[0]-vector2[0]*vector3[1])/c,-(vector1[1]*vector3[0]-vector1[0]*vector3[1])/c};

                            costPointsWhere3d[i][j][0]=polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][0]+(polygonPoints3d[k*(SAMPLENUM-6)+2][l][2][0]-polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][0])*x[0]+(polygonPoints3d[k*(SAMPLENUM-6)+2][l][0][0]-polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][0])*x[1];

                            costPointsWhere3d[i][j][1]=polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][1]+(polygonPoints3d[k*(SAMPLENUM-6)+2][l][2][1]-polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][1])*x[0]+(polygonPoints3d[k*(SAMPLENUM-6)+2][l][0][1]-polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][1])*x[1];

                            costPointsWhere3d[i][j][2]=polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][2]+(polygonPoints3d[k*(SAMPLENUM-6)+2][l][2][2]-polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][2])*x[0]+(polygonPoints3d[k*(SAMPLENUM-6)+2][l][0][2]-polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][2])*x[1];
                        }else{
                            if(this->cornerPoints2d[k*2+l][2]==1){
                                if(curveCrossPoints2d[k][2]==1){
                                    u=(100-costPointsWhere2d[i][j][1])/(100-curveCrossPoints2d[k][1]);
                                    v=costPointsWhere2d[i][j][0]/this->borderPoints2d[l*2][startToEnd[k]];
                                }else{
                                    u=costPointsWhere2d[i][j][0]/curveCrossPoints2d[k][0];
                                    v=(100-costPointsWhere2d[i][j][1])/(100-this->borderPoints2d[l*2+1][startToEnd[k]]);
                                }
                            }else if(this->cornerPoints2d[k*2+l][2]==2){
                                if(curveCrossPoints2d[k][2]==2){
                                    u=(200-costPointsWhere2d[i][j][0])/(200-curveCrossPoints2d[k][0]);
                                    v=(100-costPointsWhere2d[i][j][1])/(100-this->borderPoints2d[l*2+1][startToEnd[k]]);
                                }else{
                                    u=(100-costPointsWhere2d[i][j][1])/(100-curveCrossPoints2d[k][1]);
                                    v=(200-costPointsWhere2d[i][j][0])/(200-this->borderPoints2d[l*2][startToEnd[k]]);
                                }
                            }else if(this->cornerPoints2d[k*2+l][2]==3){
                                if(curveCrossPoints2d[k][2]==3){
                                    u=(100+costPointsWhere2d[i][j][1])/(100+curveCrossPoints2d[k][1]);
                                    v=(200-costPointsWhere2d[i][j][0])/(200-this->borderPoints2d[l*2][startToEnd[k]]);
                                }else{
                                    u=(200-costPointsWhere2d[i][j][0])/(200-curveCrossPoints2d[k][0]);
                                    v=(100+costPointsWhere2d[i][j][1])/(100+this->borderPoints2d[l*2+1][startToEnd[k]]);
                                }
                            }else if(this->cornerPoints2d[k*2+l][2]==4){
                                if(curveCrossPoints2d[k][2]==4){
                                    u=costPointsWhere2d[i][j][0]/curveCrossPoints2d[k][0];
                                    v=(100+costPointsWhere2d[i][j][1])/(100+this->borderPoints2d[l*2+1][startToEnd[k]]);
                                }else{
                                    u=(100+costPointsWhere2d[i][j][1])/(100+curveCrossPoints2d[k][1]);
                                    v=costPointsWhere2d[i][j][0]/this->borderPoints2d[l*2][startToEnd[k]];
                                }
                            }
                            this->costPointsWhere3d[i][j][0]=this->cornerPoints3d[k*2+l][0]+u*(polygonPoints3d[k*(SAMPLENUM-6)+2][l][0][0]-this->cornerPoints3d[k*2+l][0])+v*(polygonPoints3d[k*(SAMPLENUM-6)+2][l][2][0]-this->cornerPoints3d[k*2+l][0]);
                            this->costPointsWhere3d[i][j][1]=this->cornerPoints3d[k*2+l][1]+u*(polygonPoints3d[k*(SAMPLENUM-6)+2][l][0][1]-this->cornerPoints3d[k*2+l][1])+v*(polygonPoints3d[k*(SAMPLENUM-6)+2][l][2][1]-this->cornerPoints3d[k*2+l][1]);
                            this->costPointsWhere3d[i][j][2]=this->cornerPoints3d[k*2+l][2]+u*(polygonPoints3d[k*(SAMPLENUM-6)+2][l][0][2]-this->cornerPoints3d[k*2+l][2])+v*(polygonPoints3d[k*(SAMPLENUM-6)+2][l][2][2]-this->cornerPoints3d[k*2+l][2]);
                        }
                    }else if(pentagonOrNot[k][l]==1){
                        double vector1[2]={this->borderPoints2d[2*l][startToEnd[k]]-x2d[0][startToEnd[k]],this->borderPoints2d[2*l+1][startToEnd[k]]-x2d[1][startToEnd[k]]};
                        double vector2[2]={curveCrossPoints2d[k][0]-x2d[0][startToEnd[k]],curveCrossPoints2d[k][1]-x2d[1][startToEnd[k]]};
                        double vector3[2]={costPointsWhere2d[i][j][0]-x2d[0][startToEnd[k]],costPointsWhere2d[i][j][1]-x2d[1][startToEnd[k]]};
                        double c=vector1[0]*vector2[1]-vector2[0]*vector1[1];
                        double x[2]={(vector2[1]*vector3[0]-vector2[0]*vector3[1])/c,-(vector1[1]*vector3[0]-vector1[0]*vector3[1])/c};

                        costPointsWhere3d[i][j][0]=polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][0]+(polygonPoints3d[k*(SAMPLENUM-6)+2][l][2][0]-polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][0])*x[0]+(polygonPoints3d[k*(SAMPLENUM-6)+2][l][0][0]-polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][0])*x[1];

                        costPointsWhere3d[i][j][1]=polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][1]+(polygonPoints3d[k*(SAMPLENUM-6)+2][l][2][1]-polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][1])*x[0]+(polygonPoints3d[k*(SAMPLENUM-6)+2][l][0][1]-polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][1])*x[1];

                        costPointsWhere3d[i][j][2]=polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][2]+(polygonPoints3d[k*(SAMPLENUM-6)+2][l][2][2]-polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][2])*x[0]+(polygonPoints3d[k*(SAMPLENUM-6)+2][l][0][2]-polygonPoints3d[k*(SAMPLENUM-6)+2][l][1][2])*x[1];
                    }else{
                        double vector1[2]={this->borderPoints2d[2*l][startToEnd[(1-k)]]-x2d[0][startToEnd[(1-k)]],this->borderPoints2d[2*l+1][startToEnd[(1-k)]]-x2d[1][startToEnd[(1-k)]]};
                        double vector2[2]={curveCrossPoints2d[(1-k)][0]-x2d[0][startToEnd[(1-k)]],curveCrossPoints2d[(1-k)][1]-x2d[1][startToEnd[(1-k)]]};
                        double vector3[2]={costPointsWhere2d[i][j][0]-x2d[0][startToEnd[(1-k)]],costPointsWhere2d[i][j][1]-x2d[1][startToEnd[(1-k)]]};
                        double c=vector1[0]*vector2[1]-vector2[0]*vector1[1];
                        double x[2]={(vector2[1]*vector3[0]-vector2[0]*vector3[1])/c,-(vector1[1]*vector3[0]-vector1[0]*vector3[1])/c};

                        costPointsWhere3d[i][j][0]=polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][1][0]+(polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][2][0]-polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][1][0])*x[0]+(polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][0][0]-polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][1][0])*x[1];

                        costPointsWhere3d[i][j][1]=polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][1][1]+(polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][2][1]-polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][1][1])*x[0]+(polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][0][1]-polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][1][1])*x[1];

                        costPointsWhere3d[i][j][2]=polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][1][2]+(polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][2][2]-polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][1][2])*x[0]+(polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][0][2]-polygonPoints3d[(1-k)*(SAMPLENUM-6)+2][l][1][2])*x[1];
                    }
                }else{
                    double vector3[2]={costPointsWhere2d[i][j][0]-x2d[0][this->costPointsWhichRuling[i][j][0]],costPointsWhere2d[i][j][1]-x2d[1][this->costPointsWhichRuling[i][j][0]]};
                    double vector1[2]={this->borderPoints2d[2*this->costPointsWhichRuling[i][j][1]][this->costPointsWhichRuling[i][j][0]]-x2d[0][this->costPointsWhichRuling[i][j][0]],this->borderPoints2d[1+2*this->costPointsWhichRuling[i][j][1]][this->costPointsWhichRuling[i][j][0]]-x2d[1][this->costPointsWhichRuling[i][j][0]]};
                    double vector2[2]={x2d[0][this->costPointsWhichRuling[i][j][0]+1]-x2d[0][this->costPointsWhichRuling[i][j][0]],x2d[1][this->costPointsWhichRuling[i][j][0]+1]-x2d[1][this->costPointsWhichRuling[i][j][0]]};
                    double c=vector2[0]*vector1[1]-vector2[1]*vector1[0];
                    double x[2]={(vector1[1]*vector3[0]-vector1[0]*vector3[1])/c,-(vector2[1]*vector3[0]-vector2[0]*vector3[1])/c};

                    this->costPointsWhere3d[i][j][0]=polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][0][0]+(polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][3][0]-polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][0][0])*x[1]+(polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][1][0]-polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][0][0])*x[0];

                    this->costPointsWhere3d[i][j][1]=polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][0][1]+(polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][3][1]-polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][0][1])*x[1]+(polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][1][1]-polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][0][1])*x[0];

                    this->costPointsWhere3d[i][j][2]=polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][0][2]+(polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][3][2]-polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][0][2])*x[1]+(polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][1][2]-polygonPoints3d[costPointsWhichRuling[i][j][0]][costPointsWhichRuling[i][j][1]][0][2])*x[0];
                }
            }
        }
    }

    int check_self_collision(){
        double heresy[8][3][3]={0};
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                if(curveCrossPoints2d[i][2]==this->kindOfCrossEdge[j][startToEnd[i]]){
                    if(pentagonOrNot[1-i][j]!=1){
                        heresy[i*2+j][0][0]=polygonPoints3d[cornerRuling[i*2+j]][j][3][0];
                        heresy[i*2+j][0][1]=polygonPoints3d[cornerRuling[i*2+j]][j][3][1];
                        heresy[i*2+j][0][2]=polygonPoints3d[cornerRuling[i*2+j]][j][3][2];
                        heresy[i*2+j][1][0]=polygonPoints3d[cornerRuling[i*2+j]][j][2][0];
                        heresy[i*2+j][1][1]=polygonPoints3d[cornerRuling[i*2+j]][j][2][1];
                        heresy[i*2+j][1][2]=polygonPoints3d[cornerRuling[i*2+j]][j][2][2];
                        heresy[i*2+j][2][0]=cornerPoints3d[i*2+j][0];
                        heresy[i*2+j][2][1]=cornerPoints3d[i*2+j][1];
                        heresy[i*2+j][2][2]=cornerPoints3d[i*2+j][2];
                    }else{
                        heresy[i*2+j][0][0]=polygonPoints3d[(1-i)*(SAMPLENUM-6)+2][j][2][0];
                        heresy[i*2+j][0][1]=polygonPoints3d[(1-i)*(SAMPLENUM-6)+2][j][2][1];
                        heresy[i*2+j][0][2]=polygonPoints3d[(1-i)*(SAMPLENUM-6)+2][j][2][2];
                        heresy[i*2+j][1][0]=cornerPoints3d[(1-i)*2+j][0];
                        heresy[i*2+j][1][1]=cornerPoints3d[(1-i)*2+j][1];
                        heresy[i*2+j][1][2]=cornerPoints3d[(1-i)*2+j][2];
                        heresy[i*2+j][2][0]=cornerPoints3d[i*2+j][0];
                        heresy[i*2+j][2][1]=cornerPoints3d[i*2+j][1];
                        heresy[i*2+j][2][2]=cornerPoints3d[i*2+j][2];
                    }
                }else{
                    heresy[i*2+j][0][0]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][0];
                    heresy[i*2+j][0][1]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][1];
                    heresy[i*2+j][0][2]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][2];
                    heresy[i*2+j][1][0]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][0];
                    heresy[i*2+j][1][1]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][1];
                    heresy[i*2+j][1][2]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][2];
                    heresy[i*2+j][2][0]=cornerPoints3d[i*2+j][0];
                    heresy[i*2+j][2][1]=cornerPoints3d[i*2+j][1];
                    heresy[i*2+j][2][2]=cornerPoints3d[i*2+j][2];
                }
                heresy[4+i*2+j][0][0]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][0];
                heresy[4+i*2+j][0][1]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][1];
                heresy[4+i*2+j][0][2]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][2];
                heresy[4+i*2+j][1][0]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][0];
                heresy[4+i*2+j][1][1]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][1];
                heresy[4+i*2+j][1][2]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][0][2];
                heresy[4+i*2+j][2][0]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][0];
                heresy[4+i*2+j][2][1]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][1];
                heresy[4+i*2+j][2][2]=polygonPoints3d[i*(SAMPLENUM-6)+2][j][1][2];
            }
        }
        for (int i = 0; i < 7; i++){
            for (int j = i+1; j < 8; j++){
                if((i==4&&j==5)||(i==6&&j==7)){
                    continue;
                }
                if(collision_triangle3d(heresy[i][0][0],heresy[i][0][1],heresy[i][0][2],heresy[i][1][0],heresy[i][1][1],heresy[i][1][2],heresy[i][2][0],heresy[i][2][1],heresy[i][2][2],heresy[j][0][0],heresy[j][0][1],heresy[j][0][2],heresy[j][1][0],heresy[j][1][1],heresy[j][1][2],heresy[j][2][0],heresy[j][2][1],heresy[j][2][2])==1){
                    return i;
                }
                
            }
        }
        for (int i = 0; i < 8; i++){
            for(int j = 4; j < SAMPLENUM-4; j++){
                if(collision_triangle_and_line3d(heresy[i][0][0],heresy[i][0][1],heresy[i][0][2],heresy[i][1][0],heresy[i][1][1],heresy[i][1][2],heresy[i][2][0],heresy[i][2][1],heresy[i][2][2],polygonPoints3d[j][0][0][0],polygonPoints3d[j][0][0][1],polygonPoints3d[j][0][0][2],polygonPoints3d[j][0][3][0],polygonPoints3d[j][0][3][1],polygonPoints3d[j][0][3][2])==1){
                    return j;
                }
                if(collision_triangle_and_line3d(heresy[i][0][0],heresy[i][0][1],heresy[i][0][2],heresy[i][1][0],heresy[i][1][1],heresy[i][1][2],heresy[i][2][0],heresy[i][2][1],heresy[i][2][2],polygonPoints3d[j][1][0][0],polygonPoints3d[j][1][0][1],polygonPoints3d[j][1][0][2],polygonPoints3d[j][1][3][0],polygonPoints3d[j][1][3][1],polygonPoints3d[j][1][3][2])==1){
                    return j;
                }
            }
        }
        for (int i = 3; i < SAMPLENUM-6; i++){
            for(int j = i+2; j < SAMPLENUM-4; j++){
                for (int k = 0; k < 2; k++){
                    for (int l = 0; l < 2; l++){
                        if(collision_triangle_and_line3d(polygonPoints3d[i][k][0][0],polygonPoints3d[i][k][0][1],polygonPoints3d[i][k][0][2],polygonPoints3d[i][k][1][0],polygonPoints3d[i][k][1][1],polygonPoints3d[i][k][1][2],polygonPoints3d[i][k][3][0],polygonPoints3d[i][k][3][1],polygonPoints3d[i][k][3][2],polygonPoints3d[j][l][0][0],polygonPoints3d[j][l][0][1],polygonPoints3d[j][l][0][2],polygonPoints3d[j][l][3][0],polygonPoints3d[j][l][3][1],polygonPoints3d[j][l][3][2])==1||collision_triangle_and_line3d(polygonPoints3d[i][k][2][0],polygonPoints3d[i][k][2][1],polygonPoints3d[i][k][2][2],polygonPoints3d[i][k][1][0],polygonPoints3d[i][k][1][1],polygonPoints3d[i][k][1][2],polygonPoints3d[i][k][3][0],polygonPoints3d[i][k][3][1],polygonPoints3d[i][k][3][2],polygonPoints3d[j][l][0][0],polygonPoints3d[j][l][0][1],polygonPoints3d[j][l][0][2],polygonPoints3d[j][l][3][0],polygonPoints3d[j][l][3][1],polygonPoints3d[j][l][3][2])==1){
                            return j;
                        }
                    }
                }
            }
        }
        // for(int i=0;i<2;i++){
        //     for(int j=0;j<2;j++){
        //         if(pentagonOrNot[i][j]==1){
        //             for(int k=0;k<8;k++){
        //                 if(collision_triangle3d(heresy[k][0][0],heresy[k][0][1],heresy[k][0][2],heresy[k][1][0],heresy[k][1][1],heresy[k][1][2],heresy[k][2][0],heresy[k][2][1],heresy[k][2][2],polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][0],polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][1],polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][2],cornerPoints3d[i*2+j][0],cornerPoints3d[i*2+j][1],cornerPoints3d[i*2+j][2],cornerPoints3d[(1-i)*2+j][0],cornerPoints3d[(1-i)*2+j][1],cornerPoints3d[(1-i)*2+j][2])==1){
        //                     return 1;
        //                 }
        //             }
        //             for(int k=4;k<SAMPLENUM-4;k++){
        //                 if(collision_triangle_and_line3d(polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][0],polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][1],polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][2],cornerPoints3d[i*2+j][0],cornerPoints3d[i*2+j][1],cornerPoints3d[i*2+j][2],cornerPoints3d[(1-i)*2+j][0],cornerPoints3d[(1-i)*2+j][1],cornerPoints3d[(1-i)*2+j][2],polygonPoints3d[k][0][0][0],polygonPoints3d[k][0][0][1],polygonPoints3d[k][0][0][2],polygonPoints3d[k][0][3][0],polygonPoints3d[k][0][3][1],polygonPoints3d[k][0][3][2])==1||collision_triangle_and_line3d(polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][0],polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][1],polygonPoints3d[i*(SAMPLENUM-6)+2][j][2][2],cornerPoints3d[i*2+j][0],cornerPoints3d[i*2+j][1],cornerPoints3d[i*2+j][2],cornerPoints3d[(1-i)*2+j][0],cornerPoints3d[(1-i)*2+j][1],cornerPoints3d[(1-i)*2+j][2],polygonPoints3d[k][1][0][0],polygonPoints3d[k][1][0][1],polygonPoints3d[k][1][0][2],polygonPoints3d[k][1][3][0],polygonPoints3d[k][1][3][1],polygonPoints3d[k][1][3][2])==1){
        //                     return k;
        //                 }

        //             }
        //         }
        //     }
        // }
        return 0;
    }
int calculate_3d(double alphaControl[NUM],double taoControl[NUM]){
        double datana[SAMPLENUM], ttana[SAMPLENUM], alpha_[SAMPLENUM], da_[SAMPLENUM], tr_[SAMPLENUM];
	    double tan_a, minalpha, maxalpha;
        
        spline(alpha,alphaControl);
        spline(tao,taoControl);

        for (int i = 0; i < SAMPLENUM; i++){
            if(this->alpha[i]>=PI/2||this->alpha[i]<=-PI/2){
                // std::cout<<this->ModelNum[0]<<" "<<this->ModelNum[1]<<" "<<this->ModelNum[2]<<endl;
                // std::cout<<"alpha is out of range"<<endl;
                return -1;
            }
        }
        
        for (int i = 0; i < SAMPLENUM; i++){
            this->k3d[i]=k2d[i]/cos(this->alpha[i]);
        }
        if(k3d[0]==0&&k3d[1]==0&&k3d[SAMPLENUM-2]==0&&k3d[SAMPLENUM-1]==0){
            k3d[0]=k3d[1]=k3d[2];
            k3d[SAMPLENUM-1]=k3d[SAMPLENUM-2]=k3d[SAMPLENUM-3];
        }
        if(tao[0]==0&&tao[1]==0&&tao[2]==0&&tao[SAMPLENUM-3]==0&&tao[SAMPLENUM-2]==0&&k3d[SAMPLENUM-1]==0){
            tao[0]=tao[1]=tao[2]=tao[3];
            tao[SAMPLENUM-1]=tao[SAMPLENUM-2]=tao[SAMPLENUM-3]=tao[SAMPLENUM-4];
        }
        this->x3d[0][0]=x2d[0][0];
        this->x3d[1][0]=x2d[1][0];
        this->x3d[2][0]=0;
        this->t3d[0][0]=t2d[0][0];
        this->t3d[1][0]=t2d[1][0];
        this->n3d[0][0]=-this->t3d[1][0];
        this->n3d[1][0]=this->t3d[0][0];
        // this->b3d[0][0]=this->t3d[1][1]*this->n3d[2][0]-this->t3d[2][0]*this->n3d[1][0];
        // this->b3d[1][0]=this->t3d[2][1]*this->n3d[0][0]-this->t3d[0][0]*this->n3d[2][0];
        // this->b3d[2][0]=this->t3d[0][1]*this->n3d[1][0]-this->t3d[1][0]*this->n3d[0][0];
        this->b3d[2][0]=1;
        double denominator=sqrt(this->b3d[0][0]*this->b3d[0][0]+this->b3d[1][0]*this->b3d[1][0]+this->b3d[2][0]*this->b3d[2][0]);
        this->b3d[0][0]/=denominator;
        this->b3d[1][0]/=denominator;
        this->b3d[2][0]/=denominator;
        this->t3d[0][1]=this->t3d[0][0]+this->k3d[0]*dxdef*this->n3d[0][0];
        this->t3d[1][1]=this->t3d[1][0]+this->k3d[0]*dxdef*this->n3d[1][0];
        this->t3d[2][1]=this->t3d[2][0]+this->k3d[0]*dxdef*this->n3d[2][0];
        denominator=sqrt(this->t3d[0][1]*this->t3d[0][1]+this->t3d[1][1]*this->t3d[1][1]+this->t3d[2][1]*this->t3d[2][1]);
        this->t3d[0][1]/=denominator;
        this->t3d[1][1]/=denominator;
        this->t3d[2][1]/=denominator;
        this->n3d[0][1]=this->n3d[0][0]-this->k3d[0]*dxdef*this->t3d[0][0]+tao[0]*dxdef*this->b3d[0][0];
        this->n3d[1][1]=this->n3d[1][0]-this->k3d[0]*dxdef*this->t3d[1][0]+tao[0]*dxdef*this->b3d[1][0];
        this->n3d[2][1]=this->n3d[2][0]-this->k3d[0]*dxdef*this->t3d[2][0]+tao[0]*dxdef*this->b3d[2][0];
        denominator=sqrt(this->n3d[0][1]*this->n3d[0][1]+this->n3d[1][1]*this->n3d[1][1]+this->n3d[2][1]*this->n3d[2][1]);
        this->n3d[0][1]/=denominator;
        this->n3d[1][1]/=denominator;
        this->n3d[2][1]/=denominator;
        this->b3d[0][1]=this->t3d[1][1]*this->n3d[2][1]-this->t3d[2][1]*this->n3d[1][1];
        this->b3d[1][1]=this->t3d[2][1]*this->n3d[0][1]-this->t3d[0][1]*this->n3d[2][1];
        this->b3d[2][1]=this->t3d[0][1]*this->n3d[1][1]-this->t3d[1][1]*this->n3d[0][1];
        denominator=sqrt(this->b3d[0][1]*this->b3d[0][1]+this->b3d[1][1]*this->b3d[1][1]+this->b3d[2][1]*this->b3d[2][1]);
        this->b3d[0][1]/=denominator;
        this->b3d[1][1]/=denominator;
        this->b3d[2][1]/=denominator;
        denominator=sqrt(pow(this->t3d[0][0]+this->t3d[0][1],2)+pow(this->t3d[1][0]+this->t3d[1][1],2)+pow(this->t3d[2][0]+this->t3d[2][1],2));
        this->x3d[0][1]=this->x3d[0][0]+dxdef*(this->t3d[0][0]+this->t3d[0][1])/denominator;
        this->x3d[1][1]=this->x3d[1][0]+dxdef*(this->t3d[1][0]+this->t3d[1][1])/denominator;
        this->x3d[2][1]=this->x3d[2][0]+dxdef*(this->t3d[2][0]+this->t3d[2][1])/denominator;
        for (int i = 2; i < SAMPLENUM; i++){
            this->t3d[0][i]=this->t3d[0][i-2]+2*this->k3d[i-1]*dxdef*this->n3d[0][i-1];
            this->t3d[1][i]=this->t3d[1][i-2]+2*this->k3d[i-1]*dxdef*this->n3d[1][i-1];
            this->t3d[2][i]=this->t3d[2][i-2]+2*this->k3d[i-1]*dxdef*this->n3d[2][i-1];
            denominator=sqrt(this->t3d[0][i]*this->t3d[0][i]+this->t3d[1][i]*this->t3d[1][i]+this->t3d[2][i]*this->t3d[2][i]);
            this->t3d[0][i]/=denominator;
            this->t3d[1][i]/=denominator;
            this->t3d[2][i]/=denominator;
            this->n3d[0][i]=this->n3d[0][i-2]-2*this->k3d[i-1]*dxdef*this->t3d[0][i-1]+2*tao[i-1]*dxdef*this->b3d[0][i-1];
            this->n3d[1][i]=this->n3d[1][i-2]-2*this->k3d[i-1]*dxdef*this->t3d[1][i-1]+2*tao[i-1]*dxdef*this->b3d[1][i-1];
            this->n3d[2][i]=this->n3d[2][i-2]-2*this->k3d[i-1]*dxdef*this->t3d[2][i-1]+2*tao[i-1]*dxdef*this->b3d[2][i-1];
            denominator=sqrt(this->n3d[0][i]*this->n3d[0][i]+this->n3d[1][i]*this->n3d[1][i]+this->n3d[2][i]*this->n3d[2][i]);
            this->n3d[0][i]/=denominator;
            this->n3d[1][i]/=denominator;
            this->n3d[2][i]/=denominator;
            this->b3d[0][i]=this->t3d[1][i]*this->n3d[2][i]-this->t3d[2][i]*this->n3d[1][i];
            this->b3d[1][i]=this->t3d[2][i]*this->n3d[0][i]-this->t3d[0][i]*this->n3d[2][i];
            this->b3d[2][i]=this->t3d[0][i]*this->n3d[1][i]-this->t3d[1][i]*this->n3d[0][i];
            denominator=sqrt(this->b3d[0][i]*this->b3d[0][i]+this->b3d[1][i]*this->b3d[1][i]+this->b3d[2][i]*this->b3d[2][i]);
            this->b3d[0][i]/=denominator;
            this->b3d[1][i]/=denominator;
            this->b3d[2][i]/=denominator;
            denominator=sqrt(pow(this->t3d[0][i-1]+this->t3d[0][i],2)+pow(this->t3d[1][i-1]+this->t3d[1][i],2)+pow(this->t3d[2][i-1]+this->t3d[2][i],2));
            this->x3d[0][i]=this->x3d[0][i-1]+dxdef*(this->t3d[0][i-1]+this->t3d[0][i])/denominator;
            this->x3d[1][i]=this->x3d[1][i-1]+dxdef*(this->t3d[1][i-1]+this->t3d[1][i])/denominator;
            this->x3d[2][i]=this->x3d[2][i-1]+dxdef*(this->t3d[2][i-1]+this->t3d[2][i])/denominator;
        }
        double dx1_[SAMPLENUM],dx3d[SAMPLENUM],dy3d[SAMPLENUM],dz3d[SAMPLENUM];
        for(int i=0;i<SAMPLENUM-1;i++){
            dx3d[i]=x3d[0][i+1]-x3d[0][i];
            dy3d[i]=x3d[1][i+1]-x3d[1][i];
            dz3d[i]=x3d[2][i+1]-x3d[2][i];
            dx1_[i]=sqrt(dx3d[i]*dx3d[i]+dy3d[i]*dy3d[i]+dz3d[i]*dz3d[i]);
        }
        for (int i = 1; i < SAMPLENUM-1; i++){
            if( dx1_[i-1]==0.0 && dx1_[i]==0.0 ){
                t3d[0][i] = t3d[1][i] = t3d[2][i] = dx[i] = 0.0;
                continue;
            }
            if( dx1_[i-1]>0.0 && dx1_[i]>0.0 ){
                t3d[0][i] = (dx3d[i-1]/dx1_[i-1] + dx3d[i]/dx1_[i])*0.5;
                t3d[1][i] = (dy3d[i-1]/dx1_[i-1] + dy3d[i]/dx1_[i])*0.5;
                t3d[2][i] = (dz3d[i-1]/dx1_[i-1] + dz3d[i]/dx1_[i])*0.5;
                dx[i] = (dx1_[i-1]+dx1_[i])*0.5;
            } else if( dx1_[i-1]>0.0 ){
                t3d[0][i] = dx3d[i-1];
                t3d[1][i] = dy3d[i-1];
                t3d[2][i] = dz3d[i-1];
                dx[i] = dx1_[i-1];
            } else{
                t3d[0][i] = dx3d[i];
                t3d[1][i] = dy3d[i];
                t3d[2][i] = dz3d[i];
                dx[i] = dx1_[i];
            }
            denominator=sqrt(this->t3d[0][i]*this->t3d[0][i]+this->t3d[1][i]*this->t3d[1][i]+this->t3d[2][i]*this->t3d[2][i]);
            this->t3d[0][i]/=denominator;
            this->t3d[1][i]/=denominator;
            this->t3d[2][i]/=denominator;
        }
        for (int i = 2; i < SAMPLENUM-2; i++){
            double d0 = dx1_[i];
            double d1 = dx1_[i-1];
            double nx0 = t3d[0][i+1] - t3d[0][i];
            double nx1 = t3d[0][i]   - t3d[0][i-1];
            double ny0 = t3d[1][i+1] - t3d[1][i];
            double ny1 = t3d[1][i]   - t3d[1][i-1];
            double nz0 = t3d[2][i+1] - t3d[2][i];
            double nz1 = t3d[2][i]   - t3d[2][i-1];

            if( d0<=0.0 && d1<=0.0 ){
                n3d[0][i] = n3d[1][i] = n3d[2][i] = k3d[i] = 0.0;
                continue;
            }
            if( d0>0.0 && d1>0.0 ){
                n3d[0][i] = (nx0/d0 + nx1/d1)*0.5;
                n3d[1][i] = (ny0/d0 + ny1/d1)*0.5;
                n3d[2][i] = (nz0/d0 + nz1/d1)*0.5;
            } else if( d0>0.0 ){
                n3d[0][i] = nx0;
                n3d[1][i] = ny0;
                n3d[2][i] = nz0;
            } else {
                n3d[0][i] = nx1;
                n3d[1][i] = ny1;
                n3d[2][i] = nz1;
            }
            k3d[i] = sqrt( n3d[0][i]*n3d[0][i] + n3d[1][i]*n3d[1][i] + n3d[2][i]*n3d[2][i] );
            if((i==2 && n3d[0][i]*n3d[0][0] + n3d[1][i]*n3d[1][0] + n3d[2][i]*n3d[2][0] < 0)||(i>2 && n3d[0][i]*n3d[0][i-1] + n3d[1][i]*n3d[1][i-1] + n3d[2][i]*n3d[2][i-1] < 0)){
                k3d[i]*=-1;
            }
            if( fabs(k3d[i]) > 0.0){
                n3d[0][i] /= k3d[i];
                n3d[1][i] /= k3d[i];
                n3d[2][i] /= k3d[i];
            }
        }
        for (int i = 2; i < SAMPLENUM-2; i++){
            this->b3d[0][i]=this->t3d[1][i]*this->n3d[2][i]-this->t3d[2][i]*this->n3d[1][i];
            this->b3d[1][i]=this->t3d[2][i]*this->n3d[0][i]-this->t3d[0][i]*this->n3d[2][i];
            this->b3d[2][i]=this->t3d[0][i]*this->n3d[1][i]-this->t3d[1][i]*this->n3d[0][i];
        }
        for(int i=2;i<SAMPLENUM-2;i++){
            double dTx=0,dTy=0,dTz=0, dNx=0,dNy=0,dNz=0, dBx=0,dBy=0,dBz=0;
            double nktx=0,nkty=0,nktz=0, bx=0,by=0,bz=0, t0=0,t1=0, ip0=0,ip1=0;
            double dx0,dx1,dy0,dy1,dz0,dz1,d0,d1;
            dx0=x3d[0][i+1]-x3d[0][i];
            dx1=x3d[0][i]-x3d[0][i-1];
            dy0 = x3d[1][i+1] - x3d[1][i];
            dy1 = x3d[1][i]   - x3d[1][i-1];
            dz0 = x3d[2][i+1] - x3d[2][i];
            dz1 = x3d[2][i]   - x3d[2][i-1];
            d0 = sqrt( dx0*dx0 + dy0*dy0 + dz0*dz0 );
            d1 = sqrt( dx1*dx1 + dy1*dy1 + dz1*dz1 );
            if(d0==0||d1==0){
                continue;
            }          
            dx0 = t3d[0][i+1] - t3d[0][i];
            dx1 = t3d[0][i]   - t3d[0][i-1];
            dy0 = t3d[1][i+1] - t3d[1][i];
            dy1 = t3d[1][i]   - t3d[1][i-1];
            dz0 = t3d[2][i+1] - t3d[2][i];
            dz1 = t3d[2][i]   - t3d[2][i-1];
            dTx = (dx0/d0 + dx1/d1)*0.5;
            dTy = (dy0/d0 + dy1/d1)*0.5;
            dTz = (dz0/d0 + dz1/d1)*0.5;

            dx0 = n3d[0][i+1] - n3d[0][i];
            dx1 = n3d[0][i]   - n3d[0][i-1];
            dy0 = n3d[1][i+1] - n3d[1][i];
            dy1 = n3d[1][i]   - n3d[1][i-1];
            dz0 = n3d[2][i+1] - n3d[2][i];
            dz1 = n3d[2][i]   - n3d[2][i-1];
            dNx = (dx0/d0 + dx1/d1)*0.5;
            dNy = (dy0/d0 + dy1/d1)*0.5;
            dNz = (dz0/d0 + dz1/d1)*0.5;

            dx0 = b3d[0][i+1] - b3d[0][i];
            dx1 = b3d[0][i]   - b3d[0][i-1];
            dy0 = b3d[1][i+1] - b3d[1][i];
            dy1 = b3d[1][i]   - b3d[1][i-1];
            dz0 = b3d[2][i+1] - b3d[2][i];
            dz1 = b3d[2][i]   - b3d[2][i-1];
            dBx = (dx0/d0 + dx1/d1)*0.5;
            dBy = (dy0/d0 + dy1/d1)*0.5;
            dBz = (dz0/d0 + dz1/d1)*0.5;

            // N' = -k*T + t*B -> t = (N'+kT)/B
            nktx = dNx+k3d[i]*t3d[0][i];
            nkty = dNy+k3d[i]*t3d[1][i];
            nktz = dNz+k3d[i]*t3d[2][i];
            t0 = sqrt( nktx*nktx + nkty*nkty + nktz*nktz );
            if( t0!=0 ){
                nktx /= t0;
                nkty /= t0;
                nktz /= t0;
            } else {
                nktx = nkty = nktz = 0.0;
            }
            ip0 = nktx*b3d[0][i] + nkty*b3d[1][i] + nktz*b3d[2][i];

            // B' = -t*N -> t = -B'/N
            bx = -dBx;
            by = -dBy;
            bz = -dBz;
            t1 = sqrt( bx*bx + by*by + bz*bz );
            if( t1!=0 ){
                bx /= t1;
                by /= t1;
                bz /= t1;
            } else {
                bx = by = bz = 0.0;
            }
            ip1 = bx*n3d[0][i] + by*n3d[1][i] + bz*n3d[2][i];

            if( fabs(ip0) >= 0.99 && fabs(ip0) >= fabs(ip1) ){
                if( ip0>0 ){
                    tao[i] = t0;
                } else {
                    tao[i] = -t0;
                }
            } else if( fabs(ip1) >= 0.99 && fabs(ip1) >= fabs(ip0) ){
                if( ip1>0 ){
                    tao[i] = t1;
                } else {
                    tao[i] = -t1;
                }
            } else {
                tao[i] = 0.0;
            }
        }
        for(int i=1;i<SAMPLENUM-1;i++){
            double dx0 = x3d[0][i+1] - x3d[0][i];
            double dx1 = x3d[0][i]   - x3d[0][i-1];
            double dy0 = x3d[1][i+1] - x3d[1][i];
            double dy1 = x3d[1][i]   - x3d[1][i-1];
            double dz0 = x3d[2][i+1] - x3d[2][i];
            double dz1 = x3d[2][i]   - x3d[2][i-1];
            double d0 = sqrt( dx0*dx0 + dy0*dy0 + dz0*dz0 );
            double d1 = sqrt( dx1*dx1 + dy1*dy1 + dz1*dz1 );
            double da0 = alpha[i+1] - alpha[i];
            double da1 = alpha[i]   - alpha[i-1];
            if( d0<=0.0 && d1<=0.0 ){
                dalpha[i] = 0.0;
                continue;
            }
            if( d0>0.0 && d1>0.0 ){
                dalpha[i] = (da0/d0 + da1/d1)*0.5;
            } else if( d0>0.0 ){
                dalpha[i] = da0;
            } else {
                dalpha[i] = da1;
            }
        }
        for(int i=0;i<4;i++){
            cornerRuling[i]=0;
            for(int j=0;j<3;j++){
                cornerPoints2d[i][j]=0;
            }
        }    
    
        for(int i=3; i<SAMPLENUM-3; i++ ){
            if( sin(alpha[i])*k3d[i]==0.0 ){
                beta[0][i] = beta[1][i] = PI/2.0;
                continue;
            }
            beta[0][i]=atan(1/((dalpha[i]+tao[i])/(sin(alpha[i])*k3d[i]))); 
            if( beta[0][i] < 0.0 ){
                beta[0][i] += PI;
            }
            beta[1][i]=atan(1/((-dalpha[i]+tao[i])/(sin(alpha[i])*k3d[i]))); 
            if( beta[1][i] < 0.0 ){
                beta[1][i] += PI;
            }
        }

        for(int i=0;i<NUM;i++){
            // betaControlIdx[i]=(int)((double)i*(double)SAMPLENUM/(double)(NUM-1)+0.5);
            if(i==0&&betaControlIdx[i]<3){
                betaControlIdx[i]=3;
            }
            if(i==NUM-1&&betaControlIdx[i]>=SAMPLENUM-3){
                betaControlIdx[i]=SAMPLENUM-4;
            }
            betaControl[0][i]=beta[0][betaControlIdx[i]];
            betaControl[1][i]=beta[1][betaControlIdx[i]];
        }


        for (int i = 3; i < SAMPLENUM-3; i++)
        {
            this->betaVector[0][i]=cos(this->beta[0][i])*t2d[0][i]-sin(this->beta[0][i])*t2d[1][i];
            this->betaVector[1][i]=sin(this->beta[0][i])*t2d[0][i]+cos(this->beta[0][i])*t2d[1][i];
            this->betaVector[2][i]=cos(-this->beta[1][i])*t2d[0][i]-sin(-this->beta[1][i])*t2d[1][i];
            this->betaVector[3][i]=sin(-this->beta[1][i])*t2d[0][i]+cos(-this->beta[1][i])*t2d[1][i];
            denominator=sqrt(betaVector[0][i]*betaVector[0][i]+betaVector[1][i]*betaVector[1][i]);
            betaVector[0][i]/=denominator;
            betaVector[1][i]/=denominator;
            denominator=sqrt(betaVector[2][i]*betaVector[2][i]+betaVector[3][i]*betaVector[3][i]);
            betaVector[2][i]/=denominator;
            betaVector[3][i]/=denominator; 
        }
        
        for (int i = 3; i < SAMPLENUM-3; i++)
        {
            double a=0,b=0;
            int c=0;
            std::tie(a,b,c)=where_are_rulings_cross_points2d(x2d[0][i],x2d[1][i],x2d[0][i]+400*this->betaVector[0][i],x2d[1][i]+400*this->betaVector[1][i]);
            this->borderPoints2d[0][i]=a;
            this->borderPoints2d[1][i]=b;
            this->kindOfCrossEdge[0][i]=c;
            std::tie(a,b,c)=where_are_rulings_cross_points2d(x2d[0][i],x2d[1][i],x2d[0][i]+400*this->betaVector[2][i],x2d[1][i]+400*this->betaVector[3][i]);
            this->borderPoints2d[2][i]=a;
            this->borderPoints2d[3][i]=b;
            this->kindOfCrossEdge[1][i]=c;
            this->rulingLength[0][i]=distance2d(x2d[0][i],x2d[1][i],this->borderPoints2d[0][i],this->borderPoints2d[1][i]);
            this->rulingLength[1][i]=distance2d(x2d[0][i],x2d[1][i],this->borderPoints2d[2][i],this->borderPoints2d[3][i]);
            if(i!=3){
                if(kindOfCrossEdge[0][i-1]!=kindOfCrossEdge[0][i]){
                    if(kindOfCrossEdge[0][i-1]==curveCrossPoints2d[0][2]){
                        cornerRuling[0]=i-1;
                    }else{
                        cornerRuling[2]=i-1;
                    }
                }
                if(kindOfCrossEdge[1][i-1]!=kindOfCrossEdge[1][i]){
                    if(kindOfCrossEdge[1][i-1]==curveCrossPoints2d[0][2]){
                        cornerRuling[1]=i-1;
                    }else{
                        cornerRuling[3]=i-1;
                    }
                }
            }
        }
        if(this->check_ruling_cross2d()){
            return -2;
        }
        this->where_are_corner_points2d();
        if(curveCrossPoints2d[0][2]==curveCrossPoints2d[1][2]){
            std::cout<<this->ModelNum[0]<<" "<<this->ModelNum[1]<<" "<<this->ModelNum[2]<<endl;
            std::cout<<"start and end are on the same edge"<<endl;
            exit(1);
        }
        // this->between_which_ruling_are_cost_points();

        for (int i = 3; i < SAMPLENUM-3; i++){
            this->gamma[0][i]=cos(this->beta[0][i])*this->t3d[0][i]+sin(this->beta[0][i])*cos(this->alpha[i])*this->n3d[0][i]+sin(this->beta[0][i])*sin(this->alpha[i])*this->b3d[0][i];
            this->gamma[1][i]=cos(this->beta[0][i])*this->t3d[1][i]+sin(this->beta[0][i])*cos(this->alpha[i])*this->n3d[1][i]+sin(this->beta[0][i])*sin(this->alpha[i])*this->b3d[1][i];
            this->gamma[2][i]=cos(this->beta[0][i])*this->t3d[2][i]+sin(this->beta[0][i])*cos(this->alpha[i])*this->n3d[2][i]+sin(this->beta[0][i])*sin(this->alpha[i])*this->b3d[2][i];
            this->gamma[3][i]=cos(this->beta[1][i])*this->t3d[0][i]-sin(this->beta[1][i])*cos(this->alpha[i])*this->n3d[0][i]+sin(this->beta[1][i])*sin(this->alpha[i])*this->b3d[0][i];
            this->gamma[4][i]=cos(this->beta[1][i])*this->t3d[1][i]-sin(this->beta[1][i])*cos(this->alpha[i])*this->n3d[1][i]+sin(this->beta[1][i])*sin(this->alpha[i])*this->b3d[1][i];
            this->gamma[5][i]=cos(this->beta[1][i])*this->t3d[2][i]-sin(this->beta[1][i])*cos(this->alpha[i])*this->n3d[2][i]+sin(this->beta[1][i])*sin(this->alpha[i])*this->b3d[2][i]; 
            denominator=sqrt(gamma[0][i]*gamma[0][i]+gamma[1][i]*gamma[1][i]+gamma[2][i]*gamma[2][i]);
            gamma[0][i]/=denominator;
            gamma[1][i]/=denominator;
            gamma[2][i]/=denominator;
            denominator=sqrt(gamma[3][i]*gamma[3][i]+gamma[4][i]*gamma[4][i]+gamma[5][i]*gamma[5][i]);
            gamma[3][i]/=denominator;
            gamma[4][i]/=denominator;
            gamma[5][i]/=denominator;
        }
        for (int i = 0; i < 2; i++){
            this->curveCrossPoints3d[i][0]=this->x3d[0][startToEnd[i]]+pow(-1,i+1)*curveTipToEdge[i]*this->t3d[0][startToEnd[i]];
            this->curveCrossPoints3d[i][1]=this->x3d[1][startToEnd[i]]+pow(-1,i+1)*curveTipToEdge[i]*this->t3d[1][startToEnd[i]];
            this->curveCrossPoints3d[i][2]=this->x3d[2][startToEnd[i]]+pow(-1,i+1)*curveTipToEdge[i]*this->t3d[2][startToEnd[i]];
        }
        this->where_are_rulings_cross_points3d();
        this->where_are_polygonPoints3d();
        this->where_are_corner_points3d();
        int self_col=this->check_self_collision();
        if(self_col>0){
            // std::cout<<this->ModelNum[0]<<" "<<this->ModelNum[1]<<" "<<this->ModelNum[2]<<endl;
            // std::cout<<"self collision "<<self_col<<endl;
            return -3;
        }
        // this->where_are_cost_points3d();
        return 1; //from TA
    }

    void where_are_polygonPoints3d(){
        int cnt=0;
        for(int i=2;i<=SAMPLENUM-4;i++){
            for(int j=0;j<2;j++){
                double v2d[3][4]={},v3d[3][4]={},mat[16]={},tmp[3][4]={},n[4]={};
                if(i==2){
                    for(int k=0;k<2;k++){
                        tmp[k][0]=v2d[k][0]=curveCrossPoints2d[0][k];
                        tmp[k][1]=v2d[k][1]=x2d[k][3];
                        tmp[k][2]=v2d[k][2]=borderPoints2d[j*2+k][3];
                    }
                    for(int k=0;k<3;k++){
                        v3d[k][0]=curveCrossPoints3d[0][k];
                        v3d[k][1]=x3d[k][3];
                        v3d[k][2]=borderPoints3d[j*3+k][3];
                    }
                    getMat(3,v2d[0],v2d[1],v2d[2],v3d[0],v3d[1],v3d[2],mat,n);
                    for(int k=0;k<3;k++){
                        for(int l=0;l<3;l++){
                            polygonPoints3d[i][j][k][l]=mat[l*4+0]*tmp[0][k]+mat[l*4+1]*tmp[1][k]+mat[l*4+3];
                        }
                    }
                }else if(i==SAMPLENUM-4){
                    for(int k=0;k<2;k++){
                        tmp[k][0]=v2d[k][0]=curveCrossPoints2d[1][k];
                        tmp[k][1]=v2d[k][1]=x2d[k][SAMPLENUM-4];
                        tmp[k][2]=v2d[k][2]=borderPoints2d[j*2+k][SAMPLENUM-4];
                    }
                    for(int k=0;k<3;k++){
                        v3d[k][0]=curveCrossPoints3d[1][k];
                        v3d[k][1]=x3d[k][SAMPLENUM-4];
                        v3d[k][2]=borderPoints3d[j*3+k][SAMPLENUM-4];
                    }
                    getMat(3,v2d[0],v2d[1],v2d[2],v3d[0],v3d[1],v3d[2],mat,n);
                    for(int k=0;k<3;k++){
                        for(int l=0;l<3;l++){
                            polygonPoints3d[i][j][k][l]=mat[l*4+0]*tmp[0][k]+mat[l*4+1]*tmp[1][k]+mat[l*4+3];
                        }
                    }
                }else{
                    for(int k=0;k<2;k++){
                        tmp[k][0]=v2d[k][0]=x2d[k][i];
                        tmp[k][1]=v2d[k][1]=x2d[k][i+1];
                        tmp[k][2]=v2d[k][2]=borderPoints2d[j*2+k][i+1];
                        tmp[k][3]=v2d[k][3]=borderPoints2d[j*2+k][i];
                    }
                    for(int k=0;k<3;k++){
                        v3d[k][0]=x3d[k][i];
                        v3d[k][1]=x3d[k][i+1];
                        v3d[k][2]=borderPoints3d[j*3+k][i+1];
                        v3d[k][3]=borderPoints3d[j*3+k][i];
                    }
                    getMat(4,v2d[0],v2d[1],v2d[2],v3d[0],v3d[1],v3d[2],mat,n);
                    for(int k=0;k<4;k++){
                        for(int l=0;l<3;l++){
                            polygonPoints3d[i][j][k][l]=mat[l*4+0]*tmp[0][k]+mat[l*4+1]*tmp[1][k]+mat[l*4+3];
                        }
                    }
                }
                // if(j==0){
                //     cnt++;
                //     normalVectorOfBase[0]+=n[0];
                //     normalVectorOfBase[1]+=n[1];
                //     normalVectorOfBase[2]+=n[2];
                // }
            }
        }
        // double norm=sqrt(normalVectorOfBase[0]*normalVectorOfBase[0]+normalVectorOfBase[1]*normalVectorOfBase[1]+normalVectorOfBase[2]*normalVectorOfBase[2]);
        // normalVectorOfBase[0]/=-norm;
        // normalVectorOfBase[1]/=-norm;
        // normalVectorOfBase[2]/=-norm;
    }

    void where_are_bracePoints3d(){
        for(int i=2;i<=SAMPLENUM-4;i++){
            normalVectorOfBase[0]+=b3d[0][i];
            normalVectorOfBase[1]+=b3d[1][i];
            normalVectorOfBase[2]+=b3d[2][i];
        }
        

        double normOfBase=sqrt(normalVectorOfBase[0]*normalVectorOfBase[0]+normalVectorOfBase[1]*normalVectorOfBase[1]+normalVectorOfBase[2]*normalVectorOfBase[2]);
        normalVectorOfBase[0]/=-normOfBase;
        normalVectorOfBase[1]/=-normOfBase;
        normalVectorOfBase[2]/=-normOfBase;

        double pointInBase[3]={},borderVector[3]={};
        pointInBase[0]=x3d[0][(int)(SAMPLENUM/2)]+normalVectorOfBase[0]*20;
        pointInBase[1]=x3d[1][(int)(SAMPLENUM/2)]+normalVectorOfBase[1]*20;
        pointInBase[2]=x3d[2][(int)(SAMPLENUM/2)]+normalVectorOfBase[2]*20;
        borderVector[0]=cornerPoints3d[0][0]-curveCrossPoints3d[0][0];
        borderVector[1]=cornerPoints3d[0][1]-curveCrossPoints3d[0][1];
        borderVector[2]=cornerPoints3d[0][2]-curveCrossPoints3d[0][2];
        double cross=normalVectorOfBase[0]*borderVector[0]+normalVectorOfBase[1]*borderVector[1]+normalVectorOfBase[2]*borderVector[2];
        baseVector1[0]=borderVector[0]-cross*normalVectorOfBase[0];
        baseVector1[1]=borderVector[1]-cross*normalVectorOfBase[1];
        baseVector1[2]=borderVector[2]-cross*normalVectorOfBase[2];
        double norm=sqrt(baseVector1[0]*baseVector1[0]+baseVector1[1]*baseVector1[1]+baseVector1[2]*baseVector1[2]);
        baseVector1[0]/=norm;
        baseVector1[1]/=norm;
        baseVector1[2]/=norm;
        
        baseVector2[0]=normalVectorOfBase[1]*baseVector1[2]-normalVectorOfBase[2]*baseVector1[1];
        baseVector2[1]=normalVectorOfBase[2]*baseVector1[0]-normalVectorOfBase[0]*baseVector1[2];
        baseVector2[2]=normalVectorOfBase[0]*baseVector1[1]-normalVectorOfBase[1]*baseVector1[0];

        int left=100,top=80;
        basePoints[0][0]=pointInBase[0]-top*baseVector1[0]-left*baseVector2[0];
        basePoints[0][1]=pointInBase[1]-top*baseVector1[1]-left*baseVector2[1];
        basePoints[0][2]=pointInBase[2]-top*baseVector1[2]-left*baseVector2[2];

        basePoints[1][0]=pointInBase[0]-top*baseVector1[0]+(-left+SIZE_OF_BASE)*baseVector2[0];
        basePoints[1][1]=pointInBase[1]-top*baseVector1[1]+(-left+SIZE_OF_BASE)*baseVector2[1];
        basePoints[1][2]=pointInBase[2]-top*baseVector1[2]+(-left+SIZE_OF_BASE)*baseVector2[2];

        basePoints[2][0]=pointInBase[0]+(-top+SIZE_OF_BASE)*baseVector1[0]+(-left+SIZE_OF_BASE)*baseVector2[0];
        basePoints[2][1]=pointInBase[1]+(-top+SIZE_OF_BASE)*baseVector1[1]+(-left+SIZE_OF_BASE)*baseVector2[1];
        basePoints[2][2]=pointInBase[2]+(-top+SIZE_OF_BASE)*baseVector1[2]+(-left+SIZE_OF_BASE)*baseVector2[2];

        basePoints[3][0]=pointInBase[0]+(-top+SIZE_OF_BASE)*baseVector1[0]-left*baseVector2[0];
        basePoints[3][1]=pointInBase[1]+(-top+SIZE_OF_BASE)*baseVector1[1]-left*baseVector2[1];
        basePoints[3][2]=pointInBase[2]+(-top+SIZE_OF_BASE)*baseVector1[2]-left*baseVector2[2];
        
        double blankBetweenBraces=(int)(SIZE_OF_BASE/(NUMBER_OF_BRACES-1));
        for(int i=0;i<NUMBER_OF_BRACES;i++){
            this->bracePoints.push_back({});
            vector<vector<double>> tmpBracePoints(4,vector<double>(3));
            for(int j=0;j<3;j++){
                tmpBracePoints[0][j]=basePoints[0][j]+i*blankBetweenBraces*baseVector1[j];
                tmpBracePoints[1][j]=basePoints[1][j]+i*blankBetweenBraces*baseVector1[j];
                tmpBracePoints[2][j]=basePoints[1][j]+i*blankBetweenBraces*baseVector1[j]-SIZE_OF_BASE*normalVectorOfBase[j];
                tmpBracePoints[3][j]=basePoints[0][j]+i*blankBetweenBraces*baseVector1[j]-SIZE_OF_BASE*normalVectorOfBase[j];
            }
            bracePointsUnCut.push_back(tmpBracePoints);/////

            for(int k=0;k<2;k++){
                collision_triangle3d_model_and_brace(bracePoints,i
                    ,polygonPoints3d[2][k][0][0],polygonPoints3d[2][k][0][1],polygonPoints3d[2][k][0][2]
                    ,polygonPoints3d[2][k][1][0],polygonPoints3d[2][k][1][1],polygonPoints3d[2][k][1][2]
                    ,polygonPoints3d[2][k][2][0],polygonPoints3d[2][k][2][1],polygonPoints3d[2][k][2][2]
                    ,tmpBracePoints[0][0],tmpBracePoints[0][1],tmpBracePoints[0][2]
                    ,tmpBracePoints[1][0],tmpBracePoints[1][1],tmpBracePoints[1][2]
                    ,tmpBracePoints[2][0],tmpBracePoints[2][1],tmpBracePoints[2][2]
                );
                collision_triangle3d_model_and_brace(bracePoints,i
                    ,polygonPoints3d[2][k][0][0],polygonPoints3d[2][k][0][1],polygonPoints3d[2][k][0][2]
                    ,polygonPoints3d[2][k][1][0],polygonPoints3d[2][k][1][1],polygonPoints3d[2][k][1][2]
                    ,polygonPoints3d[2][k][2][0],polygonPoints3d[2][k][2][1],polygonPoints3d[2][k][2][2]
                    ,tmpBracePoints[0][0],tmpBracePoints[0][1],tmpBracePoints[0][2]
                    ,tmpBracePoints[2][0],tmpBracePoints[2][1],tmpBracePoints[2][2]
                    ,tmpBracePoints[3][0],tmpBracePoints[3][1],tmpBracePoints[3][2]
                );
            }
            for(int j=3;j<SAMPLENUM-4;j++){
                for(int k=0;k<2;k++){
                    collision_triangle3d_model_and_brace(bracePoints,i
                    ,polygonPoints3d[j][k][0][0],polygonPoints3d[j][k][0][1],polygonPoints3d[j][k][0][2]
                    ,polygonPoints3d[j][k][1][0],polygonPoints3d[j][k][1][1],polygonPoints3d[j][k][1][2]
                    ,polygonPoints3d[j][k][2][0],polygonPoints3d[j][k][2][1],polygonPoints3d[j][k][2][2]
                    ,tmpBracePoints[0][0],tmpBracePoints[0][1],tmpBracePoints[0][2]
                    ,tmpBracePoints[1][0],tmpBracePoints[1][1],tmpBracePoints[1][2]
                    ,tmpBracePoints[2][0],tmpBracePoints[2][1],tmpBracePoints[2][2]
                    );
                    collision_triangle3d_model_and_brace(bracePoints,i
                    ,polygonPoints3d[j][k][0][0],polygonPoints3d[j][k][0][1],polygonPoints3d[j][k][0][2]
                    ,polygonPoints3d[j][k][1][0],polygonPoints3d[j][k][1][1],polygonPoints3d[j][k][1][2]
                    ,polygonPoints3d[j][k][2][0],polygonPoints3d[j][k][2][1],polygonPoints3d[j][k][2][2]
                    ,tmpBracePoints[0][0],tmpBracePoints[0][1],tmpBracePoints[0][2]
                    ,tmpBracePoints[2][0],tmpBracePoints[2][1],tmpBracePoints[2][2]
                    ,tmpBracePoints[3][0],tmpBracePoints[3][1],tmpBracePoints[3][2]
                    );
                    collision_triangle3d_model_and_brace(bracePoints,i
                    ,polygonPoints3d[j][k][0][0],polygonPoints3d[j][k][0][1],polygonPoints3d[j][k][0][2]
                    ,polygonPoints3d[j][k][2][0],polygonPoints3d[j][k][2][1],polygonPoints3d[j][k][2][2]
                    ,polygonPoints3d[j][k][3][0],polygonPoints3d[j][k][3][1],polygonPoints3d[j][k][3][2]
                    ,tmpBracePoints[0][0],tmpBracePoints[0][1],tmpBracePoints[0][2]
                    ,tmpBracePoints[1][0],tmpBracePoints[1][1],tmpBracePoints[1][2]
                    ,tmpBracePoints[2][0],tmpBracePoints[2][1],tmpBracePoints[2][2]
                    );
                    collision_triangle3d_model_and_brace(bracePoints,i
                    ,polygonPoints3d[j][k][0][0],polygonPoints3d[j][k][0][1],polygonPoints3d[j][k][0][2]
                    ,polygonPoints3d[j][k][2][0],polygonPoints3d[j][k][2][1],polygonPoints3d[j][k][2][2]
                    ,polygonPoints3d[j][k][3][0],polygonPoints3d[j][k][3][1],polygonPoints3d[j][k][3][2]
                    ,tmpBracePoints[0][0],tmpBracePoints[0][1],tmpBracePoints[0][2]
                    ,tmpBracePoints[2][0],tmpBracePoints[2][1],tmpBracePoints[2][2]
                    ,tmpBracePoints[3][0],tmpBracePoints[3][1],tmpBracePoints[3][2]
                    );
                    
                }
            }
            for(int k=0;k<2;k++){
                collision_triangle3d_model_and_brace(bracePoints,i
                    ,polygonPoints3d[SAMPLENUM-4][k][0][0],polygonPoints3d[SAMPLENUM-4][k][0][1],polygonPoints3d[SAMPLENUM-4][k][0][2]
                    ,polygonPoints3d[SAMPLENUM-4][k][1][0],polygonPoints3d[SAMPLENUM-4][k][1][1],polygonPoints3d[SAMPLENUM-4][k][1][2]
                    ,polygonPoints3d[SAMPLENUM-4][k][2][0],polygonPoints3d[SAMPLENUM-4][k][2][1],polygonPoints3d[SAMPLENUM-4][k][2][2]
                    ,tmpBracePoints[0][0],tmpBracePoints[0][1],tmpBracePoints[0][2]
                    ,tmpBracePoints[1][0],tmpBracePoints[1][1],tmpBracePoints[1][2]
                    ,tmpBracePoints[2][0],tmpBracePoints[2][1],tmpBracePoints[2][2]
                );
                collision_triangle3d_model_and_brace(bracePoints,i
                    ,polygonPoints3d[SAMPLENUM-4][k][0][0],polygonPoints3d[SAMPLENUM-4][k][0][1],polygonPoints3d[SAMPLENUM-4][k][0][2]
                    ,polygonPoints3d[SAMPLENUM-4][k][1][0],polygonPoints3d[SAMPLENUM-4][k][1][1],polygonPoints3d[SAMPLENUM-4][k][1][2]
                    ,polygonPoints3d[SAMPLENUM-4][k][2][0],polygonPoints3d[SAMPLENUM-4][k][2][1],polygonPoints3d[SAMPLENUM-4][k][2][2]
                    ,tmpBracePoints[0][0],tmpBracePoints[0][1],tmpBracePoints[0][2]
                    ,tmpBracePoints[2][0],tmpBracePoints[2][1],tmpBracePoints[2][2]
                    ,tmpBracePoints[3][0],tmpBracePoints[3][1],tmpBracePoints[3][2]
                );
                // if(i==13&&bracePoints[i].size()==73)cout<<"LorR"<<k;
            }
            for (int k = 0; k < 2; k++){//now
                for (int j = 0; j < 2; j++){
                    if(fabs(this->kindOfCrossEdge[j][startToEnd[k]]-curveCrossPoints2d[k][2])==1||fabs(int(this->kindOfCrossEdge[j][startToEnd[k]])%4-int(curveCrossPoints2d[k][2])%4)==1){
                        collision_triangle3d_model_and_brace(bracePoints,i
                            ,polygonPoints3d[2+(SAMPLENUM-6)*k][j][0][0],polygonPoints3d[2+(SAMPLENUM-6)*k][j][0][1],polygonPoints3d[2+(SAMPLENUM-6)*k][j][0][2]
                            ,polygonPoints3d[2+(SAMPLENUM-6)*k][j][2][0],polygonPoints3d[2+(SAMPLENUM-6)*k][j][2][1],polygonPoints3d[2+(SAMPLENUM-6)*k][j][2][2]
                            ,cornerPoints3d[k*2+j][0],cornerPoints3d[k*2+j][1],cornerPoints3d[k*2+j][2]
                            ,tmpBracePoints[0][0],tmpBracePoints[0][1],tmpBracePoints[0][2]
                            ,tmpBracePoints[1][0],tmpBracePoints[1][1],tmpBracePoints[1][2]
                            ,tmpBracePoints[2][0],tmpBracePoints[2][1],tmpBracePoints[2][2]
                        );
                        collision_triangle3d_model_and_brace(bracePoints,i
                            ,polygonPoints3d[2+(SAMPLENUM-6)*k][j][0][0],polygonPoints3d[2+(SAMPLENUM-6)*k][j][0][1],polygonPoints3d[2+(SAMPLENUM-6)*k][j][0][2]
                            ,polygonPoints3d[2+(SAMPLENUM-6)*k][j][2][0],polygonPoints3d[2+(SAMPLENUM-6)*k][j][2][1],polygonPoints3d[2+(SAMPLENUM-6)*k][j][2][2]
                            ,cornerPoints3d[k*2+j][0],cornerPoints3d[k*2+j][1],cornerPoints3d[k*2+j][2]
                            ,tmpBracePoints[0][0],tmpBracePoints[0][1],tmpBracePoints[0][2]
                            ,tmpBracePoints[2][0],tmpBracePoints[2][1],tmpBracePoints[2][2]
                            ,tmpBracePoints[3][0],tmpBracePoints[3][1],tmpBracePoints[3][2]
                        );
                    }else if(this->kindOfCrossEdge[j][startToEnd[k]]==curveCrossPoints2d[k][2]){
                        if(pentagonOrNot[1-k][j]!=1){
                            
                        }
                    }else{
                        
                    }
                }
            }
            for(int j=0;j<bracePoints[i].size();j++){
                int two=bracePoints[i][j].size();
                for(int k=0;k<two;k++){
                    double tmp[3]={};
                    tmp[0]=bracePoints[i][j][k][0]+normalVectorOfBase[0]*200;
                    tmp[1]=bracePoints[i][j][k][1]+normalVectorOfBase[1]*200;
                    tmp[2]=bracePoints[i][j][k][2]+normalVectorOfBase[2]*200;

                    bracePoints[i][j].push_back(collisionPoint3d(
                        basePoints[0][0],basePoints[0][1],basePoints[0][2],
                        basePoints[1][0],basePoints[1][1],basePoints[1][2],
                        basePoints[2][0],basePoints[2][1],basePoints[2][2],
                        bracePoints[i][j][k][0],bracePoints[i][j][k][1],bracePoints[i][j][k][2],
                        tmp[0],tmp[1],tmp[2]
                    ));
                }
            }
        }
    }
    int calculate_3d(double majorAlpha){
        int m=SAMPLENUM/2,flg=0;
        double datana[SAMPLENUM], ttana[SAMPLENUM], alpha_[SAMPLENUM], da_[SAMPLENUM], tr_[SAMPLENUM];
	    double tan_a, minalpha, maxalpha;
        this->alpha[m]=radians(majorAlpha);
        this->dalpha[m]=k2d[m]*(1/tan(this->beta[0][m])-1/tan(this->beta[1][m]))*tan(this->alpha[m])/2;
        for (int i = m+1; i < SAMPLENUM ; i++){
            this->alpha[i]=this->alpha[i-1]+this->dalpha[i-1]*dxdef;
            this->dalpha[i]=k2d[i]*(1/tan(this->beta[0][i])-1/tan(this->beta[1][i]))*tan(this->alpha[i])/2;
        }
        for (int i = m-1; i >= 0; i--){
            this->alpha[i]=this->alpha[i+1]-this->dalpha[i+1]*dxdef;
            this->dalpha[i]=k2d[i]*(1/tan(this->beta[0][i])-1/tan(this->beta[1][i]))*tan(this->alpha[i])/2;
        }
        for (int i = 0; i < SAMPLENUM; i++){
            if(this->alpha[i]>=PI/2||this->alpha[i]<=-PI/2){
                // std::cout<<this->ModelNum[0]<<" "<<this->ModelNum[1]<<" "<<this->ModelNum[2]<<endl;
                // std::cout<<"alpha is out of range"<<endl;
                return -1;
            }
        }
        for (int i = 0; i < SAMPLENUM; i++){
            tao[i]=k2d[i]*(1/tan(this->beta[0][i])+1/tan(this->beta[1][i]))*tan(this->alpha[i])/2;
        }
        for (int i = 0; i < SAMPLENUM; i++){
            this->k3d[i]=k2d[i]/cos(this->alpha[i]);
        }
        if(k3d[0]==0&&k3d[1]==0&&k3d[SAMPLENUM-2]==0&&k3d[SAMPLENUM-1]==0){
            k3d[0]=k3d[1]=k3d[2];
            k3d[SAMPLENUM-1]=k3d[SAMPLENUM-2]=k3d[SAMPLENUM-3];
        }
        if(tao[0]==0&&tao[1]==0&&tao[2]==0&&tao[SAMPLENUM-3]==0&&tao[SAMPLENUM-2]==0&&k3d[SAMPLENUM-1]==0){
            tao[0]=tao[1]=tao[2]=tao[3];
            tao[SAMPLENUM-1]=tao[SAMPLENUM-2]=tao[SAMPLENUM-3]=tao[SAMPLENUM-4];
        }
        this->x3d[0][0]=x2d[0][0];
        this->x3d[1][0]=x2d[1][0];
        this->x3d[2][0]=0;
        this->t3d[0][0]=t2d[0][0];
        this->t3d[1][0]=t2d[1][0];
        this->n3d[0][0]=-this->t3d[1][0];
        this->n3d[1][0]=this->t3d[0][0];
        // this->b3d[0][0]=this->t3d[1][1]*this->n3d[2][0]-this->t3d[2][0]*this->n3d[1][0];
        // this->b3d[1][0]=this->t3d[2][1]*this->n3d[0][0]-this->t3d[0][0]*this->n3d[2][0];
        // this->b3d[2][0]=this->t3d[0][1]*this->n3d[1][0]-this->t3d[1][0]*this->n3d[0][0];
        this->b3d[2][0]=1;
        double denominator=sqrt(this->b3d[0][0]*this->b3d[0][0]+this->b3d[1][0]*this->b3d[1][0]+this->b3d[2][0]*this->b3d[2][0]);
        // this->b3d[0][0]/=denominator;
        // this->b3d[1][0]/=denominator;
        // this->b3d[2][0]/=denominator;
        this->t3d[0][1]=this->t3d[0][0]+this->k3d[0]*dxdef*this->n3d[0][0];
        this->t3d[1][1]=this->t3d[1][0]+this->k3d[0]*dxdef*this->n3d[1][0];
        this->t3d[2][1]=this->t3d[2][0]+this->k3d[0]*dxdef*this->n3d[2][0];
        denominator=sqrt(this->t3d[0][1]*this->t3d[0][1]+this->t3d[1][1]*this->t3d[1][1]+this->t3d[2][1]*this->t3d[2][1]);
        this->t3d[0][1]/=denominator;
        this->t3d[1][1]/=denominator;
        this->t3d[2][1]/=denominator;
        this->n3d[0][1]=this->n3d[0][0]-this->k3d[0]*dxdef*this->t3d[0][0]+tao[0]*dxdef*this->b3d[0][0];
        this->n3d[1][1]=this->n3d[1][0]-this->k3d[0]*dxdef*this->t3d[1][0]+tao[0]*dxdef*this->b3d[1][0];
        this->n3d[2][1]=this->n3d[2][0]-this->k3d[0]*dxdef*this->t3d[2][0]+tao[0]*dxdef*this->b3d[2][0];
        denominator=sqrt(this->n3d[0][1]*this->n3d[0][1]+this->n3d[1][1]*this->n3d[1][1]+this->n3d[2][1]*this->n3d[2][1]);
        this->n3d[0][1]/=denominator;
        this->n3d[1][1]/=denominator;
        this->n3d[2][1]/=denominator;
        this->b3d[0][1]=this->t3d[1][1]*this->n3d[2][1]-this->t3d[2][1]*this->n3d[1][1];
        this->b3d[1][1]=this->t3d[2][1]*this->n3d[0][1]-this->t3d[0][1]*this->n3d[2][1];
        this->b3d[2][1]=this->t3d[0][1]*this->n3d[1][1]-this->t3d[1][1]*this->n3d[0][1];
        denominator=sqrt(this->b3d[0][1]*this->b3d[0][1]+this->b3d[1][1]*this->b3d[1][1]+this->b3d[2][1]*this->b3d[2][1]);
        this->b3d[0][1]/=denominator;
        this->b3d[1][1]/=denominator;
        this->b3d[2][1]/=denominator;
        denominator=sqrt(pow(this->t3d[0][0]+this->t3d[0][1],2)+pow(this->t3d[1][0]+this->t3d[1][1],2)+pow(this->t3d[2][0]+this->t3d[2][1],2));
        this->x3d[0][1]=this->x3d[0][0]+dxdef*(this->t3d[0][0]+this->t3d[0][1])/denominator;
        this->x3d[1][1]=this->x3d[1][0]+dxdef*(this->t3d[1][0]+this->t3d[1][1])/denominator;
        this->x3d[2][1]=this->x3d[2][0]+dxdef*(this->t3d[2][0]+this->t3d[2][1])/denominator;
        for (int i = 2; i < SAMPLENUM; i++){
            this->t3d[0][i]=this->t3d[0][i-2]+2*this->k3d[i-1]*dxdef*this->n3d[0][i-1];
            this->t3d[1][i]=this->t3d[1][i-2]+2*this->k3d[i-1]*dxdef*this->n3d[1][i-1];
            this->t3d[2][i]=this->t3d[2][i-2]+2*this->k3d[i-1]*dxdef*this->n3d[2][i-1];
            denominator=sqrt(this->t3d[0][i]*this->t3d[0][i]+this->t3d[1][i]*this->t3d[1][i]+this->t3d[2][i]*this->t3d[2][i]);
            this->t3d[0][i]/=denominator;
            this->t3d[1][i]/=denominator;
            this->t3d[2][i]/=denominator;
            this->n3d[0][i]=this->n3d[0][i-2]-2*this->k3d[i-1]*dxdef*this->t3d[0][i-1]+2*tao[i-1]*dxdef*this->b3d[0][i-1];
            this->n3d[1][i]=this->n3d[1][i-2]-2*this->k3d[i-1]*dxdef*this->t3d[1][i-1]+2*tao[i-1]*dxdef*this->b3d[1][i-1];
            this->n3d[2][i]=this->n3d[2][i-2]-2*this->k3d[i-1]*dxdef*this->t3d[2][i-1]+2*tao[i-1]*dxdef*this->b3d[2][i-1];
            denominator=sqrt(this->n3d[0][i]*this->n3d[0][i]+this->n3d[1][i]*this->n3d[1][i]+this->n3d[2][i]*this->n3d[2][i]);
            this->n3d[0][i]/=denominator;
            this->n3d[1][i]/=denominator;
            this->n3d[2][i]/=denominator;
            this->b3d[0][i]=this->t3d[1][i]*this->n3d[2][i]-this->t3d[2][i]*this->n3d[1][i];
            this->b3d[1][i]=this->t3d[2][i]*this->n3d[0][i]-this->t3d[0][i]*this->n3d[2][i];
            this->b3d[2][i]=this->t3d[0][i]*this->n3d[1][i]-this->t3d[1][i]*this->n3d[0][i];
            denominator=sqrt(this->b3d[0][i]*this->b3d[0][i]+this->b3d[1][i]*this->b3d[1][i]+this->b3d[2][i]*this->b3d[2][i]);
            this->b3d[0][i]/=denominator;
            this->b3d[1][i]/=denominator;
            this->b3d[2][i]/=denominator;
            denominator=sqrt(pow(this->t3d[0][i-1]+this->t3d[0][i],2)+pow(this->t3d[1][i-1]+this->t3d[1][i],2)+pow(this->t3d[2][i-1]+this->t3d[2][i],2));
            this->x3d[0][i]=this->x3d[0][i-1]+dxdef*(this->t3d[0][i-1]+this->t3d[0][i])/denominator;
            this->x3d[1][i]=this->x3d[1][i-1]+dxdef*(this->t3d[1][i-1]+this->t3d[1][i])/denominator;
            this->x3d[2][i]=this->x3d[2][i-1]+dxdef*(this->t3d[2][i-1]+this->t3d[2][i])/denominator;
        }
        double dx1_[SAMPLENUM],dx3d[SAMPLENUM],dy3d[SAMPLENUM],dz3d[SAMPLENUM];
        for(int i=0;i<SAMPLENUM-1;i++){
            dx3d[i]=x3d[0][i+1]-x3d[0][i];
            dy3d[i]=x3d[1][i+1]-x3d[1][i];
            dz3d[i]=x3d[2][i+1]-x3d[2][i];
            dx1_[i]=sqrt(dx3d[i]*dx3d[i]+dy3d[i]*dy3d[i]+dz3d[i]*dz3d[i]);
        }
        for (int i = 1; i < SAMPLENUM-1; i++){
            if( dx1_[i-1]==0.0 && dx1_[i]==0.0 ){
                t3d[0][i] = t3d[1][i] = t3d[2][i] = dx[i] = 0.0;
                continue;
            }
            if( dx1_[i-1]>0.0 && dx1_[i]>0.0 ){
                t3d[0][i] = (dx3d[i-1]/dx1_[i-1] + dx3d[i]/dx1_[i])*0.5;
                t3d[1][i] = (dy3d[i-1]/dx1_[i-1] + dy3d[i]/dx1_[i])*0.5;
                t3d[2][i] = (dz3d[i-1]/dx1_[i-1] + dz3d[i]/dx1_[i])*0.5;
                dx[i] = (dx1_[i-1]+dx1_[i])*0.5;
            } else if( dx1_[i-1]>0.0 ){
                t3d[0][i] = dx3d[i-1];
                t3d[1][i] = dy3d[i-1];
                t3d[2][i] = dz3d[i-1];
                dx[i] = dx1_[i-1];
            } else{
                t3d[0][i] = dx3d[i];
                t3d[1][i] = dy3d[i];
                t3d[2][i] = dz3d[i];
                dx[i] = dx1_[i];
            }
            denominator=sqrt(this->t3d[0][i]*this->t3d[0][i]+this->t3d[1][i]*this->t3d[1][i]+this->t3d[2][i]*this->t3d[2][i]);
            this->t3d[0][i]/=denominator;
            this->t3d[1][i]/=denominator;
            this->t3d[2][i]/=denominator;
        }
        for (int i = 2; i < SAMPLENUM-2; i++){
            double d0 = dx1_[i];
            double d1 = dx1_[i-1];
            double nx0 = t3d[0][i+1] - t3d[0][i];
            double nx1 = t3d[0][i]   - t3d[0][i-1];
            double ny0 = t3d[1][i+1] - t3d[1][i];
            double ny1 = t3d[1][i]   - t3d[1][i-1];
            double nz0 = t3d[2][i+1] - t3d[2][i];
            double nz1 = t3d[2][i]   - t3d[2][i-1];

            if( d0<=0.0 && d1<=0.0 ){
                n3d[0][i] = n3d[1][i] = n3d[2][i] = k3d[i] = 0.0;
                continue;
            }
            if( d0>0.0 && d1>0.0 ){
                n3d[0][i] = (nx0/d0 + nx1/d1)*0.5;
                n3d[1][i] = (ny0/d0 + ny1/d1)*0.5;
                n3d[2][i] = (nz0/d0 + nz1/d1)*0.5;
            } else if( d0>0.0 ){
                n3d[0][i] = nx0;
                n3d[1][i] = ny0;
                n3d[2][i] = nz0;
            } else {
                n3d[0][i] = nx1;
                n3d[1][i] = ny1;
                n3d[2][i] = nz1;
            }
            k3d[i] = sqrt( n3d[0][i]*n3d[0][i] + n3d[1][i]*n3d[1][i] + n3d[2][i]*n3d[2][i] );
            if((i==2 && n3d[0][i]*n3d[0][0] + n3d[1][i]*n3d[1][0] + n3d[2][i]*n3d[2][0] < 0)||(i>2 && n3d[0][i]*n3d[0][i-1] + n3d[1][i]*n3d[1][i-1] + n3d[2][i]*n3d[2][i-1] < 0)){
                k3d[i]*=-1;
            }
            if( fabs(k3d[i]) > 0.0){
                n3d[0][i] /= k3d[i];
                n3d[1][i] /= k3d[i];
                n3d[2][i] /= k3d[i];
            }
        }
        for (int i = 2; i < SAMPLENUM-2; i++){
            this->b3d[0][i]=this->t3d[1][i]*this->n3d[2][i]-this->t3d[2][i]*this->n3d[1][i];
            this->b3d[1][i]=this->t3d[2][i]*this->n3d[0][i]-this->t3d[0][i]*this->n3d[2][i];
            this->b3d[2][i]=this->t3d[0][i]*this->n3d[1][i]-this->t3d[1][i]*this->n3d[0][i];
        }
        for(int i=2;i<SAMPLENUM-2;i++){
            double dTx=0,dTy=0,dTz=0, dNx=0,dNy=0,dNz=0, dBx=0,dBy=0,dBz=0;
            double nktx=0,nkty=0,nktz=0, bx=0,by=0,bz=0, t0=0,t1=0, ip0=0,ip1=0;
            double dx0,dx1,dy0,dy1,dz0,dz1,d0,d1;
            dx0=x3d[0][i+1]-x3d[0][i];
            dx1=x3d[0][i]-x3d[0][i-1];
            dy0 = x3d[1][i+1] - x3d[1][i];
            dy1 = x3d[1][i]   - x3d[1][i-1];
            dz0 = x3d[2][i+1] - x3d[2][i];
            dz1 = x3d[2][i]   - x3d[2][i-1];
            d0 = sqrt( dx0*dx0 + dy0*dy0 + dz0*dz0 );
            d1 = sqrt( dx1*dx1 + dy1*dy1 + dz1*dz1 );
            if(d0==0||d1==0){
                continue;
            }          
            dx0 = t3d[0][i+1] - t3d[0][i];
            dx1 = t3d[0][i]   - t3d[0][i-1];
            dy0 = t3d[1][i+1] - t3d[1][i];
            dy1 = t3d[1][i]   - t3d[1][i-1];
            dz0 = t3d[2][i+1] - t3d[2][i];
            dz1 = t3d[2][i]   - t3d[2][i-1];
            dTx = (dx0/d0 + dx1/d1)*0.5;
            dTy = (dy0/d0 + dy1/d1)*0.5;
            dTz = (dz0/d0 + dz1/d1)*0.5;

            dx0 = n3d[0][i+1] - n3d[0][i];
            dx1 = n3d[0][i]   - n3d[0][i-1];
            dy0 = n3d[1][i+1] - n3d[1][i];
            dy1 = n3d[1][i]   - n3d[1][i-1];
            dz0 = n3d[2][i+1] - n3d[2][i];
            dz1 = n3d[2][i]   - n3d[2][i-1];
            dNx = (dx0/d0 + dx1/d1)*0.5;
            dNy = (dy0/d0 + dy1/d1)*0.5;
            dNz = (dz0/d0 + dz1/d1)*0.5;

            dx0 = b3d[0][i+1] - b3d[0][i];
            dx1 = b3d[0][i]   - b3d[0][i-1];
            dy0 = b3d[1][i+1] - b3d[1][i];
            dy1 = b3d[1][i]   - b3d[1][i-1];
            dz0 = b3d[2][i+1] - b3d[2][i];
            dz1 = b3d[2][i]   - b3d[2][i-1];
            dBx = (dx0/d0 + dx1/d1)*0.5;
            dBy = (dy0/d0 + dy1/d1)*0.5;
            dBz = (dz0/d0 + dz1/d1)*0.5;

            // N' = -k*T + t*B -> t = (N'+kT)/B
            nktx = dNx+k3d[i]*t3d[0][i];
            nkty = dNy+k3d[i]*t3d[1][i];
            nktz = dNz+k3d[i]*t3d[2][i];
            t0 = sqrt( nktx*nktx + nkty*nkty + nktz*nktz );
            if( t0!=0 ){
                nktx /= t0;
                nkty /= t0;
                nktz /= t0;
            } else {
                nktx = nkty = nktz = 0.0;
            }
            ip0 = nktx*b3d[0][i] + nkty*b3d[1][i] + nktz*b3d[2][i];

            // B' = -t*N -> t = -B'/N
            bx = -dBx;
            by = -dBy;
            bz = -dBz;
            t1 = sqrt( bx*bx + by*by + bz*bz );
            if( t1!=0 ){
                bx /= t1;
                by /= t1;
                bz /= t1;
            } else {
                bx = by = bz = 0.0;
            }
            ip1 = bx*n3d[0][i] + by*n3d[1][i] + bz*n3d[2][i];

            if( fabs(ip0) >= 0.99 && fabs(ip0) >= fabs(ip1) ){
                if( ip0>0 ){
                    tao[i] = t0;
                } else {
                    tao[i] = -t0;
                }
            } else if( fabs(ip1) >= 0.99 && fabs(ip1) >= fabs(ip0) ){
                if( ip1>0 ){
                    tao[i] = t1;
                } else {
                    tao[i] = -t1;
                }
            } else {
                tao[i] = 0.0;
            }
        }
        for(int i=1;i<SAMPLENUM-1;i++){
            double dx0 = x3d[0][i+1] - x3d[0][i];
            double dx1 = x3d[0][i]   - x3d[0][i-1];
            double dy0 = x3d[1][i+1] - x3d[1][i];
            double dy1 = x3d[1][i]   - x3d[1][i-1];
            double dz0 = x3d[2][i+1] - x3d[2][i];
            double dz1 = x3d[2][i]   - x3d[2][i-1];
            double d0 = sqrt( dx0*dx0 + dy0*dy0 + dz0*dz0 );
            double d1 = sqrt( dx1*dx1 + dy1*dy1 + dz1*dz1 );
            double da0 = alpha[i+1] - alpha[i];
            double da1 = alpha[i]   - alpha[i-1];
            if( d0<=0.0 && d1<=0.0 ){
                dalpha[i] = 0.0;
                continue;
            }
            if( d0>0.0 && d1>0.0 ){
                dalpha[i] = (da0/d0 + da1/d1)*0.5;
            } else if( d0>0.0 ){
                dalpha[i] = da0;
            } else {
                dalpha[i] = da1;
            }
        }
        for(int i=0;i<4;i++){
            cornerRuling[i]=0;
            for(int j=0;j<3;j++){
                cornerPoints2d[i][j]=0;
            }
        }    
    
        for(int i=3; i<SAMPLENUM-3; i++ ){
            if( sin(alpha[i])*k3d[i]==0.0 ){
                beta[0][i] = beta[1][i] = PI/2.0;
                continue;
            }
            beta[0][i]=atan(1/((dalpha[i]+tao[i])/(sin(alpha[i])*k3d[i]))); 
            if( beta[0][i] < 0.0 ){
                beta[0][i] += PI;
            }
            beta[1][i]=atan(1/((-dalpha[i]+tao[i])/(sin(alpha[i])*k3d[i]))); 
            if( beta[1][i] < 0.0 ){
                beta[1][i] += PI;
            }
        }
        for (int i = 3; i < SAMPLENUM-3; i++)
        {
            this->betaVector[0][i]=cos(this->beta[0][i])*t2d[0][i]-sin(this->beta[0][i])*t2d[1][i];
            this->betaVector[1][i]=sin(this->beta[0][i])*t2d[0][i]+cos(this->beta[0][i])*t2d[1][i];
            this->betaVector[2][i]=cos(-this->beta[1][i])*t2d[0][i]-sin(-this->beta[1][i])*t2d[1][i];
            this->betaVector[3][i]=sin(-this->beta[1][i])*t2d[0][i]+cos(-this->beta[1][i])*t2d[1][i]; 
            denominator=sqrt(betaVector[0][i]*betaVector[0][i]+betaVector[1][i]*betaVector[1][i]);
            betaVector[0][i]/=denominator;
            betaVector[1][i]/=denominator;
            denominator=sqrt(betaVector[2][i]*betaVector[2][i]+betaVector[3][i]*betaVector[3][i]);
            betaVector[2][i]/=denominator;
            betaVector[3][i]/=denominator;
        }
        
        for (int i = 3; i < SAMPLENUM-3; i++)
        {
            double a=0,b=0;
            int c=0;
            std::tie(a,b,c)=where_are_rulings_cross_points2d(x2d[0][i],x2d[1][i],x2d[0][i]+400*this->betaVector[0][i],x2d[1][i]+400*this->betaVector[1][i]);
            this->borderPoints2d[0][i]=a;
            this->borderPoints2d[1][i]=b;
            this->kindOfCrossEdge[0][i]=c;
            std::tie(a,b,c)=where_are_rulings_cross_points2d(x2d[0][i],x2d[1][i],x2d[0][i]+400*this->betaVector[2][i],x2d[1][i]+400*this->betaVector[3][i]);
            this->borderPoints2d[2][i]=a;
            this->borderPoints2d[3][i]=b;
            this->kindOfCrossEdge[1][i]=c;
            this->rulingLength[0][i]=distance2d(x2d[0][i],x2d[1][i],this->borderPoints2d[0][i],this->borderPoints2d[1][i]);
            this->rulingLength[1][i]=distance2d(x2d[0][i],x2d[1][i],this->borderPoints2d[2][i],this->borderPoints2d[3][i]);
            if(i!=3){
                if(kindOfCrossEdge[0][i-1]!=kindOfCrossEdge[0][i]){
                    if(kindOfCrossEdge[0][i-1]==curveCrossPoints2d[0][2]){
                        cornerRuling[0]=i-1;
                    }else{
                        cornerRuling[2]=i-1;
                    }
                }
                if(kindOfCrossEdge[1][i-1]!=kindOfCrossEdge[1][i]){
                    if(kindOfCrossEdge[1][i-1]==curveCrossPoints2d[0][2]){
                        cornerRuling[1]=i-1;
                    }else{
                        cornerRuling[3]=i-1;
                    }
                }
            }
        }
        if(this->check_ruling_cross2d()){
            return -2;
        }
        this->where_are_corner_points2d();
        if(curveCrossPoints2d[0][2]==curveCrossPoints2d[1][2]){
            std::cout<<this->ModelNum[0]<<" "<<this->ModelNum[1]<<" "<<this->ModelNum[2]<<endl;
            std::cout<<"start and end are on the same edge"<<endl;
            exit(1);
        }
        // this->between_which_ruling_are_cost_points();

        for (int i = 3; i < SAMPLENUM-3; i++){
            this->gamma[0][i]=cos(this->beta[0][i])*this->t3d[0][i]+sin(this->beta[0][i])*cos(this->alpha[i])*this->n3d[0][i]+sin(this->beta[0][i])*sin(this->alpha[i])*this->b3d[0][i];
            this->gamma[1][i]=cos(this->beta[0][i])*this->t3d[1][i]+sin(this->beta[0][i])*cos(this->alpha[i])*this->n3d[1][i]+sin(this->beta[0][i])*sin(this->alpha[i])*this->b3d[1][i];
            this->gamma[2][i]=cos(this->beta[0][i])*this->t3d[2][i]+sin(this->beta[0][i])*cos(this->alpha[i])*this->n3d[2][i]+sin(this->beta[0][i])*sin(this->alpha[i])*this->b3d[2][i];
            this->gamma[3][i]=cos(this->beta[1][i])*this->t3d[0][i]-sin(this->beta[1][i])*cos(this->alpha[i])*this->n3d[0][i]+sin(this->beta[1][i])*sin(this->alpha[i])*this->b3d[0][i];
            this->gamma[4][i]=cos(this->beta[1][i])*this->t3d[1][i]-sin(this->beta[1][i])*cos(this->alpha[i])*this->n3d[1][i]+sin(this->beta[1][i])*sin(this->alpha[i])*this->b3d[1][i];
            this->gamma[5][i]=cos(this->beta[1][i])*this->t3d[2][i]-sin(this->beta[1][i])*cos(this->alpha[i])*this->n3d[2][i]+sin(this->beta[1][i])*sin(this->alpha[i])*this->b3d[2][i]; 
            denominator=sqrt(gamma[0][i]*gamma[0][i]+gamma[1][i]*gamma[1][i]+gamma[2][i]*gamma[2][i]);
            gamma[0][i]/=denominator;
            gamma[1][i]/=denominator;
            gamma[2][i]/=denominator;
            denominator=sqrt(gamma[3][i]*gamma[3][i]+gamma[4][i]*gamma[4][i]+gamma[5][i]*gamma[5][i]);
            gamma[3][i]/=denominator;
            gamma[4][i]/=denominator;
            gamma[5][i]/=denominator;
        }
        for (int i = 0; i < 2; i++){
            this->curveCrossPoints3d[i][0]=this->x3d[0][startToEnd[i]]+pow(-1,i+1)*curveTipToEdge[i]*this->t3d[0][startToEnd[i]];
            this->curveCrossPoints3d[i][1]=this->x3d[1][startToEnd[i]]+pow(-1,i+1)*curveTipToEdge[i]*this->t3d[1][startToEnd[i]];
            this->curveCrossPoints3d[i][2]=this->x3d[2][startToEnd[i]]+pow(-1,i+1)*curveTipToEdge[i]*this->t3d[2][startToEnd[i]];
        }
        this->where_are_rulings_cross_points3d();
        this->where_are_polygonPoints3d();
        this->where_are_corner_points3d();
        this->where_are_bracePoints3d();
        int self_col=this->check_self_collision();
        if(self_col>0){
            // std::cout<<this->ModelNum[0]<<" "<<this->ModelNum[1]<<" "<<this->ModelNum[2]<<endl;
            // std::cout<<"self collision "<<self_col<<endl;
            return -3;
        }
        // this->where_are_cost_points3d();
        return 1; // from Beta
    }
    
    void draw_3d(){
        float Float=0;
        for (int i = 0; i <3; i++)
        {
            Float=this->ModelNum[i];
            std::cout<<Float<<" ";
        }
        std::cout<<endl;
        for (int i = 3; i <SAMPLENUM-3; i++){
            Float=this->x3d[0][i];
            std::cout<<Float<<" ";
        }
        std::cout<<endl;
        for (int i = 3; i <SAMPLENUM-3; i++){
            Float=this->x3d[1][i];
            std::cout<<Float<<" ";
        }
        std::cout<<endl;
        for (int i = 3; i <SAMPLENUM-3; i++){
            Float=this->x3d[2][i];
            std::cout<<Float<<" ";
        }
        std::cout<<endl;
        for (int i = 0; i <SAMPLENUM; i++){
            for (int j = 0; j < 2; j++){
                for (int k = 0; k < 4; k++){
                    for (int l = 0; l < 3; l++){
                        Float=polygonPoints3d[i][j][k][l];
                        std::cout<<Float<<" ";
                    }
                    std::cout<<endl;
                }
            }
        }
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                Float=this->kindOfCrossEdge[j][startToEnd[i]];
                std::cout<<Float<<endl;
            }
        }
        for (int i = 0; i < 2; i++){
            Float=curveCrossPoints2d[i][2];
            std::cout<<Float<<endl;
        }
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 3; j++){
                Float=curveCrossPoints3d[i][j];
                std::cout<<Float<<" ";
            }
            std::cout<<endl;
        }
        
        for (int i = 0; i < 4; i++){
            for (int k = 0; k < 3; k++){
                    Float=this->cornerPoints3d[i][k];
                    std::cout<<Float<<" ";
            }
            std::cout<<endl;
        }
        // for (int i = 0; i < 9; i++){
        //     for (int j = 0; j < 9; j++){
        //         for (int k = 0; k < 3; k++){
        //             Float=this->costPointsWhere3d[i][j][k];
        //             std::cout<<Float<<" ";
        //         }
        //         std::cout<<endl;
        //     }
        // }
        for(int i = 0; i < 4; i++){
            std::cout<<this->cornerRuling[i]<<" ";
        }
        std::cout<<endl;
        for(int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                std::cout<<this->pentagonOrNot[i][j]<<" ";
            }
            std::cout<<endl;
        }
        for(int i = 0; i < 3; i++){
            std::cout<<this->normalVectorOfBase[i]<<" ";
        }
        std::cout<<endl;

        for(int i = 0; i < 3; i++){
            std::cout<<this->baseVector1[i]<<" ";
        }
        std::cout<<endl;

        for(int i = 0; i < 3; i++){
            std::cout<<this->baseVector2[i]<<" ";
        }
        std::cout<<endl;
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 3; j++){
                std::cout<<this->basePoints[i][j]<<" ";
            }
            std::cout<<endl;
        }

        for(int i = 0; i < NUMBER_OF_BRACES; i++){
            for(int j = 0; j < 4; j++){
                for(int k = 0; k < 3; k++){
                    std::cout<<this->bracePointsUnCut[i][j][k]<<" ";
                }
                std::cout<<endl;
            }
        }
        std::cout<<bracePoints.size()<<endl;            
        for(int i = 0; i < bracePoints.size(); i++){
            std::cout<<bracePoints[i].size()<<endl;            
            for(int j = 0; j < bracePoints[i].size(); j++){
                for(int k = 0; k < 4; k++){
                    for(int l = 0; l < 3; l++){
                        std::cout<<this->bracePoints[i][j][k][l]<<" ";
                    }
                    std::cout<<endl;
                }
                
            }
        }
    }

    double calculate_costA(){
        double costSum=0,x=0,y=0,a1=0,a2=0,b1,b2,border1x=0,border1y=0,border2x=0,border2y=0;
        int border1line=0,border2line=0;
        for (int i = startToEnd[0]; i < startToEnd[1]-1; i++){
            for(int j=0;j<2;j++){
                if((betaVector[0+2*j][i]*betaVector[1+2*j][i+1]-betaVector[1+2*j][i]*betaVector[0+2*j][i+1])*pow(-1,j)>0){
                    if(betaVector[0+2*j][i]==0){
                        x=x2d[0][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        y=x2d[1][i+1]+a2*(x-x2d[0][i+1]);
                    }else if(betaVector[1+2*j][i]==0){
                        y=x2d[1][i];
                        a2=betaVector[0+2*j][i+1]/betaVector[1+2*j][i+1];
                        x=x2d[0][i+1]+a2*(y-x2d[1][i+1]);
                    }else if(betaVector[0+2*j][i+1]==0){
                        x=x2d[0][i+1];
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        y=x2d[1][i]+a1*(x-x2d[0][i]);
                    }else if(betaVector[1+2*j][i+1]==0){
                        y=x2d[1][i+1];
                        a1=betaVector[0+2*j][i]/betaVector[1+2*j][i];
                        x=x2d[0][i]+a1*(y-x2d[1][i]);
                    }else{
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        x=(x2d[1][i+1]-x2d[1][i]+a1*x2d[0][i]-a2*x2d[0][i+1])/(a1-a2);
                        y=a1*x+x2d[1][i]-a1*x2d[0][i];
                    }
                    if(x>100-BORDEREXPANTION*100&&x<100+BORDEREXPANTION*100&&y>-BORDEREXPANTION*100&&y<BORDEREXPANTION*100){
                        std::tie(border1x,border1y,border1line)=where_are_rulings_expantion_cross_points2d(x2d[0][i],x2d[1][i],x2d[0][i]+BORDEREXPANTION*10000*this->betaVector[0+2*j][i],x2d[1][i]+BORDEREXPANTION*10000*this->betaVector[1+2*j][i]);
                        std::tie(border2x,border2y,border2line)=where_are_rulings_expantion_cross_points2d(x2d[0][i+1],x2d[1][i+1],x2d[0][i+1]+BORDEREXPANTION*10000*this->betaVector[0+2*j][i+1],x2d[1][i+1]+BORDEREXPANTION*10000*this->betaVector[1+2*j][i+1]);
                        costSum+=fabs(area2(x,y,border1x,border1y,border2x,border2y));
                    }
                }
            }
        }
        return costSum;
    }

    double calculate_costAmax(){
        double costMax=0,costTmp=0,x=0,y=0,a1=0,a2=0,b1,b2,border1x=0,border1y=0,border2x=0,border2y=0;
        int border1line=0,border2line=0;
        for (int i = startToEnd[0]; i < startToEnd[1]-1; i++){
            for(int j=0;j<2;j++){
                if((betaVector[0+2*j][i]*betaVector[1+2*j][i+1]-betaVector[1+2*j][i]*betaVector[0+2*j][i+1])*pow(-1,j)>0){
                    if(betaVector[0+2*j][i]==0){
                        x=x2d[0][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        y=x2d[1][i+1]+a2*(x-x2d[0][i+1]);
                    }else if(betaVector[1+2*j][i]==0){
                        y=x2d[1][i];
                        a2=betaVector[0+2*j][i+1]/betaVector[1+2*j][i+1];
                        x=x2d[0][i+1]+a2*(y-x2d[1][i+1]);
                    }else if(betaVector[0+2*j][i+1]==0){
                        x=x2d[0][i+1];
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        y=x2d[1][i]+a1*(x-x2d[0][i]);
                    }else if(betaVector[1+2*j][i+1]==0){
                        y=x2d[1][i+1];
                        a1=betaVector[0+2*j][i]/betaVector[1+2*j][i];
                        x=x2d[0][i]+a1*(y-x2d[1][i]);
                    }else{
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        x=(x2d[1][i+1]-x2d[1][i]+a1*x2d[0][i]-a2*x2d[0][i+1])/(a1-a2);
                        y=a1*x+x2d[1][i]-a1*x2d[0][i];
                    }
                    if(x>100-BORDEREXPANTION*100&&x<100+BORDEREXPANTION*100&&y>-BORDEREXPANTION*100&&y<BORDEREXPANTION*100){
                        std::tie(border1x,border1y,border1line)=where_are_rulings_expantion_cross_points2d(x2d[0][i],x2d[1][i],x2d[0][i]+BORDEREXPANTION*10000*this->betaVector[0+2*j][i],x2d[1][i]+BORDEREXPANTION*10000*this->betaVector[1+2*j][i]);
                        std::tie(border2x,border2y,border2line)=where_are_rulings_expantion_cross_points2d(x2d[0][i+1],x2d[1][i+1],x2d[0][i+1]+BORDEREXPANTION*10000*this->betaVector[0+2*j][i+1],x2d[1][i+1]+BORDEREXPANTION*10000*this->betaVector[1+2*j][i+1]);
                        costTmp=fabs(area2(x,y,border1x,border1y,border2x,border2y));
                        if(costTmp>costMax){
                            costMax=costTmp;
                        }
                    }
                }
            }
        }
        return costMax;
    }

    double calculate_costAmaxLR(int j){
        double costMax=0,costTmp=0,x=0,y=0,a1=0,a2=0,b1,b2,border1x=0,border1y=0,border2x=0,border2y=0;
        int border1line=0,border2line=0;
        for (int i = startToEnd[0]; i < startToEnd[1]-1; i++){
                if((betaVector[0+2*j][i]*betaVector[1+2*j][i+1]-betaVector[1+2*j][i]*betaVector[0+2*j][i+1])*pow(-1,j)>0){
                    if(betaVector[0+2*j][i]==0){
                        x=x2d[0][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        y=x2d[1][i+1]+a2*(x-x2d[0][i+1]);
                    }else if(betaVector[1+2*j][i]==0){
                        y=x2d[1][i];
                        a2=betaVector[0+2*j][i+1]/betaVector[1+2*j][i+1];
                        x=x2d[0][i+1]+a2*(y-x2d[1][i+1]);
                    }else if(betaVector[0+2*j][i+1]==0){
                        x=x2d[0][i+1];
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        y=x2d[1][i]+a1*(x-x2d[0][i]);
                    }else if(betaVector[1+2*j][i+1]==0){
                        y=x2d[1][i+1];
                        a1=betaVector[0+2*j][i]/betaVector[1+2*j][i];
                        x=x2d[0][i]+a1*(y-x2d[1][i]);
                    }else{
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        x=(x2d[1][i+1]-x2d[1][i]+a1*x2d[0][i]-a2*x2d[0][i+1])/(a1-a2);
                        y=a1*x+x2d[1][i]-a1*x2d[0][i];
                    }
                    if(x>100-BORDEREXPANTION*100&&x<100+BORDEREXPANTION*100&&y>-BORDEREXPANTION*100&&y<BORDEREXPANTION*100){
                        std::tie(border1x,border1y,border1line)=where_are_rulings_expantion_cross_points2d(x2d[0][i],x2d[1][i],x2d[0][i]+BORDEREXPANTION*10000*this->betaVector[0+2*j][i],x2d[1][i]+BORDEREXPANTION*10000*this->betaVector[1+2*j][i]);
                        std::tie(border2x,border2y,border2line)=where_are_rulings_expantion_cross_points2d(x2d[0][i+1],x2d[1][i+1],x2d[0][i+1]+BORDEREXPANTION*10000*this->betaVector[0+2*j][i+1],x2d[1][i+1]+BORDEREXPANTION*10000*this->betaVector[1+2*j][i+1]);
                        costTmp=fabs(area2(x,y,border1x,border1y,border2x,border2y));
                        if(costTmp>costMax){
                            costMax=costTmp;
                        }
                    }
                }
        }
        return costMax;
    }

    tuple<int,int> calculate_costAmaxIdx(){
        double costMax=0,costMaxIdxI=0,costMaxIdxJ=0,costTmp=0,x=0,y=0,a1=0,a2=0,b1,b2,border1x=0,border1y=0,border2x=0,border2y=0;
        int border1line=0,border2line=0;
        for (int i = startToEnd[0]; i < startToEnd[1]-1; i++){
            for(int j=0;j<2;j++){
                if((betaVector[0+2*j][i]*betaVector[1+2*j][i+1]-betaVector[1+2*j][i]*betaVector[0+2*j][i+1])*pow(-1,j)>0){
                    if(betaVector[0+2*j][i]==0){
                        x=x2d[0][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        y=x2d[1][i+1]+a2*(x-x2d[0][i+1]);
                    }else if(betaVector[1+2*j][i]==0){
                        y=x2d[1][i];
                        a2=betaVector[0+2*j][i+1]/betaVector[1+2*j][i+1];
                        x=x2d[0][i+1]+a2*(y-x2d[1][i+1]);
                    }else if(betaVector[0+2*j][i+1]==0){
                        x=x2d[0][i+1];
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        y=x2d[1][i]+a1*(x-x2d[0][i]);
                    }else if(betaVector[1+2*j][i+1]==0){
                        y=x2d[1][i+1];
                        a1=betaVector[0+2*j][i]/betaVector[1+2*j][i];
                        x=x2d[0][i]+a1*(y-x2d[1][i]);
                    }else{
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        x=(x2d[1][i+1]-x2d[1][i]+a1*x2d[0][i]-a2*x2d[0][i+1])/(a1-a2);
                        y=a1*x+x2d[1][i]-a1*x2d[0][i];
                    }
                    if(x>100-BORDEREXPANTION*100&&x<100+BORDEREXPANTION*100&&y>-BORDEREXPANTION*100&&y<BORDEREXPANTION*100){
                        std::tie(border1x,border1y,border1line)=where_are_rulings_expantion_cross_points2d(x2d[0][i],x2d[1][i],x2d[0][i]+BORDEREXPANTION*10000*this->betaVector[0+2*j][i],x2d[1][i]+BORDEREXPANTION*10000*this->betaVector[1+2*j][i]);
                        std::tie(border2x,border2y,border2line)=where_are_rulings_expantion_cross_points2d(x2d[0][i+1],x2d[1][i+1],x2d[0][i+1]+BORDEREXPANTION*10000*this->betaVector[0+2*j][i+1],x2d[1][i+1]+BORDEREXPANTION*10000*this->betaVector[1+2*j][i+1]);
                        costTmp=fabs(area2(x,y,border1x,border1y,border2x,border2y));
                        if(costTmp>costMax){
                            costMax=costTmp;
                            costMaxIdxI=i;
                            costMaxIdxJ=j;
                        }
                    }
                }
            }
        }
        return forward_as_tuple(costMaxIdxI,costMaxIdxJ);
    }

    tuple<int,int> calculate_costAmaxIdxLR(int j){
        double costMax=0,costMaxIdxI=0,costMaxIdxJ=0,costTmp=0,x=0,y=0,a1=0,a2=0,b1,b2,border1x=0,border1y=0,border2x=0,border2y=0;
        int border1line=0,border2line=0;
        for (int i = startToEnd[0]; i < startToEnd[1]-1; i++){
                if((betaVector[0+2*j][i]*betaVector[1+2*j][i+1]-betaVector[1+2*j][i]*betaVector[0+2*j][i+1])*pow(-1,j)>0){
                    if(betaVector[0+2*j][i]==0){
                        x=x2d[0][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        y=x2d[1][i+1]+a2*(x-x2d[0][i+1]);
                    }else if(betaVector[1+2*j][i]==0){
                        y=x2d[1][i];
                        a2=betaVector[0+2*j][i+1]/betaVector[1+2*j][i+1];
                        x=x2d[0][i+1]+a2*(y-x2d[1][i+1]);
                    }else if(betaVector[0+2*j][i+1]==0){
                        x=x2d[0][i+1];
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        y=x2d[1][i]+a1*(x-x2d[0][i]);
                    }else if(betaVector[1+2*j][i+1]==0){
                        y=x2d[1][i+1];
                        a1=betaVector[0+2*j][i]/betaVector[1+2*j][i];
                        x=x2d[0][i]+a1*(y-x2d[1][i]);
                    }else{
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        x=(x2d[1][i+1]-x2d[1][i]+a1*x2d[0][i]-a2*x2d[0][i+1])/(a1-a2);
                        y=a1*x+x2d[1][i]-a1*x2d[0][i];
                    }
                    if(x>100-BORDEREXPANTION*100&&x<100+BORDEREXPANTION*100&&y>-BORDEREXPANTION*100&&y<BORDEREXPANTION*100){
                        std::tie(border1x,border1y,border1line)=where_are_rulings_expantion_cross_points2d(x2d[0][i],x2d[1][i],x2d[0][i]+BORDEREXPANTION*10000*this->betaVector[0+2*j][i],x2d[1][i]+BORDEREXPANTION*10000*this->betaVector[1+2*j][i]);
                        std::tie(border2x,border2y,border2line)=where_are_rulings_expantion_cross_points2d(x2d[0][i+1],x2d[1][i+1],x2d[0][i+1]+BORDEREXPANTION*10000*this->betaVector[0+2*j][i+1],x2d[1][i+1]+BORDEREXPANTION*10000*this->betaVector[1+2*j][i+1]);
                        costTmp=fabs(area2(x,y,border1x,border1y,border2x,border2y));
                        if(costTmp>costMax){
                            costMax=costTmp;
                            costMaxIdxI=i;
                            costMaxIdxJ=j;
                        }
                    }
                }
        }
        return forward_as_tuple(costMaxIdxI,costMaxIdxJ);
    }

    double calculate_costA2(){
        double costSum=0,x=0,y=0,a1=0,a2=0,b1,b2,border1x=0,border1y=0,border2x=0,border2y=0;
        int border1line=0,border2line=0;
        for (int i = startToEnd[0]; i < startToEnd[1]-1; i++){
            for(int j=0;j<2;j++){
                if((betaVector[0+2*j][i]*betaVector[1+2*j][i+1]-betaVector[1+2*j][i]*betaVector[0+2*j][i+1])*pow(-1,j)>0){
                    if(betaVector[0+2*j][i]==0){
                        x=x2d[0][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        y=x2d[1][i+1]+a2*(x-x2d[0][i+1]);
                    }else if(betaVector[1+2*j][i]==0){
                        y=x2d[1][i];
                        a2=betaVector[0+2*j][i+1]/betaVector[1+2*j][i+1];
                        x=x2d[0][i+1]+a2*(y-x2d[1][i+1]);
                    }else if(betaVector[0+2*j][i+1]==0){
                        x=x2d[0][i+1];
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        y=x2d[1][i]+a1*(x-x2d[0][i]);
                    }else if(betaVector[1+2*j][i+1]==0){
                        y=x2d[1][i+1];
                        a1=betaVector[0+2*j][i]/betaVector[1+2*j][i];
                        x=x2d[0][i]+a1*(y-x2d[1][i]);
                    }else{
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        x=(x2d[1][i+1]-x2d[1][i]+a1*x2d[0][i]-a2*x2d[0][i+1])/(a1-a2);
                        y=a1*x+x2d[1][i]-a1*x2d[0][i];
                    }
                    if(x>100-BORDEREXPANTION*100&&x<100+BORDEREXPANTION*100&&y>-BORDEREXPANTION*100&&y<BORDEREXPANTION*100){
                        std::tie(border1x,border1y,border1line)=where_are_rulings_expantion_cross_points2d(x2d[0][i],x2d[1][i],x2d[0][i]+BORDEREXPANTION*10000*this->betaVector[0+2*j][i],x2d[1][i]+BORDEREXPANTION*10000*this->betaVector[1+2*j][i]);
                        std::tie(border2x,border2y,border2line)=where_are_rulings_expantion_cross_points2d(x2d[0][i+1],x2d[1][i+1],x2d[0][i+1]+BORDEREXPANTION*10000*this->betaVector[0+2*j][i+1],x2d[1][i+1]+BORDEREXPANTION*10000*this->betaVector[1+2*j][i+1]);
                        costSum+=pow(1+fabs(area2(x,y,border1x,border1y,border2x,border2y)),2);
                    }
                }
            }
        }
        return costSum;
    }

    double calculate_costAborder(){
        double costSum=0,x=0,y=0,a1=0,a2=0,b1,b2,border1x=0,border1y=0,border2x=0,border2y=0;
        int border1line=0,border2line=0;
        for (int i = startToEnd[0]; i < startToEnd[1]-1; i++){
            for(int j=0;j<2;j++){
                if((betaVector[0+2*j][i]*betaVector[1+2*j][i+1]-betaVector[1+2*j][i]*betaVector[0+2*j][i+1])*pow(-1,j)>0){
                    if(betaVector[0+2*j][i]==0){
                        x=x2d[0][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        y=x2d[1][i+1]+a2*(x-x2d[0][i+1]);
                    }else if(betaVector[1+2*j][i]==0){
                        y=x2d[1][i];
                        a2=betaVector[0+2*j][i+1]/betaVector[1+2*j][i+1];
                        x=x2d[0][i+1]+a2*(y-x2d[1][i+1]);
                    }else if(betaVector[0+2*j][i+1]==0){
                        x=x2d[0][i+1];
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        y=x2d[1][i]+a1*(x-x2d[0][i]);
                    }else if(betaVector[1+2*j][i+1]==0){
                        y=x2d[1][i+1];
                        a1=betaVector[0+2*j][i]/betaVector[1+2*j][i];
                        x=x2d[0][i]+a1*(y-x2d[1][i]);
                    }else{
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        x=(x2d[1][i+1]-x2d[1][i]+a1*x2d[0][i]-a2*x2d[0][i+1])/(a1-a2);
                        y=a1*x+x2d[1][i]-a1*x2d[0][i];
                    }
                    if(x>100-BORDEREXPANTION*100&&x<100+BORDEREXPANTION*100&&y>-BORDEREXPANTION*100&&y<BORDEREXPANTION*100){
                        costSum+=fabs(area2(x,y,borderPoints2d[0+2+j][i],borderPoints2d[1+2+j][i],borderPoints2d[0+2+j][i+1],borderPoints2d[1+2+j][i+1]));
                    }
                }
            }
        }
        return costSum;
    }

    double calculate_costACount(){
        double costSum=0,x=0,y=0,a1=0,a2=0,b1,b2,border1x=0,border1y=0,border2x=0,border2y=0;
        int border1line=0,border2line=0;
        for (int i = startToEnd[0]; i < startToEnd[1]-1; i++){
            for(int j=0;j<2;j++){
                if((betaVector[0+2*j][i]*betaVector[1+2*j][i+1]-betaVector[1+2*j][i]*betaVector[0+2*j][i+1])*pow(-1,j)>0){
                    if(betaVector[0+2*j][i]==0){
                        x=x2d[0][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        y=x2d[1][i+1]+a2*(x-x2d[0][i+1]);
                    }else if(betaVector[1+2*j][i]==0){
                        y=x2d[1][i];
                        a2=betaVector[0+2*j][i+1]/betaVector[1+2*j][i+1];
                        x=x2d[0][i+1]+a2*(y-x2d[1][i+1]);
                    }else if(betaVector[0+2*j][i+1]==0){
                        x=x2d[0][i+1];
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        y=x2d[1][i]+a1*(x-x2d[0][i]);
                    }else if(betaVector[1+2*j][i+1]==0){
                        y=x2d[1][i+1];
                        a1=betaVector[0+2*j][i]/betaVector[1+2*j][i];
                        x=x2d[0][i]+a1*(y-x2d[1][i]);
                    }else{
                        a1=betaVector[1+2*j][i]/betaVector[0+2*j][i];
                        a2=betaVector[1+2*j][i+1]/betaVector[0+2*j][i+1];
                        x=(x2d[1][i+1]-x2d[1][i]+a1*x2d[0][i]-a2*x2d[0][i+1])/(a1-a2);
                        y=a1*x+x2d[1][i]-a1*x2d[0][i];
                    }
                    if(x>100-BORDEREXPANTION*100&&x<100+BORDEREXPANTION*100&&y>-BORDEREXPANTION*100&&y<BORDEREXPANTION*100){
                        costSum++;
                    }
                }
            }
        }
        return costSum;
    }


    double calculate_costBP(){
        double costSum=0,lenMin=10000,lenMax=0,len;
        for (int i = startToEnd[0]; i < startToEnd[1]-1; i++){
            for(int j=0;j<2;j++){
                len=sqrt(pow(borderPoints2d[0+2*j][i]-borderPoints2d[0+2*j][i+1],2)+pow(borderPoints2d[1+2*j][i]-borderPoints2d[1+2*j][i+1],2));
                costSum+=len;
                if(len<lenMin){
                    lenMin=len;
                }
                if(len>lenMax){
                    lenMax=len;
                }
            }
        }
        return lenMin;
    }

};
double calculate_cost(curvedFoldingModel model1,curvedFoldingModel model2){
    double costSum=0,mat[16]={},v1x[81],v1y[81],v1z[81],v2x[81],v2y[81],v2z[81],tmp[3]={},n[3]={};
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            v1x[i*9+j]=model1.costPointsWhere3d[i][j][0];
            v1y[i*9+j]=model1.costPointsWhere3d[i][j][1];
            v1z[i*9+j]=model1.costPointsWhere3d[i][j][2];
            v2x[i*9+j]=model2.costPointsWhere3d[i][j][0];
            v2y[i*9+j]=model2.costPointsWhere3d[i][j][1];
            v2z[i*9+j]=model2.costPointsWhere3d[i][j][2];
        }
    }
    getMat(81,v1x,v1y,v1z,v2x,v2y,v2z,mat,n);
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            for(int k=0;k<3;k++){
                tmp[k]=mat[k*4+0]*model1.costPointsWhere3d[i][j][0]+mat[k*4+1]*model1.costPointsWhere3d[i][j][1]+mat[k*4+2]*model1.costPointsWhere3d[i][j][2]+mat[k*4+3];
            }
            costSum+=distance3d(tmp[0],tmp[1],tmp[2],model2.costPointsWhere3d[i][j][0],model2.costPointsWhere3d[i][j][1],model2.costPointsWhere3d[i][j][2]);
        }
    }
    return costSum/81;
}

double calculate_CostC(curvedFoldingModel model1,curvedFoldingModel model2){
    double costSum=0;

    for(int i=0;i<NUM;i++){
        for(int j=0;j<2;j++){
            costSum+=pow(fabs(model1.betaControl[j][i]-model2.betaControl[j][i]),1);
        }
    }
    return costSum;
}

double calculate_CostCsample(curvedFoldingModel model1,curvedFoldingModel model2){
    double costSum=0;

    for(int i=startToEnd[0];i<startToEnd[1];i++){
        for(int j=0;j<2;j++){
            costSum+=fabs(model1.beta[j][i]-model2.beta[j][i]);
        }
    }
    return costSum;
}

double calculate_CostC2(curvedFoldingModel model1,curvedFoldingModel model2){
    double costSum=0;

    for(int i=0;i<NUM;i++){
        for(int j=0;j<2;j++){
            costSum+=pow(1+fabs(model1.betaControl[j][i]-model2.betaControl[j][i]),2);
        }
    }
    return costSum;
}

tuple<int,int> calculate_costCmaxIdx(curvedFoldingModel model1,curvedFoldingModel model2){
    double costTmp,costCmax=0,CmaxIdxI,CmaxIdxJ;
    for(int i=0;i<NUM;i++){
        for(int j=0;j<2;j++){
            costTmp=fabs(model1.betaControl[j][i]-model2.betaControl[j][i]);
            if(costTmp>costCmax){
                costCmax=costTmp;
                CmaxIdxI=i;
                CmaxIdxJ=j;
                if(model1.betaControl[j][i]<model2.betaControl[j][i]){
                    CmaxIdxI--;
                }
            }
        }
    }
    return forward_as_tuple(CmaxIdxI,CmaxIdxJ);
}

tuple<int,int> calculate_costCmaxIdxLR(curvedFoldingModel model1,curvedFoldingModel model2,int j){
    double costTmp,costCmax=0,CmaxIdxI,CmaxIdxJ;
    for(int i=0;i<NUM;i++){
            costTmp=fabs(model1.betaControl[j][i]-model2.betaControl[j][i]);
            if(costTmp>costCmax){
                costCmax=costTmp;
                CmaxIdxI=i;
                CmaxIdxJ=j;
                if(model1.betaControl[j][i]<model2.betaControl[j][i]){
                    CmaxIdxI--;
                }
            }
    }
    return forward_as_tuple(CmaxIdxI,CmaxIdxJ);
}

double isAmaxInCmax(curvedFoldingModel model1,curvedFoldingModel model2){
    int judge=0,AmaxIdxI,AmaxIdxJ,CmaxIdxI,CmaxIdxJ;
    tie(AmaxIdxI,AmaxIdxJ)=model2.calculate_costAmaxIdx();
    tie(CmaxIdxI,CmaxIdxJ)=calculate_costCmaxIdx(model1,model2);
    double t=(double)AmaxIdxI/(double)SAMPLENUM*(double)(NUM-1);
    if(AmaxIdxJ==CmaxIdxJ&&CmaxIdxI>=0&&CmaxIdxI<NUM-1&&CmaxIdxI<=t&&t<CmaxIdxI+1){
        return 1;
    }
    return judge;
}

double isAmaxInCmaxLR(curvedFoldingModel model1,curvedFoldingModel model2,int j){
    int judge=0,AmaxIdxI,AmaxIdxJ,CmaxIdxI,CmaxIdxJ;
    tie(AmaxIdxI,AmaxIdxJ)=model2.calculate_costAmaxIdxLR(j);
    tie(CmaxIdxI,CmaxIdxJ)=calculate_costCmaxIdxLR(model1,model2,j);
    if(AmaxIdxJ==CmaxIdxJ&&CmaxIdxI<NUM-1&&betaControlIdx[CmaxIdxI]<=AmaxIdxI&&AmaxIdxI<betaControlIdx[CmaxIdxI+1]){
        return 1;
    }
    return judge;
}

void copy_2d(curvedFoldingModel *model1,curvedFoldingModel model2){
    for (int i = 0; i < SAMPLENUM; i++){
        model1->dx[i]=model2.dx[i];
        model1->kindOfCrossEdge[0][i]=model2.kindOfCrossEdge[0][i];
        model1->kindOfCrossEdge[1][i]=model2.kindOfCrossEdge[1][i];
        model1->beta[0][i]=model2.beta[0][i];
        model1->beta[1][i]=model2.beta[1][i];
        model1->rulingLength[0][i]=model2.rulingLength[0][i];
        model1->rulingLength[1][i]=model2.rulingLength[1][i];
        model1->borderPoints2d[0][i]=model2.borderPoints2d[0][i];
        model1->borderPoints2d[1][i]=model2.borderPoints2d[1][i];
        model1->borderPoints2d[2][i]=model2.borderPoints2d[2][i];
        model1->borderPoints2d[3][i]=model2.borderPoints2d[3][i];
        model1->betaVector[0][i]=model2.betaVector[0][i];
        model1->betaVector[1][i]=model2.betaVector[1][i];
        model1->betaVector[2][i]=model2.betaVector[2][i];
        model1->betaVector[3][i]=model2.betaVector[3][i];
    }
    for (int i = 0; i < NUM; i++){
        model1->betaControl[0][i]=model2.betaControl[0][i];
        model1->betaControl[1][i]=model2.betaControl[1][i];
    }
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            model1->costPointsWhichRuling[i][j][0]=model2.costPointsWhichRuling[i][j][0];
            model1->costPointsWhichRuling[i][j][1]=model2.costPointsWhichRuling[i][j][1];
            model1->check[i][j]=model2.check[i][j];
        }
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            model1->cornerPoints2d[i][j]=model2.cornerPoints2d[i][j];
        }
        model1->cornerRuling[i]=model2.cornerRuling[i];
        model1->pentagonOrNot[i/2][i%2]=model2.pentagonOrNot[i/2][i%2];
        model1->triangleOrNot[i/2][i%2]=model2.triangleOrNot[i/2][i%2];
    }
}
struct keySet{
    double key1=0,key2=0,key3=0;
    keySet(double a,double b,double c){
        key1=a;
        key2=b;
        key3=c;
    }
    // keySet(double a,double b){
    //     key1=a;
    //     key2=b;
    // }
};
void copyKeySet(keySet *k1,keySet k2){
    k1->key1=k2.key1;
    k1->key2=k2.key2;
    k1->key3=k2.key3;
}
bool operator<(keySet l,keySet r){
    if(l.key1<r.key1){
        return true;
    }else if(l.key1==r.key1){
        if(l.key2<r.key2){
            return true;
        }else if(l.key2==r.key2){
            if(l.key3<r.key3){
                return true;
            }
        }
    }
    return false;
}

bool operator>(keySet l,keySet r){
    if(l.key1>r.key1){
        return true;
    }else if(l.key1==r.key1){
        if(l.key2>r.key2){
            return true;
        }else if(l.key2==r.key2){
            if(l.key3>r.key3){
                return true;
            }
        }
    }
    return false;
}

int main(int argc, char const *argv[]){
    for(int i=0;i<RULINGDISPLACEMENTNUMBER;i++){
        for(int j=0;j<NUM;j++){
            betaControlDisplacement[i][j]*=MULTIPLYTABLE1BY;
        }
    }
    for(int i=0;i<NUM;i++){
        betaControlIdx[i]=(int)((double)i*(double)SAMPLENUM/(double)(NUM-1)+0.5);
    }
    bool localMinimumPoint=0,localMaximumPoint=0;
    for (int i = 0; i < NUM-2; i++){
        if(k2dControl[i+2]-k2dControl[i+1]>0&&k2dControl[i+1]-k2dControl[i]<0){
            localMinimumPoint=1;
        }
        if(k2dControl[i+2]-k2dControl[i+1]<0&&k2dControl[i+1]-k2dControl[i]>0){
            localMaximumPoint=1;
        }
    }
    if(localMaximumPoint&&localMinimumPoint){
        std::cout<<"folding curve includes inflection points"<<endl;
        exit(1);
    }
    
    // for (int i = 0; i < 9; i++){
    //     for (int j = 0; j < 9; j++){
    //         costPointsWhere2d[i][j][0]=20*(j+1);
    //         costPointsWhere2d[i][j][1]=100-20*(i+1);
    //     }
    // }
    
    spline(k2d,k2dControl);
    x2d[0][0]=10.156250;
    x2d[1][0]=-10.937500;
    t2d[0][0]=0.884988;
    t2d[1][0]=-0.465615;
    double denominator=sqrt(pow(t2d[0][0],2)+pow(t2d[1][0],2));
    t2d[0][0]/=denominator;
    t2d[1][0]/=denominator;
    n2d[0][0]=-t2d[1][0];
    n2d[1][0]=t2d[0][0];
    for(int i=0;i<SAMPLENUM;i++){
        dx2d[i]=dxdef;
    }
    t2d[0][1]=t2d[0][0]+k2d[0]*dx2d[0]*n2d[0][0];
    t2d[1][1]=t2d[1][0]+k2d[0]*dx2d[0]*n2d[1][0];
    denominator=sqrt(pow(t2d[0][1],2)+pow(t2d[1][1],2));
    t2d[0][1]/=denominator;
    t2d[1][1]/=denominator;
    n2d[0][1]=-t2d[1][1];
    n2d[1][1]=t2d[0][1];
    denominator=sqrt(pow(t2d[0][0]+t2d[0][1],2)+pow(t2d[1][0]+t2d[1][1],2));
    x2d[0][1]=x2d[0][0]+dx2d[0]*(t2d[0][0]+t2d[0][1])/denominator;
    x2d[1][1]=x2d[1][0]+dx2d[0]*(t2d[1][0]+t2d[1][1])/denominator;
    for (int i = 2; i < SAMPLENUM; i++){
        t2d[0][i]=t2d[0][i-2]+2*k2d[i-1]*dxdef*n2d[0][i-1];
        t2d[1][i]=t2d[1][i-2]+2*k2d[i-1]*dxdef*n2d[1][i-1];
        denominator=sqrt(pow(t2d[0][i],2)+pow(t2d[1][i],2));
        t2d[0][i]/=denominator;
        t2d[1][i]/=denominator;
        n2d[0][i]=-t2d[1][i];
        n2d[1][i]=t2d[0][i];
        denominator=sqrt(pow(t2d[0][i-1]+t2d[0][i],2)+pow(t2d[1][i-1]+t2d[1][i],2));
        x2d[0][i]=x2d[0][i-1]+dxdef*(t2d[0][i-1]+t2d[0][i])/denominator;
        x2d[1][i]=x2d[1][i-1]+dxdef*(t2d[1][i-1]+t2d[1][i])/denominator;
    }
    double d2d1[SAMPLENUM],dx1[SAMPLENUM],dy1[SAMPLENUM];
    for (int i = 0; i < SAMPLENUM-1; i++){
        dx1[i]=x2d[0][i+1]-x2d[0][i];
        dy1[i]=x2d[1][i+1]-x2d[1][i];
        d2d1[i]=sqrt(dx1[i]*dx1[i]+dy1[i]*dy1[i]);
    }
    for (int i = 1; i < SAMPLENUM-1; i++){
        if( d2d1[i-1]<=0.0 && d2d1[i]<=0.0 ){
			t2d[0][i] = t2d[1][i] = dx2d[i] = 0.0;
			continue;
		}
		if( d2d1[i-1]>0.0 && d2d1[i]>0.0 ){
			t2d[0][i] = (dx1[i-1]/d2d1[i-1] + dx1[i]/d2d1[i])*0.5;
			t2d[1][i] = (dy1[i-1]/d2d1[i-1] + dy1[i]/d2d1[i])*0.5;
			dx2d[i] = (d2d1[i-1]+d2d1[i])*0.5;
		} else if( d2d1[i-1]>0.0 ) {
			t2d[0][i] = dx1[i-1];
			t2d[1][i] = dy1[i-1];
			dx2d[i] = d2d1[i-1];
		} else {
			t2d[0][i] = dx1[i];
			t2d[1][i] = dy1[i];
			dx2d[i] = d2d1[i];
		}
        denominator=sqrt(t2d[0][i]*t2d[0][i]+t2d[1][i]*t2d[1][i]);
        t2d[0][i]/=denominator;
        t2d[1][i]/=denominator;
    }
    for(int i=2; i<SAMPLENUM-2; i++ ){
		double d0 = d2d1[i];
		double d1 = d2d1[i-1];
		double nx0 = t2d[0][i+1] - t2d[0][i];
		double nx1 = t2d[0][i]   - t2d[0][i-1];
		double ny0 = t2d[1][i+1] - t2d[1][i];
		double ny1 = t2d[1][i]   - t2d[1][i-1];

		if( d0==0.0 && d1==0.0 ){
			n2d[0][i] = n2d[1][i] = k2d[i] = 0.0;
			continue;
		}
		if( d0>0.0 && d1>0.0 ){
			n2d[0][i] = (nx0/d0 + nx1/d1)*0.5;
			n2d[1][i] = (ny0/d0 + ny1/d1)*0.5;
		} else if( d0>0.0 ){
			n2d[0][i] = nx0;
			n2d[1][i] = ny0;
		} else {
			n2d[0][i] = nx1;
			n2d[1][i] = ny1;
		}
		k2d[i] = sqrt( n2d[0][i]*n2d[0][i] + n2d[1][i]*n2d[1][i] );
		if( t2d[0][i]*n2d[1][i] - t2d[1][i]*n2d[0][i] < 0 ){
			k2d[i] = -k2d[i];
		}
		if( fabs(k2d[i]) > 0.0 ){
			n2d[0][i] /= k2d[i];
			n2d[1][i] /= k2d[i];
		}
	}

    for (int i = 0; i < SAMPLENUM; i++){
        if(x2d[0][i]<0||x2d[0][i]>200||x2d[1][i]<-100||x2d[1][i]>100){
            std::cout<<"folding curve is sticking out "<<endl;
            std::cout<<i<<" "<<x2d[0][i]<<" "<<x2d[1][i]<<endl;
            exit(1);
        }
    }
    
    std::tie(curveCrossPoints2d[0][0],curveCrossPoints2d[0][1],curveCrossPoints2d[0][2])=where_are_rulings_cross_points2d(x2d[0][3],x2d[1][3],x2d[0][3]-400*t2d[0][3],x2d[1][3]-400*t2d[1][3]);
    std::tie(curveCrossPoints2d[1][0],curveCrossPoints2d[1][1],curveCrossPoints2d[1][2])=where_are_rulings_cross_points2d(x2d[0][SAMPLENUM-4],x2d[1][SAMPLENUM-4],x2d[0][SAMPLENUM-4]+400*t2d[0][SAMPLENUM-4],x2d[1][SAMPLENUM-4]+400*t2d[1][SAMPLENUM-4]);
    curveTipToEdge[0]=distance2d(x2d[0][3],x2d[1][3],curveCrossPoints2d[0][0],curveCrossPoints2d[0][1]);
    curveTipToEdge[1]=distance2d(x2d[0][SAMPLENUM-4],x2d[1][SAMPLENUM-4],curveCrossPoints2d[1][0],curveCrossPoints2d[1][1]);

    int ok[6]={},startModelNumber=STARTNUM,goalModelNumber=GOALNUM;
    double alphalimit[100]={0,60,40,10,50,40,40,50,50,30,30,58.4681,66.8785,62.9176,76.0825,71.331};
    double startAlpha=alphalimit[startModelNumber],goalAlpha=alphalimit[goalModelNumber];
    if(ALPHANUMBER==1){
        alphaDisplacement[0]=goalAlpha;
    }else{
        alphaDisplacement[0]=startAlpha;
        for(int i=1;i<ALPHANUMBER;i++){
            alphaDisplacement[i]=goalAlpha-2*(i-1);
        }
    }
    curvedFoldingModel* startModel=new curvedFoldingModel;
    curvedFoldingModel* goalModel=new curvedFoldingModel;
    double startModelBetaControl[2][NUM]={},goalModelBetaControl[2][NUM]={};
    double startModelAlphaControl[NUM]={},startModelTaoControl[NUM]={};
    double goalModelAlphaControl[NUM]={},goalModelTaoControl[NUM]={};
    
    
    startModel->name(0,startModelNumber,0),goalModel->name(-1,goalModelNumber,0);
    for(int i=0;i<NUM;i++){
        startModelBetaControl[0][i]=betaControls[startModelNumber][0][i];
        startModelBetaControl[1][i]=betaControls[startModelNumber][1][i];
        goalModelBetaControl[0][i]=betaControls[goalModelNumber][0][i];
        goalModelBetaControl[1][i]=betaControls[goalModelNumber][1][i];
        startModelAlphaControl[i]=TAcontrols[startModelNumber][i][1];
        startModelTaoControl[i]=TAcontrols[startModelNumber][i][0];
        goalModelAlphaControl[i]=TAcontrols[goalModelNumber][i][1];
        goalModelTaoControl[i]=TAcontrols[goalModelNumber][i][0];
    }
    if(startModelNumber<=10){
        ok[0]=startModel->calculate_2d(startModelBetaControl);
        if(ok[0]==1){
            ok[1]=startModel->calculate_3d(startAlpha);
        }
    }else{
        ok[2]=startModel->calculate_3d(startModelAlphaControl,startModelTaoControl);
    }
    if(goalModelNumber<=10){
        ok[3]=goalModel->calculate_2d(goalModelBetaControl);
        if(ok[3]==1){
            ok[4]=goalModel->calculate_3d(goalAlpha);
        }
    }else{
        ok[5]=goalModel->calculate_3d(goalModelAlphaControl,goalModelTaoControl); 
    }
    // curvedFoldingModel* anotherModel=new curvedFoldingModel;
    // double anotherModelBetaControl[2][NUM]={};
    // for(int i=0;i<NUM;i++){
    //     anotherModelBetaControl[0][i]=startModel->betaControl[0][i];
    //     anotherModelBetaControl[1][i]=startModel->betaControl[1][i];
    // }
    // ok[0]=anotherModel->calculate_2d(anotherModelBetaControl);
    // if(ok[0]==1){
    //     ok[1]=anotherModel->calculate_3d(alphalimit[startModelNumber]);
    // }

    // cout<<ok[0]<<" "<<ok[1]<<" "<<ok[2]<<" ";
    // delete anotherModel;
    // cout<<ok[3]<<" "<<ok[4]<<" "<<ok[5]<<endl;
    // double dbeta=0;
    // for(int i=0;i<NUM;i++){
    //     dbeta+=fabs(startModel->betaControl[0][i]-goalModel->betaControl[0][i]);
    //     dbeta+=fabs(startModel->betaControl[1][i]-goalModel->betaControl[1][i]);
    // }
    // cout<<dbeta<<endl;
    std::cout<<ALPHANUMBER<<endl;
    std::cout<<RULINGDISPLACEMENTNUMBER<<endl;
    std::cout<<NUMBER_OF_BRACES<<endl;
    //yeah
    startModel->draw_2d();
    startModel->draw_3d();


    // for(int i=0;i<startModel->bracePoints.size();i++){
    //     for(int j=0;j<startModel->bracePoints[i].size();j++){
    //         for(int k=0;k<2;k++){
    //             for(int l=0;l<3;l++){
    //                 cout<<startModel->bracePoints[i][j][k][l]<<" ";
    //             }
    //             cout<<endl;

    //         }
    //     }
    // }

    // cout<<startModel->bracePoints.size()<<endl;

    // startModel->calculate_2d(startModelBetaControl);
    // goalModel->draw_2d();
    // startModel->calculate_2d(startModelBetaControl);
    // startModel->calculate_3d(startAlpha);
    // startModel->calculate_3d(20);
    // goalModel->calculate_2d(startModelBetaControl);
    // goalModel->calculate_3d(10);

    // for(int i=0;i<9;i++){
    //     for(int j=0;j<9;j++){
    //         float Float=0;
    //         for(int k=0;k<3;k++){
    //             Float=goalModel->costPointsWhere3d[i][j][k];
    //             cout<<Float<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    // goalModel->draw_3d();
    // cout<<calculate_cost(*startModel,*goalModel);
    // cout<<calculate_CostC(*startModel,*goalModel)<<endl;
    // cout<<startModel->calculate_costA()<<endl;
#if 0
    double minus1=0,minus2=0,minus3=1;
    curvedFoldingModel* copyModel=new curvedFoldingModel;
    vector<vector<curvedFoldingModel>> models(RULINGDISPLACEMENTNUMBER*RULINGDISPLACEMENTNUMBER,vector<curvedFoldingModel>(ALPHANUMBER));
    vector<vector<vector<int>>> modelSampleOk(REPEAT,vector<vector<int>>(RULINGDISPLACEMENTNUMBER*RULINGDISPLACEMENTNUMBER,vector<int>(ALPHANUMBER)));
    double betaControlToInsert[2][NUM]={0},betaControlLog[REPEAT][2][NUM]={},prevBetaControl[2][NUM]={0},globalCostMinimum=calculate_cost(*startModel,*goalModel);
    keySet costMinimum(
    calculate_CostC(*goalModel,*startModel)*pow(-1,minus1)
    
    ,
    // (isAmaxInCmaxLR(*goalModel,*startModel,0)*startModel->calculate_costAmaxLR(0)+isAmaxInCmaxLR(*goalModel,*startModel,1)*startModel->calculate_costAmaxLR(1))*pow(-1,minus2)
    isAmaxInCmax(*goalModel,*startModel)*startModel->calculate_costAmax()*pow(-1,minus2)
    // 0
    ,
    startModel->calculate_costA()*pow(-1,minus3)
    // 0
    ),prevCostMinimum(costMinimum.key1,costMinimum.key2,costMinimum.key3),startCost(costMinimum.key1,costMinimum.key2,costMinimum.key3);
    vector<vector<double>> betaControlToLog(2,vector<double>(NUM));
    vector<vector<vector<vector<double>>>> betaControlStrage(REPEAT,vector<vector<vector<double>>>(RULINGDISPLACEMENTNUMBER*RULINGDISPLACEMENTNUMBER*ALPHANUMBER,vector<vector<double>>(2,vector<double>(NUM))));
    vector<vector<vector<double>>> costLog(REPEAT,vector<vector<double>>(RULINGDISPLACEMENTNUMBER*RULINGDISPLACEMENTNUMBER,vector<double>(ALPHANUMBER)));
    int costMinimumNumber[REPEAT][2]={0},nearTheGoal,finish=0,any=0,depthLog[REPEAT]={},depth=0,whereIsThisDepthModelSelected[REPEAT]={},whereAreThisDepthModels[REPEAT]={},deepOrShallow=1,randomOrNot=0;
    float Float=globalCostMinimum;
    cout<<ALPHANUMBER<<endl;
    cout<<RULINGDISPLACEMENTNUMBER<<endl;
    std::cout<<Float<<endl;
    clock_t start=clock(),end=0;
    
    double CAlog[REPEAT]={};

    // not random
    vector<multimap<keySet,int>> CostCLog(REPEAT,multimap<keySet,int>());

    for (int i = 0; i < REPEAT; i++){
        for (int j = 0; j < RULINGDISPLACEMENTNUMBER*RULINGDISPLACEMENTNUMBER; j++){
            for (int l = 0; l < ALPHANUMBER; l++){
                costLog[i][j][l]=-1;
            }
        }
    }
    for (int i = 0; i < REPEAT; i++){
        any=0;
        if(deepOrShallow==1){
            for (int j = 0; j < RULINGDISPLACEMENTNUMBER*RULINGDISPLACEMENTNUMBER; j++){
                for (int l = 0; l < ALPHANUMBER; l++){
                    models[j][l].name(i+1,j,alphaDisplacement[l]);
                }
                for (int l = 0; l < NUM; l++){
                    if(depth==0){
                        betaControlToInsert[0][l]=startModel->betaControl[0][l]+betaControlDisplacement[j/RULINGDISPLACEMENTNUMBER][l];
                        betaControlToInsert[1][l]=startModel->betaControl[1][l]+betaControlDisplacement[j%RULINGDISPLACEMENTNUMBER][l];
                    }else{
                        betaControlToInsert[0][l]=betaControlLog[depth-1][0][l]+betaControlDisplacement[j/RULINGDISPLACEMENTNUMBER][l];
                        betaControlToInsert[1][l]=betaControlLog[depth-1][1][l]+betaControlDisplacement[j%RULINGDISPLACEMENTNUMBER][l];
                    }
                }
                modelSampleOk[whereAreThisDepthModels[depth]][j][0]=models[j][0].calculate_2d(betaControlToInsert);
                if(modelSampleOk[whereAreThisDepthModels[depth]][j][0]==1){
                    copy_2d(copyModel,models[j][0]);
                    modelSampleOk[whereAreThisDepthModels[depth]][j][0]=models[j][0].calculate_3d(alphaDisplacement[0]);
                    if(modelSampleOk[whereAreThisDepthModels[depth]][j][0]==1&&keySet(
                    calculate_CostC(*goalModel,models[j][0])*pow(-1,minus1)
                    // calculate_CostC2(*goalModel,models[j][0])*pow(-1,minus1)
                    ,
                    // (isAmaxInCmaxLR(*goalModel,models[j][0],0)*models[j][0].calculate_costAmaxLR(0)+isAmaxInCmaxLR(*goalModel,models[j][0],1)*models[j][0].calculate_costAmaxLR(1))*pow(-1,minus2)
                    isAmaxInCmax(*goalModel,models[j][0])*models[j][0].calculate_costAmax()*pow(-1,minus2)
                    // 0
                    ,
                    models[j][0].calculate_costA()*pow(-1,minus3)
                    // 0
                    )<costMinimum){
                        any=1;
                        double costMinimumAlpha[3]={DBL_MAX};
                        costLog[i][j][0]=calculate_cost(models[j][0],*goalModel);
                        if(costLog[i][j][0]<costMinimumAlpha[0]){
                            costMinimumAlpha[0]=costLog[i][j][0];
                            costMinimumAlpha[1]=j;
                            costMinimumAlpha[2]=0;
                        }
                        for (int l = 1; l < ALPHANUMBER; l++){
                            copy_2d(&models[j][l],*copyModel);
                        }
                        for (int l = 1; l < ALPHANUMBER; l++){
                            modelSampleOk[whereAreThisDepthModels[depth]][j][l]=models[j][l].calculate_3d(alphaDisplacement[l]);
                            if(modelSampleOk[whereAreThisDepthModels[depth]][j][l]==1){
                                costLog[i][j][l]=calculate_cost(models[j][l],*goalModel);
                                if(costLog[i][j][l]<costMinimumAlpha[0]){
                                    costMinimumAlpha[0]=costLog[i][j][l];
                                    costMinimumAlpha[1]=j;
                                    costMinimumAlpha[2]=l;
                                }
                                break;
                            }
                        }
                        if(costMinimumAlpha[0]<DBL_MAX){
                            for (int l = 0; l < NUM; l++){
                                betaControlStrage[i][int(costMinimumAlpha[1]*ALPHANUMBER+costMinimumAlpha[2])][0][l]=betaControlToLog[0][l]=betaControlToInsert[0][l];
                                betaControlStrage[i][int(costMinimumAlpha[1]*ALPHANUMBER+costMinimumAlpha[2])][1][l]=betaControlToLog[1][l]=betaControlToInsert[1][l];
                            }
                            CostCLog[i].emplace(keySet(
                            calculate_CostC(*goalModel,models[costMinimumAlpha[1]][costMinimumAlpha[2]])*pow(-1,minus1)
                            ,
                            // (isAmaxInCmaxLR(*goalModel,models[costMinimumAlpha[1]][costMinimumAlpha[2]],0)*models[costMinimumAlpha[1]][costMinimumAlpha[2]].calculate_costAmaxLR(0)+isAmaxInCmaxLR(*goalModel,models[costMinimumAlpha[1]][costMinimumAlpha[2]],1)*models[costMinimumAlpha[1]][costMinimumAlpha[2]].calculate_costAmaxLR(1))*pow(-1,minus2)
                            isAmaxInCmax(*goalModel,models[costMinimumAlpha[1]][costMinimumAlpha[2]])*models[costMinimumAlpha[1]][costMinimumAlpha[2]].calculate_costAmax()*pow(-1,minus2)
                            // 0
                            ,
                            models[costMinimumAlpha[1]][costMinimumAlpha[2]].calculate_costA()*pow(-1,minus3)
                            // 0
                            ),int(costMinimumAlpha[1]*ALPHANUMBER+costMinimumAlpha[2]));
                        }
                    }
                }
            }
        }
        if(!CostCLog[whereAreThisDepthModels[depth]].empty()){
            copyKeySet(&costMinimum,CostCLog[whereAreThisDepthModels[depth]].begin()->first);
            costMinimumNumber[i][0]=CostCLog[whereAreThisDepthModels[depth]].begin()->second/ALPHANUMBER;
            costMinimumNumber[i][1]=CostCLog[whereAreThisDepthModels[depth]].begin()->second%ALPHANUMBER;
            costLog[i][costMinimumNumber[i][0]][costMinimumNumber[i][1]]=costLog[whereAreThisDepthModels[depth]][costMinimumNumber[i][0]][costMinimumNumber[i][1]];
        }
        // nearTheGoal=0;
        // for(int l=0;l<NUM;l++){
        //     for(int j=0;j<2;j++){
        //         if(fabs(startModel->betaControl[j][l]-goalModel->betaControl[j][l])<=0.1){
        //             nearTheGoal++;
        //         }
        //     }
        // }
        if(costLog[i][costMinimumNumber[i][0]][costMinimumNumber[i][1]]!=-1&&costLog[i][costMinimumNumber[i][0]][costMinimumNumber[i][1]]<globalCostMinimum){
            globalCostMinimum=costLog[i][costMinimumNumber[i][0]][costMinimumNumber[i][1]];
        }
        if(costLog[i][costMinimumNumber[i][0]][costMinimumNumber[i][1]]!=-1&&costLog[i][costMinimumNumber[i][0]][costMinimumNumber[i][1]]<0.3){
        // if(nearTheGoal==8){
            // int remain[14]={};
            // for(int j=0;j<14;j++){

            // }
            Beep(440,200);
            Beep(494,200);
            end=clock();
            finish=1;
            std::cout<<finish<<endl;
            Float=(double)(end-start)/CLOCKS_PER_SEC;
            std::cout<<Float<<endl;
            std::cout<<"0"<<endl;
            std::cout<<i<<endl;    
            depthLog[i]=depth;
            for (int j = 0; j <= i; j++)
            {
                Float=costLog[j][costMinimumNumber[j][0]][costMinimumNumber[j][1]];
                std::cout<<costMinimumNumber[j][0]<<" "<<alphaDisplacement[costMinimumNumber[j][1]]<<" "<<Float<<endl;
                Float=depthLog[j];
                cout<<Float<<endl;
            }
            Float=globalCostMinimum;
            cout<<globalCostMinimum<<endl;
            models[costMinimumNumber[i][0]][costMinimumNumber[i][1]].draw_2d();
            models[costMinimumNumber[i][0]][costMinimumNumber[i][1]].draw_3d();
            delete startModel;
            delete goalModel;
            exit(1);
        }
        if(costMinimum>prevCostMinimum){
            cout<<i<<" costMinimum>prevCostMinimum"<<endl;
            exit(1);
        }
        if(costMinimum.key1==prevCostMinimum.key1&&costMinimum.key2==prevCostMinimum.key2){
            if(depth==0){
                if(i==0){
                    cout<<"It stopped after the first iteration"<<endl;
                    Beep(440,200);
                    Beep(494,200);
                    delete startModel;
                    delete goalModel;
                    exit(1);
                }
                end=clock();
                std::cout<<finish<<endl;
                Float=(double)(end-start)/CLOCKS_PER_SEC;
                std::cout<<Float<<endl;
                std::cout<<0<<endl;
                std::cout<<i-1<<endl;
                for (int j = 0; j <= i-1; j++)
                {
                    Float=costLog[j][costMinimumNumber[j][0]][costMinimumNumber[j][1]];
                    std::cout<<costMinimumNumber[j][0]<<" "<<alphaDisplacement[costMinimumNumber[j][1]]<<" "<<Float<<endl;
                    Float=depthLog[j];
                    cout<<Float<<endl;
                }
                for(int j=i-1;j>=0;j--){
                    if(costLog[j][costMinimumNumber[j][0]][costMinimumNumber[j][1]]!=-2){
                        Beep(440,200);
                        Beep(494,200);
                        models[costMinimumNumber[j][0]][costMinimumNumber[j][1]].name(j+1,costMinimumNumber[j][0],alphaDisplacement[costMinimumNumber[j][1]]);
                        for (int l = 0; l < NUM; l++){
                            betaControlToInsert[0][l]=betaControlLog[depthLog[j]][0][l];
                            betaControlToInsert[1][l]=betaControlLog[depthLog[j]][1][l];
                        }
                        Float=globalCostMinimum;
                        cout<<globalCostMinimum<<endl;
                        models[costMinimumNumber[j][0]][costMinimumNumber[j][1]].calculate_2d(betaControlToInsert);
                        models[costMinimumNumber[j][0]][costMinimumNumber[j][1]].calculate_3d(alphaDisplacement[costMinimumNumber[j][1]]);
                        models[costMinimumNumber[j][0]][costMinimumNumber[j][1]].draw_2d();
                        models[costMinimumNumber[j][0]][costMinimumNumber[j][1]].draw_3d();
                        break;
                    }
                }
                delete startModel;
                delete goalModel;
                exit(1);
            }
            if(depth==1){
                copyKeySet(&prevCostMinimum,startCost);
            }else{
                copyKeySet(&prevCostMinimum,CostCLog[whereAreThisDepthModels[depth-2]].begin()->first);
            }
            costLog[i][costMinimumNumber[i][0]][costMinimumNumber[i][1]]=-2;
            CostCLog[whereAreThisDepthModels[depth-1]].erase(CostCLog[whereAreThisDepthModels[depth-1]].begin());
            copyKeySet(&costMinimum,prevCostMinimum);
            modelSampleOk[whereIsThisDepthModelSelected[depth-1]][costMinimumNumber[whereIsThisDepthModelSelected[depth-1]][0]][0]=-1;
            depthLog[i]=depth;
            depth--;
            deepOrShallow=-1;
        }else{
            for (int j = 0; j < NUM; j++){
                betaControlLog[depth][0][j]=betaControlStrage[whereAreThisDepthModels[depth]][CostCLog[whereAreThisDepthModels[depth]].begin()->second][0][j];
                betaControlLog[depth][1][j]=betaControlStrage[whereAreThisDepthModels[depth]][CostCLog[whereAreThisDepthModels[depth]].begin()->second][1][j];
            }
            copyKeySet(&prevCostMinimum,costMinimum);
            if(i!=REPEAT-1){
                whereIsThisDepthModelSelected[depth]=i;
                whereIsThisDepthModelSelected[depth+1]=i+1;
                whereAreThisDepthModels[depth+1]=i+1;
            }
            depthLog[i]=depth;
            depth++;
            deepOrShallow=1;
        }
    }

    end=clock();
    std::cout<<finish<<endl;
    Float=(double)(end-start)/CLOCKS_PER_SEC;
    std::cout<<Float<<endl;
    std::cout<<randomOrNot<<endl;
    std::cout<<REPEAT-1<<endl;
    for (int j = 0; j <REPEAT; j++)
    {
        Float=costLog[j][costMinimumNumber[j][0]][costMinimumNumber[j][1]];
        std::cout<<costMinimumNumber[j][0]<<" "<<alphaDisplacement[costMinimumNumber[j][1]]<<" "<<Float<<endl;
        Float=depthLog[j];
        cout<<Float<<endl;
    }
    for(int j=REPEAT-1;j>=0;j--){
        if(costLog[j][costMinimumNumber[j][0]][costMinimumNumber[j][1]]!=-2){
            Beep(440,200);
            Beep(494,200);
            models[costMinimumNumber[j][0]][costMinimumNumber[j][1]].name(j+1,costMinimumNumber[j][0],alphaDisplacement[costMinimumNumber[j][1]]);
            for (int l = 0; l < NUM; l++){
                betaControlToInsert[0][l]=betaControlLog[depthLog[j]][0][l];
                betaControlToInsert[1][l]=betaControlLog[depthLog[j]][1][l];
            }
            Float=globalCostMinimum;
            cout<<globalCostMinimum<<endl;
            models[costMinimumNumber[j][0]][costMinimumNumber[j][1]].calculate_2d(betaControlToInsert);
            models[costMinimumNumber[j][0]][costMinimumNumber[j][1]].calculate_3d(alphaDisplacement[costMinimumNumber[j][1]]);
            models[costMinimumNumber[j][0]][costMinimumNumber[j][1]].draw_2d();
            models[costMinimumNumber[j][0]][costMinimumNumber[j][1]].draw_3d();
            break;
        }
    }
    delete copyModel;
#endif
    delete startModel;
    delete goalModel;
}