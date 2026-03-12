#ifndef cpu_with_defaults_TEST
#define cpu_with_defaults_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cpu_with_defaults_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cpu_with_defaults.h"
cpu_with_defaults_t* instantiate_cpu_with_defaults(int include_optional);

#include "test_memory_option.c"
#include "test_hard_drive.c"


cpu_with_defaults_t* instantiate_cpu_with_defaults(int include_optional) {
  cpu_with_defaults_t* cpu_with_defaults = NULL;
  if (include_optional) {
    cpu_with_defaults = cpu_with_defaults_create(
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
      "0",
       // false, not to have infinite recursion
      instantiate_memory_option(0),
       // false, not to have infinite recursion
      instantiate_hard_drive(0),
      "0"
    );
  } else {
    cpu_with_defaults = cpu_with_defaults_create(
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
      "0",
      NULL,
      NULL,
      "0"
    );
  }

  return cpu_with_defaults;
}


#ifdef cpu_with_defaults_MAIN

void test_cpu_with_defaults(int include_optional) {
    cpu_with_defaults_t* cpu_with_defaults_1 = instantiate_cpu_with_defaults(include_optional);

	cJSON* jsoncpu_with_defaults_1 = cpu_with_defaults_convertToJSON(cpu_with_defaults_1);
	printf("cpu_with_defaults :\n%s\n", cJSON_Print(jsoncpu_with_defaults_1));
	cpu_with_defaults_t* cpu_with_defaults_2 = cpu_with_defaults_parseFromJSON(jsoncpu_with_defaults_1);
	cJSON* jsoncpu_with_defaults_2 = cpu_with_defaults_convertToJSON(cpu_with_defaults_2);
	printf("repeating cpu_with_defaults:\n%s\n", cJSON_Print(jsoncpu_with_defaults_2));
}

int main() {
  test_cpu_with_defaults(1);
  test_cpu_with_defaults(0);

  printf("Hello world \n");
  return 0;
}

#endif // cpu_with_defaults_MAIN
#endif // cpu_with_defaults_TEST
