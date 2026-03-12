-module(openapi_password_request).

-include("openapi.hrl").

-export([openapi_password_request/0]).

-export([openapi_password_request/1]).

-export_type([openapi_password_request/0]).

-type openapi_password_request() ::
  [ {'password', binary() }
  ].


openapi_password_request() ->
    openapi_password_request([]).

openapi_password_request(Fields) ->
  Default = [ {'password', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

