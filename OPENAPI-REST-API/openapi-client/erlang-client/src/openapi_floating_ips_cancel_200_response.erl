-module(openapi_floating_ips_cancel_200_response).

-export([encode/1]).

-export_type([openapi_floating_ips_cancel_200_response/0]).

-type openapi_floating_ips_cancel_200_response() ::
    #{ 'success' := boolean(),
       'text' := binary()
     }.

encode(#{ 'success' := Success,
          'text' := Text
        }) ->
    #{ 'success' => Success,
       'text' => Text
     }.
