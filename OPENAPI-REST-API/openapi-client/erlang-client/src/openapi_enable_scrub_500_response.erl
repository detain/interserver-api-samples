-module(openapi_enable_scrub_500_response).

-export([encode/1]).

-export_type([openapi_enable_scrub_500_response/0]).

-type openapi_enable_scrub_500_response() ::
    #{ 'success' := boolean(),
       'text' := binary()
     }.

encode(#{ 'success' := Success,
          'text' := Text
        }) ->
    #{ 'success' => Success,
       'text' => Text
     }.
