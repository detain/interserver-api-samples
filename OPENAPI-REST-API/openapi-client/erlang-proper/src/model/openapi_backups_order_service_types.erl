-module(openapi_backups_order_service_types).

-include("openapi.hrl").

-export([openapi_backups_order_service_types/0]).

-export([openapi_backups_order_service_types/1]).

-export_type([openapi_backups_order_service_types/0]).

-type openapi_backups_order_service_types() ::
  [ {'11006', openapi_backups_order_service_types:openapi_backups_order_service_types() }
  ].


openapi_backups_order_service_types() ->
    openapi_backups_order_service_types([]).

openapi_backups_order_service_types(Fields) ->
  Default = [ {'11006', openapi_backups_order_service_types:openapi_backups_order_service_types() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

