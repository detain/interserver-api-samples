-module(openapi_ip_limit_range).

-include("openapi.hrl").

-export([openapi_ip_limit_range/0]).

-export([openapi_ip_limit_range/1]).

-export_type([openapi_ip_limit_range/0]).

-type openapi_ip_limit_range() ::
  [ {'start', binary() }
  | {'End_', binary() }
  ].


openapi_ip_limit_range() ->
    openapi_ip_limit_range([]).

openapi_ip_limit_range(Fields) ->
  Default = [ {'start', binary() }
            , {'end', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

