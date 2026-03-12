#ifndef modules_TEST
#define modules_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define modules_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/modules.h"
modules_t* instantiate_modules(int include_optional);



modules_t* instantiate_modules(int include_optional) {
  modules_t* modules = NULL;
  if (include_optional) {
    modules = modules_create(
    );
  } else {
    modules = modules_create(
    );
  }

  return modules;
}


#ifdef modules_MAIN

void test_modules(int include_optional) {
    modules_t* modules_1 = instantiate_modules(include_optional);

	cJSON* jsonmodules_1 = modules_convertToJSON(modules_1);
	printf("modules :\n%s\n", cJSON_Print(jsonmodules_1));
	modules_t* modules_2 = modules_parseFromJSON(jsonmodules_1);
	cJSON* jsonmodules_2 = modules_convertToJSON(modules_2);
	printf("repeating modules:\n%s\n", cJSON_Print(jsonmodules_2));
}

int main() {
  test_modules(1);
  test_modules(0);

  printf("Hello world \n");
  return 0;
}

#endif // modules_MAIN
#endif // modules_TEST
