-module(openapi_server_assets).

-include("openapi.hrl").

-export([openapi_server_assets/0]).

-export([openapi_server_assets/1]).

-export_type([openapi_server_assets/0]).

-type openapi_server_assets() ::
  [ {'title', binary() }
  | {'size', integer() }
  | {'type', binary() }
  | {'header', list(binary()) }
  | {'rows', list(list(binary())) }
  ].


openapi_server_assets() ->
    openapi_server_assets([]).

openapi_server_assets(Fields) ->
  Default = [ {'title', binary() }
            , {'size', integer() }
            , {'type', binary() }
            , {'header', list(binary()) }
            , {'rows', list(list(binary())) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

