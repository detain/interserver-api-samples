-module(openapi_place_scrub_order_201_response).

-include("openapi.hrl").

-export([openapi_place_scrub_order_201_response/0]).

-export([openapi_place_scrub_order_201_response/1]).

-export_type([openapi_place_scrub_order_201_response/0]).

-type openapi_place_scrub_order_201_response() ::
  [ {'success', boolean() }
  | {'text', binary() }
  | {'order_details', openapi_place_scrub_order_201_response_order_details:openapi_place_scrub_order_201_response_order_details() }
  ].


openapi_place_scrub_order_201_response() ->
    openapi_place_scrub_order_201_response([]).

openapi_place_scrub_order_201_response(Fields) ->
  Default = [ {'success', boolean() }
            , {'text', binary() }
            , {'order_details', openapi_place_scrub_order_201_response_order_details:openapi_place_scrub_order_201_response_order_details() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

