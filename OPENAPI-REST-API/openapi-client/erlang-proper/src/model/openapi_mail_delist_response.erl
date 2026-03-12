-module(openapi_mail_delist_response).

-include("openapi.hrl").

-export([openapi_mail_delist_response/0]).

-export([openapi_mail_delist_response/1]).

-export_type([openapi_mail_delist_response/0]).

-type openapi_mail_delist_response() ::
  [ {'id', integer() }
  | {'local', list(map()) }
  | {'mbtrap', list(map()) }
  | {'subject', list(map()) }
  | {'manual', list(map()) }
  ].


openapi_mail_delist_response() ->
    openapi_mail_delist_response([]).

openapi_mail_delist_response(Fields) ->
  Default = [ {'id', integer() }
            , {'local', list(map()) }
            , {'mbtrap', list(map()) }
            , {'subject', list(map()) }
            , {'manual', list(map()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

