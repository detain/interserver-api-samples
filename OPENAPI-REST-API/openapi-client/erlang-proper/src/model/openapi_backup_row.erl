-module(openapi_backup_row).

-include("openapi.hrl").

-export([openapi_backup_row/0]).

-export([openapi_backup_row/1]).

-export_type([openapi_backup_row/0]).

-type openapi_backup_row() ::
  [ {'backup_id', binary() }
  | {'backup_name', binary() }
  | {'backup_cost', binary() }
  | {'backup_username', binary() }
  | {'backup_status', binary() }
  | {'services_name', binary() }
  ].


openapi_backup_row() ->
    openapi_backup_row([]).

openapi_backup_row(Fields) ->
  Default = [ {'backup_id', binary() }
            , {'backup_name', binary() }
            , {'backup_cost', binary() }
            , {'backup_username', binary() }
            , {'backup_status', binary() }
            , {'services_name', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

