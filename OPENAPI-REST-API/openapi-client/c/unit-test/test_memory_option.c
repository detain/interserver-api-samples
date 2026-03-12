#ifndef memory_option_TEST
#define memory_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define memory_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/memory_option.h"
memory_option_t* instantiate_memory_option(int include_optional);



memory_option_t* instantiate_memory_option(int include_optional) {
  memory_option_t* memory_option = NULL;
  if (include_optional) {
    memory_option = memory_option_create(
      56,
      "0",
      1.337,
      "0"
    );
  } else {
    memory_option = memory_option_create(
      56,
      "0",
      1.337,
      "0"
    );
  }

  return memory_option;
}


#ifdef memory_option_MAIN

void test_memory_option(int include_optional) {
    memory_option_t* memory_option_1 = instantiate_memory_option(include_optional);

	cJSON* jsonmemory_option_1 = memory_option_convertToJSON(memory_option_1);
	printf("memory_option :\n%s\n", cJSON_Print(jsonmemory_option_1));
	memory_option_t* memory_option_2 = memory_option_parseFromJSON(jsonmemory_option_1);
	cJSON* jsonmemory_option_2 = memory_option_convertToJSON(memory_option_2);
	printf("repeating memory_option:\n%s\n", cJSON_Print(jsonmemory_option_2));
}

int main() {
  test_memory_option(1);
  test_memory_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // memory_option_MAIN
#endif // memory_option_TEST
