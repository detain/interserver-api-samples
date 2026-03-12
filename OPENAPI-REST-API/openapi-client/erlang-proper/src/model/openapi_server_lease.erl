-module(openapi_server_lease).

-include("openapi.hrl").

-export([openapi_server_lease/0]).

-export([openapi_server_lease/1]).

-export_type([openapi_server_lease/0]).

-type openapi_server_lease() ::
  [ {'mac', binary() }
  | {'authenticated', boolean() }
  | {'group', binary() }
  ].


openapi_server_lease() ->
    openapi_server_lease([]).

openapi_server_lease(Fields) ->
  Default = [ {'mac', binary() }
            , {'authenticated', boolean() }
            , {'group', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

