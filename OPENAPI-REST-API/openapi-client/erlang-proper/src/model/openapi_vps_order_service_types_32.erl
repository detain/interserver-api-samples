-module(openapi_vps_order_service_types_32).

-include("openapi.hrl").

-export([openapi_vps_order_service_types_32/0]).

-export([openapi_vps_order_service_types_32/1]).

-export_type([openapi_vps_order_service_types_32/0]).

-type openapi_vps_order_service_types_32() ::
  [ {'services_id', binary() }
  | {'services_name', binary() }
  | {'services_cost', binary() }
  | {'services_category', binary() }
  | {'services_buyable', binary() }
  | {'services_type', binary() }
  | {'services_field1', binary() }
  | {'services_field2', binary() }
  | {'services_module', binary() }
  ].


openapi_vps_order_service_types_32() ->
    openapi_vps_order_service_types_32([]).

openapi_vps_order_service_types_32(Fields) ->
  Default = [ {'services_id', binary() }
            , {'services_name', binary() }
            , {'services_cost', binary() }
            , {'services_category', binary() }
            , {'services_buyable', binary() }
            , {'services_type', binary() }
            , {'services_field1', binary() }
            , {'services_field2', binary() }
            , {'services_module', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

