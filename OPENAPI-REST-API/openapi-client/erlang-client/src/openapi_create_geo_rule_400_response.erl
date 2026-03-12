-module(openapi_create_geo_rule_400_response).

-export([encode/1]).

-export_type([openapi_create_geo_rule_400_response/0]).

-type openapi_create_geo_rule_400_response() ::
    #{ 'success' => boolean(),
       'text' => binary(),
       'errors' => list()
     }.

encode(#{ 'success' := Success,
          'text' := Text,
          'errors' := Errors
        }) ->
    #{ 'success' => Success,
       'text' => Text,
       'errors' => Errors
     }.
