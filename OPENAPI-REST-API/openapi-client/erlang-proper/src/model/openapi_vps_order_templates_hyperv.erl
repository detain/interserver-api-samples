-module(openapi_vps_order_templates_hyperv).

-include("openapi.hrl").

-export([openapi_vps_order_templates_hyperv/0]).

-export([openapi_vps_order_templates_hyperv/1]).

-export_type([openapi_vps_order_templates_hyperv/0]).

-type openapi_vps_order_templates_hyperv() ::
  [ {'windows', openapi_vps_order_templates_hyperv_windows:openapi_vps_order_templates_hyperv_windows() }
  ].


openapi_vps_order_templates_hyperv() ->
    openapi_vps_order_templates_hyperv([]).

openapi_vps_order_templates_hyperv(Fields) ->
  Default = [ {'windows', openapi_vps_order_templates_hyperv_windows:openapi_vps_order_templates_hyperv_windows() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

