-module(openapi_licenses_order_service_categories509).

-include("openapi.hrl").

-export([openapi_licenses_order_service_categories509/0]).

-export([openapi_licenses_order_service_categories509/1]).

-export_type([openapi_licenses_order_service_categories509/0]).

-type openapi_licenses_order_service_categories509() ::
  [ {'category_id', binary() }
  | {'category_name', binary() }
  | {'category_tag', binary() }
  | {'category_module', binary() }
  ].


openapi_licenses_order_service_categories509() ->
    openapi_licenses_order_service_categories509([]).

openapi_licenses_order_service_categories509(Fields) ->
  Default = [ {'category_id', binary() }
            , {'category_name', binary() }
            , {'category_tag', binary() }
            , {'category_module', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

