-module(openapi_download_qs_backup_request).

-include("openapi.hrl").

-export([openapi_download_qs_backup_request/0]).

-export([openapi_download_qs_backup_request/1]).

-export_type([openapi_download_qs_backup_request/0]).

-type openapi_download_qs_backup_request() ::
  [ {'file', binary() }
  ].


openapi_download_qs_backup_request() ->
    openapi_download_qs_backup_request([]).

openapi_download_qs_backup_request(Fields) ->
  Default = [ {'file', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

