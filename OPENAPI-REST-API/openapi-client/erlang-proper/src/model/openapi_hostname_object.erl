-module(openapi_hostname_object).

-include("openapi.hrl").

-export([openapi_hostname_object/0]).

-export([openapi_hostname_object/1]).

-export_type([openapi_hostname_object/0]).

-type openapi_hostname_object() ::
  [ {'hostname', binary() }
  ].


openapi_hostname_object() ->
    openapi_hostname_object([]).

openapi_hostname_object(Fields) ->
  Default = [ {'hostname', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

