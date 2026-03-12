-module(openapi_ip_limit_range).

-export([encode/1]).

-export_type([openapi_ip_limit_range/0]).

-type openapi_ip_limit_range() ::
    #{ 'start' := binary(),
       'End_' := binary()
     }.

encode(#{ 'start' := Start,
          'End_' := End
        }) ->
    #{ 'start' => Start,
       'end' => End
     }.
