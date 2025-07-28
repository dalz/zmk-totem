#define LPT 0
#define LRT 1
#define LMT 2
#define LIT 3
#define LJT 4
#define RJT 5
#define RIT 6
#define RMT 7
#define RRT 8
#define RPT 9
#define LPM 10
#define LRM 11
#define LMM 12
#define LIM 13
#define LJM 14
#define RJM 15
#define RIM 16
#define RMM 17
#define RRM 18
#define RPM 19
#define LPS 20
#define LPB 21
#define LRB 22
#define LMB 23
#define LIB 24
#define LJB 25
#define RJB 26
#define RIB 27
#define RMB 28
#define RRB 29
#define RPB 30
#define RPS 31
#define LTI 32
#define LTM 33
#define LTO 34
#define RTO 35
#define RTM 36
#define RTI 37

#define KEYS_LEFT_MAIN LPT LRT LMT LIT LJT LPM LRM LMM LIM LJM LPS LPB LRB LMB LIB LJB
#define KEYS_LEFT_THUMB LTI LTM LTO
#define KEYS_LEFT KEYS_LEFT_MAIN KEYS_LEFT_THUMB

#define KEYS_RIGHT_MAIN RPT RRT RMT RIT RJT RPM RRM RMM RIM RJM RPS RPB RRB RMB RIB RJB
#define KEYS_RIGHT_THUMB RTI RTM RTO
#define KEYS_RIGHT KEYS_RIGHT_MAIN KEYS_RIGHT_THUMB

#define A_AC RA(Z)
#define E_GR RA(F)
#define E_AC RA(G)
#define I_AC RA(V)
#define O_AC RA(COMMA)
#define U_AC RA(H)
