#ifndef vps_client_link_TEST
#define vps_client_link_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_client_link_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_client_link.h"
vps_client_link_t* instantiate_vps_client_link(int include_optional);



vps_client_link_t* instantiate_vps_client_link(int include_optional) {
  vps_client_link_t* vps_client_link = NULL;
  if (include_optional) {
    vps_client_link = vps_client_link_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    vps_client_link = vps_client_link_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return vps_client_link;
}


#ifdef vps_client_link_MAIN

void test_vps_client_link(int include_optional) {
    vps_client_link_t* vps_client_link_1 = instantiate_vps_client_link(include_optional);

	cJSON* jsonvps_client_link_1 = vps_client_link_convertToJSON(vps_client_link_1);
	printf("vps_client_link :\n%s\n", cJSON_Print(jsonvps_client_link_1));
	vps_client_link_t* vps_client_link_2 = vps_client_link_parseFromJSON(jsonvps_client_link_1);
	cJSON* jsonvps_client_link_2 = vps_client_link_convertToJSON(vps_client_link_2);
	printf("repeating vps_client_link:\n%s\n", cJSON_Print(jsonvps_client_link_2));
}

int main() {
  test_vps_client_link(1);
  test_vps_client_link(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_client_link_MAIN
#endif // vps_client_link_TEST
