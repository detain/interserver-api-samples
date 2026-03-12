-module(openapi_get_scrub_ip_details_200_response_service_info).

-include("openapi.hrl").

-export([openapi_get_scrub_ip_details_200_response_service_info/0]).

-export([openapi_get_scrub_ip_details_200_response_service_info/1]).

-export_type([openapi_get_scrub_ip_details_200_response_service_info/0]).

-type openapi_get_scrub_ip_details_200_response_service_info() ::
  [ {'scrub_ip_id', binary() }
  | {'scrub_ip_type', binary() }
  | {'scrub_ip_custid', binary() }
  | {'scrub_ip_order_date', binary() }
  | {'scrub_ip_ip', binary() }
  | {'scrub_ip_service_id', binary() }
  | {'scrub_ip_service_module', binary() }
  | {'scrub_ip_status', binary() }
  | {'scrub_ip_invoice', binary() }
  | {'scrub_ip_currency', binary() }
  | {'scrub_ip_coupon', binary() }
  | {'scrub_ip_comment', binary() }
  ].


openapi_get_scrub_ip_details_200_response_service_info() ->
    openapi_get_scrub_ip_details_200_response_service_info([]).

openapi_get_scrub_ip_details_200_response_service_info(Fields) ->
  Default = [ {'scrub_ip_id', binary() }
            , {'scrub_ip_type', binary() }
            , {'scrub_ip_custid', binary() }
            , {'scrub_ip_order_date', binary() }
            , {'scrub_ip_ip', binary() }
            , {'scrub_ip_service_id', binary() }
            , {'scrub_ip_service_module', binary() }
            , {'scrub_ip_status', elements([<<"active">>, <<"pending">>, <<"canceled">>, <<"expired">>]) }
            , {'scrub_ip_invoice', binary() }
            , {'scrub_ip_currency', binary() }
            , {'scrub_ip_coupon', binary() }
            , {'scrub_ip_comment', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

