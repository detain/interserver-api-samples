-module(openapi_place_scrub_order_201_response_order_details).

-include("openapi.hrl").

-export([openapi_place_scrub_order_201_response_order_details/0]).

-export([openapi_place_scrub_order_201_response_order_details/1]).

-export_type([openapi_place_scrub_order_201_response_order_details/0]).

-type openapi_place_scrub_order_201_response_order_details() ::
  [ {'total_cost', integer() }
  | {'service_id', integer() }
  | {'invoice_id', integer() }
  | {'invoice_description', binary() }
  | {'cj_params', openapi_place_scrub_order_201_response_order_details_cj_params:openapi_place_scrub_order_201_response_order_details_cj_params() }
  ].


openapi_place_scrub_order_201_response_order_details() ->
    openapi_place_scrub_order_201_response_order_details([]).

openapi_place_scrub_order_201_response_order_details(Fields) ->
  Default = [ {'total_cost', integer() }
            , {'service_id', integer() }
            , {'invoice_id', integer() }
            , {'invoice_description', binary() }
            , {'cj_params', openapi_place_scrub_order_201_response_order_details_cj_params:openapi_place_scrub_order_201_response_order_details_cj_params() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

