#ifndef vps_billing_details_TEST
#define vps_billing_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_billing_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_billing_details.h"
vps_billing_details_t* instantiate_vps_billing_details(int include_optional);

#include "test_vps_service_extra.c"


vps_billing_details_t* instantiate_vps_billing_details(int include_optional) {
  vps_billing_details_t* vps_billing_details = NULL;
  if (include_optional) {
    vps_billing_details = vps_billing_details_create(
      "July 26, 2023",
      "Paid",
      "Monthly",
      "2023-08-26T09:41:12.000Z",
      "August 26, 2023",
      "USD",
      "$",
      "TheCouponIUsed",
      "0.00",
       // false, not to have infinite recursion
      instantiate_vps_service_extra(0),
      "{"spice":5903,"snapshots":[{"name":"third","used":36490445,"date":1692095220},{"name":"second","used":40894464,"date":1692181620},{"name":"first","used":54735668,"date":1692268020}]}"
    );
  } else {
    vps_billing_details = vps_billing_details_create(
      "July 26, 2023",
      "Paid",
      "Monthly",
      "2023-08-26T09:41:12.000Z",
      "August 26, 2023",
      "USD",
      "$",
      "TheCouponIUsed",
      "0.00",
      NULL,
      "{"spice":5903,"snapshots":[{"name":"third","used":36490445,"date":1692095220},{"name":"second","used":40894464,"date":1692181620},{"name":"first","used":54735668,"date":1692268020}]}"
    );
  }

  return vps_billing_details;
}


#ifdef vps_billing_details_MAIN

void test_vps_billing_details(int include_optional) {
    vps_billing_details_t* vps_billing_details_1 = instantiate_vps_billing_details(include_optional);

	cJSON* jsonvps_billing_details_1 = vps_billing_details_convertToJSON(vps_billing_details_1);
	printf("vps_billing_details :\n%s\n", cJSON_Print(jsonvps_billing_details_1));
	vps_billing_details_t* vps_billing_details_2 = vps_billing_details_parseFromJSON(jsonvps_billing_details_1);
	cJSON* jsonvps_billing_details_2 = vps_billing_details_convertToJSON(vps_billing_details_2);
	printf("repeating vps_billing_details:\n%s\n", cJSON_Print(jsonvps_billing_details_2));
}

int main() {
  test_vps_billing_details(1);
  test_vps_billing_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_billing_details_MAIN
#endif // vps_billing_details_TEST
