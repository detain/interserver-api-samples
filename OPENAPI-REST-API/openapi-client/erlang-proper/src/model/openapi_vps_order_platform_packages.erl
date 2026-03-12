-module(openapi_vps_order_platform_packages).

-include("openapi.hrl").

-export([openapi_vps_order_platform_packages/0]).

-export([openapi_vps_order_platform_packages/1]).

-export_type([openapi_vps_order_platform_packages/0]).

-type openapi_vps_order_platform_packages() ::
  [ {'kvm', integer() }
  | {'kvmstorage', integer() }
  | {'hyperv', integer() }
  ].


openapi_vps_order_platform_packages() ->
    openapi_vps_order_platform_packages([]).

openapi_vps_order_platform_packages(Fields) ->
  Default = [ {'kvm', integer() }
            , {'kvmstorage', integer() }
            , {'hyperv', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

