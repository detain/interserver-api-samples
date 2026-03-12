-module(openapi_vps_backup_row).

-include("openapi.hrl").

-export([openapi_vps_backup_row/0]).

-export([openapi_vps_backup_row/1]).

-export_type([openapi_vps_backup_row/0]).

-type openapi_vps_backup_row() ::
  [ {'type', binary() }
  | {'service', integer() }
  | {'name', binary() }
  | {'size', integer() }
  | {'date', integer() }
  ].


openapi_vps_backup_row() ->
    openapi_vps_backup_row([]).

openapi_vps_backup_row(Fields) ->
  Default = [ {'type', binary() }
            , {'service', integer() }
            , {'name', binary() }
            , {'size', integer() }
            , {'date', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

