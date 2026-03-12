-module(openapi_login_submission_example_g_recaptcha_response).

-include("openapi.hrl").

-export([openapi_login_submission_example_g_recaptcha_response/0]).

-export([openapi_login_submission_example_g_recaptcha_response/1]).

-export_type([openapi_login_submission_example_g_recaptcha_response/0]).

-type openapi_login_submission_example_g_recaptcha_response() ::
  [ {'__v_isShallow', boolean() }
  | {'dep', openapi_login_submission_example_g_recaptcha_response_dep:openapi_login_submission_example_g_recaptcha_response_dep() }
  | {'__v_isRef', boolean() }
  | {'_rawValue', binary() }
  | {'_value', binary() }
  ].


openapi_login_submission_example_g_recaptcha_response() ->
    openapi_login_submission_example_g_recaptcha_response([]).

openapi_login_submission_example_g_recaptcha_response(Fields) ->
  Default = [ {'__v_isShallow', boolean() }
            , {'dep', openapi_login_submission_example_g_recaptcha_response_dep:openapi_login_submission_example_g_recaptcha_response_dep() }
            , {'__v_isRef', boolean() }
            , {'_rawValue', binary() }
            , {'_value', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

