extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *); 
void reach_error() { __assert_fail("0", "vnew2.c", 3, "reach_error"); }
extern void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}
int __VERIFIER_nondet_int();

int abs(int x){
  return x < 0 ? -x : x;
}

int main() {

  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();

  __VERIFIER_assume((x >= 0));
  __VERIFIER_assume((x <= 2));
  __VERIFIER_assume((y <= 2));
  __VERIFIER_assume((y >= 0));

  while (__VERIFIER_nondet_int()) {
    {
    (x  = (x + 2));
    (y  = (y + 2));
    }

  }

if ( (y == 0) )
__VERIFIER_assert( (x != 4) );

}
