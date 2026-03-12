-module(openapi_licenses_cancel_200_response).

-export([encode/1]).

-export_type([openapi_licenses_cancel_200_response/0]).

-type openapi_licenses_cancel_200_response() ::
    #{ 'success' := boolean(),
       'text' := binary()
     }.

encode(#{ 'success' := Success,
          'text' := Text
        }) ->
    #{ 'success' => Success,
       'text' => Text
     }.
