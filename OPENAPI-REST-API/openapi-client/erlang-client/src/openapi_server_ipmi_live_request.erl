-module(openapi_server_ipmi_live_request).

-export([encode/1]).

-export_type([openapi_server_ipmi_live_request/0]).

-type openapi_server_ipmi_live_request() ::
    #{ 'asset' => integer(),
       'ip' := binary()
     }.

encode(#{ 'asset' := Asset,
          'ip' := Ip
        }) ->
    #{ 'asset' => Asset,
       'ip' => Ip
     }.
