-module(openapi_licenses_order_service_types11482).

-include("openapi.hrl").

-export([openapi_licenses_order_service_types11482/0]).

-export([openapi_licenses_order_service_types11482/1]).

-export_type([openapi_licenses_order_service_types11482/0]).

-type openapi_licenses_order_service_types11482() ::
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


openapi_licenses_order_service_types11482() ->
    openapi_licenses_order_service_types11482([]).

openapi_licenses_order_service_types11482(Fields) ->
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

