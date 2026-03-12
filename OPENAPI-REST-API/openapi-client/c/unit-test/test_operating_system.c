#ifndef operating_system_TEST
#define operating_system_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define operating_system_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/operating_system.h"
operating_system_t* instantiate_operating_system(int include_optional);



operating_system_t* instantiate_operating_system(int include_optional) {
  operating_system_t* operating_system = NULL;
  if (include_optional) {
    operating_system = operating_system_create(
      56,
      "0",
      1.337
    );
  } else {
    operating_system = operating_system_create(
      56,
      "0",
      1.337
    );
  }

  return operating_system;
}


#ifdef operating_system_MAIN

void test_operating_system(int include_optional) {
    operating_system_t* operating_system_1 = instantiate_operating_system(include_optional);

	cJSON* jsonoperating_system_1 = operating_system_convertToJSON(operating_system_1);
	printf("operating_system :\n%s\n", cJSON_Print(jsonoperating_system_1));
	operating_system_t* operating_system_2 = operating_system_parseFromJSON(jsonoperating_system_1);
	cJSON* jsonoperating_system_2 = operating_system_convertToJSON(operating_system_2);
	printf("repeating operating_system:\n%s\n", cJSON_Print(jsonoperating_system_2));
}

int main() {
  test_operating_system(1);
  test_operating_system(0);

  printf("Hello world \n");
  return 0;
}

#endif // operating_system_MAIN
#endif // operating_system_TEST
