-module(openapi_service_order_post_response).

-include("openapi.hrl").

-export([openapi_service_order_post_response/0]).

-export([openapi_service_order_post_response/1]).

-export_type([openapi_service_order_post_response/0]).

-type openapi_service_order_post_response() ::
  [ {'continue', boolean() }
  | {'errors', list(binary()) }
  | {'total_cost', binary() }
  | {'iid', binary() }
  | {'iids', list(binary()) }
  | {'real_iids', list(binary()) }
  | {'serviceId', integer() }
  | {'invoice_description', binary() }
  ].


openapi_service_order_post_response() ->
    openapi_service_order_post_response([]).

openapi_service_order_post_response(Fields) ->
  Default = [ {'continue', boolean() }
            , {'errors', list(binary()) }
            , {'total_cost', binary() }
            , {'iid', binary() }
            , {'iids', list(binary()) }
            , {'real_iids', list(binary()) }
            , {'serviceId', integer() }
            , {'invoice_description', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

