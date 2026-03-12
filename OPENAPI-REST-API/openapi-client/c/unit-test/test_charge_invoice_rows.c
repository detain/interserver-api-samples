#ifndef charge_invoice_rows_TEST
#define charge_invoice_rows_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define charge_invoice_rows_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/charge_invoice_rows.h"
charge_invoice_rows_t* instantiate_charge_invoice_rows(int include_optional);



charge_invoice_rows_t* instantiate_charge_invoice_rows(int include_optional) {
  charge_invoice_rows_t* charge_invoice_rows = NULL;
  if (include_optional) {
    charge_invoice_rows = charge_invoice_rows_create(
      1,
      list_createList()
    );
  } else {
    charge_invoice_rows = charge_invoice_rows_create(
      1,
      list_createList()
    );
  }

  return charge_invoice_rows;
}


#ifdef charge_invoice_rows_MAIN

void test_charge_invoice_rows(int include_optional) {
    charge_invoice_rows_t* charge_invoice_rows_1 = instantiate_charge_invoice_rows(include_optional);

	cJSON* jsoncharge_invoice_rows_1 = charge_invoice_rows_convertToJSON(charge_invoice_rows_1);
	printf("charge_invoice_rows :\n%s\n", cJSON_Print(jsoncharge_invoice_rows_1));
	charge_invoice_rows_t* charge_invoice_rows_2 = charge_invoice_rows_parseFromJSON(jsoncharge_invoice_rows_1);
	cJSON* jsoncharge_invoice_rows_2 = charge_invoice_rows_convertToJSON(charge_invoice_rows_2);
	printf("repeating charge_invoice_rows:\n%s\n", cJSON_Print(jsoncharge_invoice_rows_2));
}

int main() {
  test_charge_invoice_rows(1);
  test_charge_invoice_rows(0);

  printf("Hello world \n");
  return 0;
}

#endif // charge_invoice_rows_MAIN
#endif // charge_invoice_rows_TEST
