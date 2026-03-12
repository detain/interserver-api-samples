-module(openapi_scrub_ip_place_order).

-include("openapi.hrl").

-export([openapi_scrub_ip_place_order/0]).

-export([openapi_scrub_ip_place_order/1]).

-export_type([openapi_scrub_ip_place_order/0]).

-type openapi_scrub_ip_place_order() ::
  [ {'service_type', integer() }
  | {'ip', binary() }
  ].


openapi_scrub_ip_place_order() ->
    openapi_scrub_ip_place_order([]).

openapi_scrub_ip_place_order(Fields) ->
  Default = [ {'service_type', integer() }
            , {'ip', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

