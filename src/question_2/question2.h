bool test_config();


class Dice{
 public: 
 int Roll(int r); // return the random roll
 int setSides(); // how many sides this die has
 int NumRolls(int r); // # times this die rolled
 private:

 int s;
 int r;
};