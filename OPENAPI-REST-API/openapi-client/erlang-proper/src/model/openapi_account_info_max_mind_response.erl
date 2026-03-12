-module(openapi_account_info_max_mind_response).

-include("openapi.hrl").

-export([openapi_account_info_max_mind_response/0]).

-export([openapi_account_info_max_mind_response/1]).

-export_type([openapi_account_info_max_mind_response/0]).

-type openapi_account_info_max_mind_response() ::
  [ {'distance', binary() }
  | {'countryMatch', binary() }
  | {'countryCode', binary() }
  | {'freeMail', binary() }
  | {'anonymousProxy', binary() }
  | {'score', binary() }
  | {'binMatch', binary() }
  | {'binCountry', binary() }
  | {'err', binary() }
  | {'proxyScore', binary() }
  | {'ip_region', binary() }
  | {'ip_city', binary() }
  | {'ip_latitude', binary() }
  | {'ip_longitude', binary() }
  | {'binName', binary() }
  | {'ip_isp', binary() }
  | {'ip_org', binary() }
  | {'binNameMatch', binary() }
  | {'binPhoneMatch', binary() }
  | {'binPhone', binary() }
  | {'custPhoneInBillingLoc', binary() }
  | {'highRiskCountry', binary() }
  | {'queriesRemaining', binary() }
  | {'cityPostalMatch', binary() }
  | {'shipCityPostalMatch', binary() }
  | {'maxmindID', binary() }
  | {'ip_asnum', binary() }
  | {'ip_userType', binary() }
  | {'ip_countryConf', binary() }
  | {'ip_regionConf', binary() }
  | {'ip_cityConf', binary() }
  | {'ip_postalCode', binary() }
  | {'ip_postalConf', binary() }
  | {'ip_accuracyRadius', binary() }
  | {'ip_netSpeedCell', binary() }
  | {'ip_metroCode', binary() }
  | {'ip_areaCode', binary() }
  | {'ip_timeZone', binary() }
  | {'ip_regionName', binary() }
  | {'ip_domain', binary() }
  | {'ip_countryName', binary() }
  | {'ip_continentCode', binary() }
  | {'ip_corporateProxy', binary() }
  | {'carderEmail', binary() }
  | {'highRiskUsername', binary() }
  | {'highRiskPassword', binary() }
  | {'riskScore', openapi_account_info_max_mind_response_risk_score:openapi_account_info_max_mind_response_risk_score() }
  | {'isTransProxy', binary() }
  | {'prepaid', binary() }
  | {'minfraud_version', binary() }
  | {'service_level', binary() }
  | {'explanation', binary() }
  | {'female_name', binary() }
  ].


openapi_account_info_max_mind_response() ->
    openapi_account_info_max_mind_response([]).

openapi_account_info_max_mind_response(Fields) ->
  Default = [ {'distance', binary() }
            , {'countryMatch', binary() }
            , {'countryCode', binary() }
            , {'freeMail', binary() }
            , {'anonymousProxy', binary() }
            , {'score', binary() }
            , {'binMatch', binary() }
            , {'binCountry', binary() }
            , {'err', binary() }
            , {'proxyScore', binary() }
            , {'ip_region', binary() }
            , {'ip_city', binary() }
            , {'ip_latitude', binary() }
            , {'ip_longitude', binary() }
            , {'binName', binary() }
            , {'ip_isp', binary() }
            , {'ip_org', binary() }
            , {'binNameMatch', binary() }
            , {'binPhoneMatch', binary() }
            , {'binPhone', binary() }
            , {'custPhoneInBillingLoc', binary() }
            , {'highRiskCountry', binary() }
            , {'queriesRemaining', binary() }
            , {'cityPostalMatch', binary() }
            , {'shipCityPostalMatch', binary() }
            , {'maxmindID', binary() }
            , {'ip_asnum', binary() }
            , {'ip_userType', binary() }
            , {'ip_countryConf', binary() }
            , {'ip_regionConf', binary() }
            , {'ip_cityConf', binary() }
            , {'ip_postalCode', binary() }
            , {'ip_postalConf', binary() }
            , {'ip_accuracyRadius', binary() }
            , {'ip_netSpeedCell', binary() }
            , {'ip_metroCode', binary() }
            , {'ip_areaCode', binary() }
            , {'ip_timeZone', binary() }
            , {'ip_regionName', binary() }
            , {'ip_domain', binary() }
            , {'ip_countryName', binary() }
            , {'ip_continentCode', binary() }
            , {'ip_corporateProxy', binary() }
            , {'carderEmail', binary() }
            , {'highRiskUsername', binary() }
            , {'highRiskPassword', binary() }
            , {'riskScore', openapi_account_info_max_mind_response_risk_score:openapi_account_info_max_mind_response_risk_score() }
            , {'isTransProxy', binary() }
            , {'prepaid', binary() }
            , {'minfraud_version', binary() }
            , {'service_level', binary() }
            , {'explanation', binary() }
            , {'female_name', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

