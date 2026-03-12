-module(openapi_vps_order_templates_hyperv_windows).

-include("openapi.hrl").

-export([openapi_vps_order_templates_hyperv_windows/0]).

-export([openapi_vps_order_templates_hyperv_windows/1]).

-export_type([openapi_vps_order_templates_hyperv_windows/0]).

-type openapi_vps_order_templates_hyperv_windows() ::
  [ {'Windows2019Standard', binary() }
  | {'Windows2022', binary() }
  ].


openapi_vps_order_templates_hyperv_windows() ->
    openapi_vps_order_templates_hyperv_windows([]).

openapi_vps_order_templates_hyperv_windows(Fields) ->
  Default = [ {'Windows2019Standard', binary() }
            , {'Windows2022', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

