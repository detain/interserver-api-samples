-module(openapi_download_qs_backup_request).

-export([encode/1]).

-export_type([openapi_download_qs_backup_request/0]).

-type openapi_download_qs_backup_request() ::
    #{ 'file' := binary()
     }.

encode(#{ 'file' := File
        }) ->
    #{ 'file' => File
     }.
