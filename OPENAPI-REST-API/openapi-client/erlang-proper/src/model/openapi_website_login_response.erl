-module(openapi_website_login_response).

-include("openapi.hrl").

-export([openapi_website_login_response/0]).

-export([openapi_website_login_response/1]).

-export_type([openapi_website_login_response/0]).

-type openapi_website_login_response() ::
  [ {'type', binary() }
  | {'location', binary() }
  ].


openapi_website_login_response() ->
    openapi_website_login_response([]).

openapi_website_login_response(Fields) ->
  Default = [ {'type', binary() }
            , {'location', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

