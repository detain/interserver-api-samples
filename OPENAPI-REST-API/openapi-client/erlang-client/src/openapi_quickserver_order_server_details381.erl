-module(openapi_quickserver_order_server_details381).

-export([encode/1]).

-export_type([openapi_quickserver_order_server_details381/0]).

-type openapi_quickserver_order_server_details381() ::
    #{ 'cpu' => binary(),
       'ram' => binary(),
       'hd' => binary(),
       'cores' => integer(),
       'cost' => binary()
     }.

encode(#{ 'cpu' := Cpu,
          'ram' := Ram,
          'hd' := Hd,
          'cores' := Cores,
          'cost' := Cost
        }) ->
    #{ 'cpu' => Cpu,
       'ram' => Ram,
       'hd' => Hd,
       'cores' => Cores,
       'cost' => Cost
     }.
