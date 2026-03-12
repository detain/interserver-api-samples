-module(openapi_post_oauth_callback_request).

-include("openapi.hrl").

-export([openapi_post_oauth_callback_request/0]).

-export([openapi_post_oauth_callback_request/1]).

-export_type([openapi_post_oauth_callback_request/0]).

-type openapi_post_oauth_callback_request() ::
  [ {'provider', binary() }
  ].


openapi_post_oauth_callback_request() ->
    openapi_post_oauth_callback_request([]).

openapi_post_oauth_callback_request(Fields) ->
  Default = [ {'provider', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

