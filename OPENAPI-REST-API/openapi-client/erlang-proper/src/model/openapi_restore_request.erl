-module(openapi_restore_request).

-include("openapi.hrl").

-export([openapi_restore_request/0]).

-export([openapi_restore_request/1]).

-export_type([openapi_restore_request/0]).

-type openapi_restore_request() ::
  [ {'backup', binary() }
  | {'password', binary() }
  ].


openapi_restore_request() ->
    openapi_restore_request([]).

openapi_restore_request(Fields) ->
  Default = [ {'backup', binary() }
            , {'password', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

