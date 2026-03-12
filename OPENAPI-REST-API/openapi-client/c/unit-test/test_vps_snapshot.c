#ifndef vps_snapshot_TEST
#define vps_snapshot_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_snapshot_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_snapshot.h"
vps_snapshot_t* instantiate_vps_snapshot(int include_optional);



vps_snapshot_t* instantiate_vps_snapshot(int include_optional) {
  vps_snapshot_t* vps_snapshot = NULL;
  if (include_optional) {
    vps_snapshot = vps_snapshot_create(
      "0",
      56,
      56
    );
  } else {
    vps_snapshot = vps_snapshot_create(
      "0",
      56,
      56
    );
  }

  return vps_snapshot;
}


#ifdef vps_snapshot_MAIN

void test_vps_snapshot(int include_optional) {
    vps_snapshot_t* vps_snapshot_1 = instantiate_vps_snapshot(include_optional);

	cJSON* jsonvps_snapshot_1 = vps_snapshot_convertToJSON(vps_snapshot_1);
	printf("vps_snapshot :\n%s\n", cJSON_Print(jsonvps_snapshot_1));
	vps_snapshot_t* vps_snapshot_2 = vps_snapshot_parseFromJSON(jsonvps_snapshot_1);
	cJSON* jsonvps_snapshot_2 = vps_snapshot_convertToJSON(vps_snapshot_2);
	printf("repeating vps_snapshot:\n%s\n", cJSON_Print(jsonvps_snapshot_2));
}

int main() {
  test_vps_snapshot(1);
  test_vps_snapshot(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_snapshot_MAIN
#endif // vps_snapshot_TEST
