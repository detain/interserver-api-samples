-module(openapi_download_qs_backup_200_response).

-export([encode/1]).

-export_type([openapi_download_qs_backup_200_response/0]).

-type openapi_download_qs_backup_200_response() ::
    #{ 'text' => binary(),
       'url' => binary()
     }.

encode(#{ 'text' := Text,
          'url' := Url
        }) ->
    #{ 'text' => Text,
       'url' => Url
     }.
