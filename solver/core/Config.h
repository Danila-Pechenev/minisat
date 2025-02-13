// ---------- Main solver parameters ----------
//
// ccmin-mode (recommended 1 or 2). Default: 2 | Controls conflict clause minimization (0=none, 1=basic, 2=deep)
#define CCMIN_MODE 1
//
// rfirst. Default: 100 | The base restart interval
#define RFIRST 100
//
// Default polarity value. Default: true | In Minisat all polarities are assigned the same value at the beginning of the work
#define DEFAULT_POLARITY_VALUE false
//
// --------------------------------------------
// --------------------------------------------
// ---------------- Heuristics ----------------
//
// >>> Branching heuristics <<<<<<<<<<<<<<<<<<<
//
// Define to use back propagation
#define BACKPROP
// Options:
#define COMPARE_BY_ACTIVITY false // Define true to use activity-based back propagation
#define PREFER_XOR false          // Define true to use prefer-XOR back propagation
#define AVOID_XOR false           // Define true to use avoid-XOR back propagation
//
// Define to use jFrontiers-activity heuristic
// #define JFRONTIERS_ACTIVITY
//
// Define to start solving with Circuit-SAT heuristic
// #define CSAT_HEURISTIC_START
// Options:
#define DEFAULT_HEURISTIC_AFTER_N_RESTARTS 1 // Start solving with default Minisat heuristic after N restarts
#define RFIRST_CSAT 100                      // rfirst for Circuit-SAT heuristic
#define RESET_ACTIVITY true                  // Define true to reset activities after solving with Circuit-SAT heuristic or not
#define RESET_RESTARTS true                  // Define true to reset restarts after solving with Circuit-SAT heuristic or not
#define RESET_POLARITY false                 // Define true to reset polarities after solving with Circuit-SAT heuristic or not
//
// >>> Polarity heuristics <<<<<<<<<<<<<<<<<<<<
//
// Define to use max-probability polarity initialization heuristic
// #define POLARITY_INIT_MAXPROB
//
// Define to use max-propagation polarity initialization heuristic
// #define POLARITY_INIT_MAXBACKPROP
//
// --------------------------------------------