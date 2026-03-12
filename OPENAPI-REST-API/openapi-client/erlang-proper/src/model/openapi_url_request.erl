-module(openapi_url_request).

-include("openapi.hrl").

-export([openapi_url_request/0]).

-export([openapi_url_request/1]).

-export_type([openapi_url_request/0]).

-type openapi_url_request() ::
  [ {'url', binary() }
  ].


openapi_url_request() ->
    openapi_url_request([]).

openapi_url_request(Fields) ->
  Default = [ {'url', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

