-module(openapi_post_oauth_callback_200_response).

-include("openapi.hrl").

-export([openapi_post_oauth_callback_200_response/0]).

-export([openapi_post_oauth_callback_200_response/1]).

-export_type([openapi_post_oauth_callback_200_response/0]).

-type openapi_post_oauth_callback_200_response() ::
  [ {'login', boolean() }
  | {'signup', boolean() }
  | {'linked', boolean() }
  | {'account_id', integer() }
  | {'error_code', binary() }
  ].


openapi_post_oauth_callback_200_response() ->
    openapi_post_oauth_callback_200_response([]).

openapi_post_oauth_callback_200_response(Fields) ->
  Default = [ {'login', boolean() }
            , {'signup', boolean() }
            , {'linked', boolean() }
            , {'account_id', integer() }
            , {'error_code', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

