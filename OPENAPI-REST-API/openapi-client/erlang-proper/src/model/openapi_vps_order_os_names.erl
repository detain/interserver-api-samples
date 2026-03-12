-module(openapi_vps_order_os_names).

-include("openapi.hrl").

-export([openapi_vps_order_os_names/0]).

-export([openapi_vps_order_os_names/1]).

-export_type([openapi_vps_order_os_names/0]).

-type openapi_vps_order_os_names() ::
  [ {'opensuse', binary() }
  | {'ubuntu', binary() }
  ].


openapi_vps_order_os_names() ->
    openapi_vps_order_os_names([]).

openapi_vps_order_os_names(Fields) ->
  Default = [ {'opensuse', binary() }
            , {'ubuntu', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

