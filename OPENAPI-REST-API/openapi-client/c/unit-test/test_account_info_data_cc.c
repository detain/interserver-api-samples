#ifndef account_info_data_cc_TEST
#define account_info_data_cc_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_data_cc_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_data_cc.h"
account_info_data_cc_t* instantiate_account_info_data_cc(int include_optional);

#include "test_account_info_max_mind_response.c"


account_info_data_cc_t* instantiate_account_info_data_cc(int include_optional) {
  account_info_data_cc_t* account_info_data_cc = NULL;
  if (include_optional) {
    account_info_data_cc = account_info_data_cc_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      {"distance":"6146","countryMatch":"No","countryCode":"US","freeMail":"No","anonymousProxy":"No","score":"5.00","binMatch":"NotFound","binCountry":"","err":"CITY_NOT_FOUND","proxyScore":"0.00","ip_region":"PA","ip_city":"Townsville","ip_latitude":"40.1767","ip_longitude":"-76.4297","binName":"","ip_isp":"PenTeleData","ip_org":"PenTeleData","binNameMatch":"NA","binPhoneMatch":"NA","binPhone":"","custPhoneInBillingLoc":"","highRiskCountry":"No","queriesRemaining":"171","cityPostalMatch":"","shipCityPostalMatch":"","maxmindID":"HMOCUJP7","ip_asnum":"AS3737 PenTeleData Inc.","ip_userType":"residential","ip_countryConf":"99","ip_regionConf":"97","ip_cityConf":"30","ip_postalCode":"11122","ip_postalConf":"30","ip_accuracyRadius":"10","ip_netSpeedCell":"Dialup","ip_metroCode":"566","ip_areaCode":"333","ip_timeZone":"America/New_York","ip_regionName":"Pennsylvania","ip_domain":"ptd.net","ip_countryName":"United States","ip_continentCode":"NA","ip_corporateProxy":"No","carderEmail":"No","highRiskUsername":"No","riskScore":"4.82","explanation":"You should review this order carefully, as it is considered high risk. We suggest you be very cautious about accepting this order. This order is higher risk because the distance between the billing address and the user's actual location is so great. The order is higher risk because the billing country and the country in which the IP address is located don't match","female_name":"no"},
      1
    );
  } else {
    account_info_data_cc = account_info_data_cc_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      {"distance":"6146","countryMatch":"No","countryCode":"US","freeMail":"No","anonymousProxy":"No","score":"5.00","binMatch":"NotFound","binCountry":"","err":"CITY_NOT_FOUND","proxyScore":"0.00","ip_region":"PA","ip_city":"Townsville","ip_latitude":"40.1767","ip_longitude":"-76.4297","binName":"","ip_isp":"PenTeleData","ip_org":"PenTeleData","binNameMatch":"NA","binPhoneMatch":"NA","binPhone":"","custPhoneInBillingLoc":"","highRiskCountry":"No","queriesRemaining":"171","cityPostalMatch":"","shipCityPostalMatch":"","maxmindID":"HMOCUJP7","ip_asnum":"AS3737 PenTeleData Inc.","ip_userType":"residential","ip_countryConf":"99","ip_regionConf":"97","ip_cityConf":"30","ip_postalCode":"11122","ip_postalConf":"30","ip_accuracyRadius":"10","ip_netSpeedCell":"Dialup","ip_metroCode":"566","ip_areaCode":"333","ip_timeZone":"America/New_York","ip_regionName":"Pennsylvania","ip_domain":"ptd.net","ip_countryName":"United States","ip_continentCode":"NA","ip_corporateProxy":"No","carderEmail":"No","highRiskUsername":"No","riskScore":"4.82","explanation":"You should review this order carefully, as it is considered high risk. We suggest you be very cautious about accepting this order. This order is higher risk because the distance between the billing address and the user's actual location is so great. The order is higher risk because the billing country and the country in which the IP address is located don't match","female_name":"no"},
      1
    );
  }

  return account_info_data_cc;
}


#ifdef account_info_data_cc_MAIN

void test_account_info_data_cc(int include_optional) {
    account_info_data_cc_t* account_info_data_cc_1 = instantiate_account_info_data_cc(include_optional);

	cJSON* jsonaccount_info_data_cc_1 = account_info_data_cc_convertToJSON(account_info_data_cc_1);
	printf("account_info_data_cc :\n%s\n", cJSON_Print(jsonaccount_info_data_cc_1));
	account_info_data_cc_t* account_info_data_cc_2 = account_info_data_cc_parseFromJSON(jsonaccount_info_data_cc_1);
	cJSON* jsonaccount_info_data_cc_2 = account_info_data_cc_convertToJSON(account_info_data_cc_2);
	printf("repeating account_info_data_cc:\n%s\n", cJSON_Print(jsonaccount_info_data_cc_2));
}

int main() {
  test_account_info_data_cc(1);
  test_account_info_data_cc(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_data_cc_MAIN
#endif // account_info_data_cc_TEST
