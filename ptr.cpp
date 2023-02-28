#include <iostream>
int main(){
 uint a=1;
 uintptr_t p=(uintptr_t) &a;
 // Always found
  uintptr_t pc;

  // The following two are either both found, or not found
  uintptr_t local_pc=0; // 0 if not found
}
