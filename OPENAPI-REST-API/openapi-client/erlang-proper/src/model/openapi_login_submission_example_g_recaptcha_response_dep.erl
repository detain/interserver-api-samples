-module(openapi_login_submission_example_g_recaptcha_response_dep).

-include("openapi.hrl").

-export([openapi_login_submission_example_g_recaptcha_response_dep/0]).

-export([openapi_login_submission_example_g_recaptcha_response_dep/1]).

-export_type([openapi_login_submission_example_g_recaptcha_response_dep/0]).

-type openapi_login_submission_example_g_recaptcha_response_dep() ::
  [ {'w', integer() }
  | {'n', integer() }
  ].


openapi_login_submission_example_g_recaptcha_response_dep() ->
    openapi_login_submission_example_g_recaptcha_response_dep([]).

openapi_login_submission_example_g_recaptcha_response_dep(Fields) ->
  Default = [ {'w', integer() }
            , {'n', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

