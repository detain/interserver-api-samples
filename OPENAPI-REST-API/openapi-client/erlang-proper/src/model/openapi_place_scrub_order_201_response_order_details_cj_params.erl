-module(openapi_place_scrub_order_201_response_order_details_cj_params).

-include("openapi.hrl").

-export([openapi_place_scrub_order_201_response_order_details_cj_params/0]).

-export([openapi_place_scrub_order_201_response_order_details_cj_params/1]).

-export_type([openapi_place_scrub_order_201_response_order_details_cj_params/0]).

-type openapi_place_scrub_order_201_response_order_details_cj_params() ::
  [ {'containerTagId', integer() }
  | {'CID', integer() }
  | {'OID', binary() }
  | {'TYPE', integer() }
  | {'ITEM1', binary() }
  | {'AMT1', integer() }
  | {'QTY1', integer() }
  | {'CURRENCY', binary() }
  ].


openapi_place_scrub_order_201_response_order_details_cj_params() ->
    openapi_place_scrub_order_201_response_order_details_cj_params([]).

openapi_place_scrub_order_201_response_order_details_cj_params(Fields) ->
  Default = [ {'containerTagId', integer() }
            , {'CID', integer() }
            , {'OID', binary() }
            , {'TYPE', integer() }
            , {'ITEM1', binary() }
            , {'AMT1', integer() }
            , {'QTY1', integer() }
            , {'CURRENCY', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

