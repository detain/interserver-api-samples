-module(openapi_backup_ip_info_row).

-export([encode/1]).

-export_type([openapi_backup_ip_info_row/0]).

-type openapi_backup_ip_info_row() ::
    #{ 'desc' => binary(),
       'value' => binary()
     }.

encode(#{ 'desc' := Desc,
          'value' := Value
        }) ->
    #{ 'desc' => Desc,
       'value' => Value
     }.
