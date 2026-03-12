#ifndef vps_service_info_TEST
#define vps_service_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_service_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_service_info.h"
vps_service_info_t* instantiate_vps_service_info(int include_optional);



vps_service_info_t* instantiate_vps_service_info(int include_optional) {
  vps_service_info_t* vps_service_info = NULL;
  if (include_optional) {
    vps_service_info = vps_service_info_create(
      "85872",
      "223513",
      "2439",
      "1.2.3.4",
      null,
      "vps85872",
      "USD",
      "33",
      "2022-12-26T20:14:59.000Z",
      "active",
      "20130799",
      "3646",
      "{"spice":5903,"snapshots":[{"name":"third","used":36490445,"date":1692095220},{"name":"second","used":40894464,"date":1692181620},{"name":"first","used":54735668,"date":1692268020}]}",
      "vps85872",
      "running",
      "my-web-2",
      "16",
      "8.7.6.5",
      "5902",
      "mypassword",
      "00:16:3e:27:59:b2",
      "ubuntu24",
      "ubuntu",
      "1",
      "kvm",
      "0",
      "0"
    );
  } else {
    vps_service_info = vps_service_info_create(
      "85872",
      "223513",
      "2439",
      "1.2.3.4",
      null,
      "vps85872",
      "USD",
      "33",
      "2022-12-26T20:14:59.000Z",
      "active",
      "20130799",
      "3646",
      "{"spice":5903,"snapshots":[{"name":"third","used":36490445,"date":1692095220},{"name":"second","used":40894464,"date":1692181620},{"name":"first","used":54735668,"date":1692268020}]}",
      "vps85872",
      "running",
      "my-web-2",
      "16",
      "8.7.6.5",
      "5902",
      "mypassword",
      "00:16:3e:27:59:b2",
      "ubuntu24",
      "ubuntu",
      "1",
      "kvm",
      "0",
      "0"
    );
  }

  return vps_service_info;
}


#ifdef vps_service_info_MAIN

void test_vps_service_info(int include_optional) {
    vps_service_info_t* vps_service_info_1 = instantiate_vps_service_info(include_optional);

	cJSON* jsonvps_service_info_1 = vps_service_info_convertToJSON(vps_service_info_1);
	printf("vps_service_info :\n%s\n", cJSON_Print(jsonvps_service_info_1));
	vps_service_info_t* vps_service_info_2 = vps_service_info_parseFromJSON(jsonvps_service_info_1);
	cJSON* jsonvps_service_info_2 = vps_service_info_convertToJSON(vps_service_info_2);
	printf("repeating vps_service_info:\n%s\n", cJSON_Print(jsonvps_service_info_2));
}

int main() {
  test_vps_service_info(1);
  test_vps_service_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_service_info_MAIN
#endif // vps_service_info_TEST
