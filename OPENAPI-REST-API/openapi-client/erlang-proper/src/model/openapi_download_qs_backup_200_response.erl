-module(openapi_download_qs_backup_200_response).

-include("openapi.hrl").

-export([openapi_download_qs_backup_200_response/0]).

-export([openapi_download_qs_backup_200_response/1]).

-export_type([openapi_download_qs_backup_200_response/0]).

-type openapi_download_qs_backup_200_response() ::
  [ {'text', binary() }
  | {'url', binary() }
  ].


openapi_download_qs_backup_200_response() ->
    openapi_download_qs_backup_200_response([]).

openapi_download_qs_backup_200_response(Fields) ->
  Default = [ {'text', binary() }
            , {'url', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

