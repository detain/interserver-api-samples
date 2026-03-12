-module(openapi_login_submission_example_g_recaptcha_response_dep).

-export([encode/1]).

-export_type([openapi_login_submission_example_g_recaptcha_response_dep/0]).

-type openapi_login_submission_example_g_recaptcha_response_dep() ::
    #{ 'w' => integer(),
       'n' => integer()
     }.

encode(#{ 'w' := W,
          'n' := N
        }) ->
    #{ 'w' => W,
       'n' => N
     }.
