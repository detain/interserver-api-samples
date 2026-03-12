#ifndef ip_object_TEST
#define ip_object_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ip_object_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ip_object.h"
ip_object_t* instantiate_ip_object(int include_optional);



ip_object_t* instantiate_ip_object(int include_optional) {
  ip_object_t* ip_object = NULL;
  if (include_optional) {
    ip_object = ip_object_create(
      "0"
    );
  } else {
    ip_object = ip_object_create(
      "0"
    );
  }

  return ip_object;
}


#ifdef ip_object_MAIN

void test_ip_object(int include_optional) {
    ip_object_t* ip_object_1 = instantiate_ip_object(include_optional);

	cJSON* jsonip_object_1 = ip_object_convertToJSON(ip_object_1);
	printf("ip_object :\n%s\n", cJSON_Print(jsonip_object_1));
	ip_object_t* ip_object_2 = ip_object_parseFromJSON(jsonip_object_1);
	cJSON* jsonip_object_2 = ip_object_convertToJSON(ip_object_2);
	printf("repeating ip_object:\n%s\n", cJSON_Print(jsonip_object_2));
}

int main() {
  test_ip_object(1);
  test_ip_object(0);

  printf("Hello world \n");
  return 0;
}

#endif // ip_object_MAIN
#endif // ip_object_TEST
