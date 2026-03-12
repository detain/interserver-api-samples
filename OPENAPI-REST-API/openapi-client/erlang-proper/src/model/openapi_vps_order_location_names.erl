-module(openapi_vps_order_location_names).

-include("openapi.hrl").

-export([openapi_vps_order_location_names/0]).

-export([openapi_vps_order_location_names/1]).

-export_type([openapi_vps_order_location_names/0]).

-type openapi_vps_order_location_names() ::
  [ {'3', binary() }
  ].


openapi_vps_order_location_names() ->
    openapi_vps_order_location_names([]).

openapi_vps_order_location_names(Fields) ->
  Default = [ {'3', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

