-module(openapi_account_info_limits_inner).

-export([encode/1]).

-export_type([openapi_account_info_limits_inner/0]).

-type openapi_account_info_limits_inner() ::
    #{ 'start' => binary(),
       'End_' => binary()
     }.

encode(#{ 'start' := Start,
          'End_' := End
        }) ->
    #{ 'start' => Start,
       'end' => End
     }.
