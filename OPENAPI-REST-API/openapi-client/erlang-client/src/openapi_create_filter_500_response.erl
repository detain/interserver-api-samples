-module(openapi_create_filter_500_response).

-export([encode/1]).

-export_type([openapi_create_filter_500_response/0]).

-type openapi_create_filter_500_response() ::
    #{ 'success' => boolean(),
       'text' => binary()
     }.

encode(#{ 'success' := Success,
          'text' := Text
        }) ->
    #{ 'success' => Success,
       'text' => Text
     }.
