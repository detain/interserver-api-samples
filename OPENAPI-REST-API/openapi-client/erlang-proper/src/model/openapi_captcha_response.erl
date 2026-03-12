-module(openapi_captcha_response).

-include("openapi.hrl").

-export([openapi_captcha_response/0]).

-export([openapi_captcha_response/1]).

-export_type([openapi_captcha_response/0]).

-type openapi_captcha_response() ::
  [ {'captcha', binary() }
  ].


openapi_captcha_response() ->
    openapi_captcha_response([]).

openapi_captcha_response(Fields) ->
  Default = [ {'captcha', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

