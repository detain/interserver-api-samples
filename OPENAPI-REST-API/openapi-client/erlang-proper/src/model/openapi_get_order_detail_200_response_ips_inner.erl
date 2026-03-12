-module(openapi_get_order_detail_200_response_ips_inner).

-include("openapi.hrl").

-export([openapi_get_order_detail_200_response_ips_inner/0]).

-export([openapi_get_order_detail_200_response_ips_inner/1]).

-export_type([openapi_get_order_detail_200_response_ips_inner/0]).

-type openapi_get_order_detail_200_response_ips_inner() ::
  [ {'service_id', integer() }
  | {'service_module', binary() }
  | {'service_hostname', binary() }
  ].


openapi_get_order_detail_200_response_ips_inner() ->
    openapi_get_order_detail_200_response_ips_inner([]).

openapi_get_order_detail_200_response_ips_inner(Fields) ->
  Default = [ {'service_id', integer() }
            , {'service_module', binary() }
            , {'service_hostname', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

