-module(openapi_websites_order_service_types).

-include("openapi.hrl").

-export([openapi_websites_order_service_types/0]).

-export([openapi_websites_order_service_types/1]).

-export_type([openapi_websites_order_service_types/0]).

-type openapi_websites_order_service_types() ::
  [ {'11447', openapi_websites_order_service_types:openapi_websites_order_service_types() }
  ].


openapi_websites_order_service_types() ->
    openapi_websites_order_service_types([]).

openapi_websites_order_service_types(Fields) ->
  Default = [ {'11447', openapi_websites_order_service_types:openapi_websites_order_service_types() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

