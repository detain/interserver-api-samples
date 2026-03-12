-module(openapi_login_submission_example).

-include("openapi.hrl").

-export([openapi_login_submission_example/0]).

-export([openapi_login_submission_example/1]).

-export_type([openapi_login_submission_example/0]).

-type openapi_login_submission_example() ::
  [ {'login', binary() }
  | {'passwd', binary() }
  | {'remember', binary() }
  | {'g_recaptcha_response', openapi_login_submission_example_g_recaptcha_response:openapi_login_submission_example_g_recaptcha_response() }
  | {'tfa', binary() }
  ].


openapi_login_submission_example() ->
    openapi_login_submission_example([]).

openapi_login_submission_example(Fields) ->
  Default = [ {'login', binary() }
            , {'passwd', binary() }
            , {'remember', binary() }
            , {'g-recaptcha-response', openapi_login_submission_example_g_recaptcha_response:openapi_login_submission_example_g_recaptcha_response() }
            , {'tfa', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

