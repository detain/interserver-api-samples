#ifndef vps_cancel_200_response_TEST
#define vps_cancel_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_cancel_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_cancel_200_response.h"
vps_cancel_200_response_t* instantiate_vps_cancel_200_response(int include_optional);



vps_cancel_200_response_t* instantiate_vps_cancel_200_response(int include_optional) {
  vps_cancel_200_response_t* vps_cancel_200_response = NULL;
  if (include_optional) {
    vps_cancel_200_response = vps_cancel_200_response_create(
      1,
      "0"
    );
  } else {
    vps_cancel_200_response = vps_cancel_200_response_create(
      1,
      "0"
    );
  }

  return vps_cancel_200_response;
}


#ifdef vps_cancel_200_response_MAIN

void test_vps_cancel_200_response(int include_optional) {
    vps_cancel_200_response_t* vps_cancel_200_response_1 = instantiate_vps_cancel_200_response(include_optional);

	cJSON* jsonvps_cancel_200_response_1 = vps_cancel_200_response_convertToJSON(vps_cancel_200_response_1);
	printf("vps_cancel_200_response :\n%s\n", cJSON_Print(jsonvps_cancel_200_response_1));
	vps_cancel_200_response_t* vps_cancel_200_response_2 = vps_cancel_200_response_parseFromJSON(jsonvps_cancel_200_response_1);
	cJSON* jsonvps_cancel_200_response_2 = vps_cancel_200_response_convertToJSON(vps_cancel_200_response_2);
	printf("repeating vps_cancel_200_response:\n%s\n", cJSON_Print(jsonvps_cancel_200_response_2));
}

int main() {
  test_vps_cancel_200_response(1);
  test_vps_cancel_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_cancel_200_response_MAIN
#endif // vps_cancel_200_response_TEST
