#ifndef REGIST_C
#define REGIST_C

 // Checks for registration details of user
int regist_status(long pd );

// Checks details from the pre registered patients
int existregist();

// Checks which direction he has to move
int vehicle_status(int );

// Structure that stores all details of a user
typedef struct user{
    int age;
    long vehiclenumber;
    int ph_number;
    int secret_code;
    int direction_type;
    int user_tolls;
}user_details;

// variable pd that stores details of upto 1000 patients
user_details pd[1000];

#endif