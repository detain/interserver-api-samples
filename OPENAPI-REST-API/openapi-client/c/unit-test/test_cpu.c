#ifndef cpu_TEST
#define cpu_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cpu_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cpu.h"
cpu_t* instantiate_cpu(int include_optional);



cpu_t* instantiate_cpu(int include_optional) {
  cpu_t* cpu = NULL;
  if (include_optional) {
    cpu = cpu_create(
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    cpu = cpu_create(
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return cpu;
}


#ifdef cpu_MAIN

void test_cpu(int include_optional) {
    cpu_t* cpu_1 = instantiate_cpu(include_optional);

	cJSON* jsoncpu_1 = cpu_convertToJSON(cpu_1);
	printf("cpu :\n%s\n", cJSON_Print(jsoncpu_1));
	cpu_t* cpu_2 = cpu_parseFromJSON(jsoncpu_1);
	cJSON* jsoncpu_2 = cpu_convertToJSON(cpu_2);
	printf("repeating cpu:\n%s\n", cJSON_Print(jsoncpu_2));
}

int main() {
  test_cpu(1);
  test_cpu(0);

  printf("Hello world \n");
  return 0;
}

#endif // cpu_MAIN
#endif // cpu_TEST
