-module(openapi_vps_order_templates).

-include("openapi.hrl").

-export([openapi_vps_order_templates/0]).

-export([openapi_vps_order_templates/1]).

-export_type([openapi_vps_order_templates/0]).

-type openapi_vps_order_templates() ::
  [ {'hyperv', openapi_vps_order_templates_hyperv:openapi_vps_order_templates_hyperv() }
  ].


openapi_vps_order_templates() ->
    openapi_vps_order_templates([]).

openapi_vps_order_templates(Fields) ->
  Default = [ {'hyperv', openapi_vps_order_templates_hyperv:openapi_vps_order_templates_hyperv() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

