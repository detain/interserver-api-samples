-module(openapi_ip_object).

-include("openapi.hrl").

-export([openapi_ip_object/0]).

-export([openapi_ip_object/1]).

-export_type([openapi_ip_object/0]).

-type openapi_ip_object() ::
  [ {'ip', binary() }
  ].


openapi_ip_object() ->
    openapi_ip_object([]).

openapi_ip_object(Fields) ->
  Default = [ {'ip', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

