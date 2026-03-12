#ifndef hard_drive_TEST
#define hard_drive_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hard_drive_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hard_drive.h"
hard_drive_t* instantiate_hard_drive(int include_optional);



hard_drive_t* instantiate_hard_drive(int include_optional) {
  hard_drive_t* hard_drive = NULL;
  if (include_optional) {
    hard_drive = hard_drive_create(
      56,
      "0",
      "0",
      "0",
      1.337,
      "0"
    );
  } else {
    hard_drive = hard_drive_create(
      56,
      "0",
      "0",
      "0",
      1.337,
      "0"
    );
  }

  return hard_drive;
}


#ifdef hard_drive_MAIN

void test_hard_drive(int include_optional) {
    hard_drive_t* hard_drive_1 = instantiate_hard_drive(include_optional);

	cJSON* jsonhard_drive_1 = hard_drive_convertToJSON(hard_drive_1);
	printf("hard_drive :\n%s\n", cJSON_Print(jsonhard_drive_1));
	hard_drive_t* hard_drive_2 = hard_drive_parseFromJSON(jsonhard_drive_1);
	cJSON* jsonhard_drive_2 = hard_drive_convertToJSON(hard_drive_2);
	printf("repeating hard_drive:\n%s\n", cJSON_Print(jsonhard_drive_2));
}

int main() {
  test_hard_drive(1);
  test_hard_drive(0);

  printf("Hello world \n");
  return 0;
}

#endif // hard_drive_MAIN
#endif // hard_drive_TEST
