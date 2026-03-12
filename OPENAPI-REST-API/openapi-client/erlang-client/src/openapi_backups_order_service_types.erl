-module(openapi_backups_order_service_types).

-export([encode/1]).

-export_type([openapi_backups_order_service_types/0]).

-type openapi_backups_order_service_types() ::
    #{ '11006' => openapi_backups_order_service_types:openapi_backups_order_service_types()
     }.

encode(#{ '11006' := 11006
        }) ->
    #{ '11006' => 11006
     }.
