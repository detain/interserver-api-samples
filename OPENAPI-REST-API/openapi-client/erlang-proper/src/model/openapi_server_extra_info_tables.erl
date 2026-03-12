-module(openapi_server_extra_info_tables).

-include("openapi.hrl").

-export([openapi_server_extra_info_tables/0]).

-export([openapi_server_extra_info_tables/1]).

-export_type([openapi_server_extra_info_tables/0]).

-type openapi_server_extra_info_tables() ::
  [ {'assets', openapi_server_assets:openapi_server_assets() }
  ].


openapi_server_extra_info_tables() ->
    openapi_server_extra_info_tables([]).

openapi_server_extra_info_tables(Fields) ->
  Default = [ {'assets', openapi_server_assets:openapi_server_assets() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

