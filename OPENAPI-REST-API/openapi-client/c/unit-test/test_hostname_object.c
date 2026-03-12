#ifndef hostname_object_TEST
#define hostname_object_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hostname_object_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hostname_object.h"
hostname_object_t* instantiate_hostname_object(int include_optional);



hostname_object_t* instantiate_hostname_object(int include_optional) {
  hostname_object_t* hostname_object = NULL;
  if (include_optional) {
    hostname_object = hostname_object_create(
      "0"
    );
  } else {
    hostname_object = hostname_object_create(
      "0"
    );
  }

  return hostname_object;
}


#ifdef hostname_object_MAIN

void test_hostname_object(int include_optional) {
    hostname_object_t* hostname_object_1 = instantiate_hostname_object(include_optional);

	cJSON* jsonhostname_object_1 = hostname_object_convertToJSON(hostname_object_1);
	printf("hostname_object :\n%s\n", cJSON_Print(jsonhostname_object_1));
	hostname_object_t* hostname_object_2 = hostname_object_parseFromJSON(jsonhostname_object_1);
	cJSON* jsonhostname_object_2 = hostname_object_convertToJSON(hostname_object_2);
	printf("repeating hostname_object:\n%s\n", cJSON_Print(jsonhostname_object_2));
}

int main() {
  test_hostname_object(1);
  test_hostname_object(0);

  printf("Hello world \n");
  return 0;
}

#endif // hostname_object_MAIN
#endif // hostname_object_TEST
