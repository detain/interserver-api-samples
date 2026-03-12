-module(openapi_vps_order_platform_names).

-include("openapi.hrl").

-export([openapi_vps_order_platform_names/0]).

-export([openapi_vps_order_platform_names/1]).

-export_type([openapi_vps_order_platform_names/0]).

-type openapi_vps_order_platform_names() ::
  [ {'kvm', binary() }
  | {'kvmstorage', binary() }
  | {'hyperv', binary() }
  ].


openapi_vps_order_platform_names() ->
    openapi_vps_order_platform_names([]).

openapi_vps_order_platform_names(Fields) ->
  Default = [ {'kvm', binary() }
            , {'kvmstorage', binary() }
            , {'hyperv', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

