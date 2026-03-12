-module(openapi_monthly_counts).

-include("openapi.hrl").

-export([openapi_monthly_counts/0]).

-export([openapi_monthly_counts/1]).

-export_type([openapi_monthly_counts/0]).

-type openapi_monthly_counts() ::
  [ 
  ].


openapi_monthly_counts() ->
    openapi_monthly_counts([]).

openapi_monthly_counts(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

