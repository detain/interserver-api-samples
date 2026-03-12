-module(openapi_asset_server).

-export([encode/1]).

-export_type([openapi_asset_server/0]).

-type openapi_asset_server() ::
    #{ 'id' => integer(),
       'Region' => binary(),
       'price' => binary(),
       'CPU' => list(),
       'Memory' => list(),
       'Bandwidth' => list(),
       'IPs' => list(),
       'HD' => maps:map()
     }.

encode(#{ 'id' := Id,
          'Region' := Region,
          'price' := Price,
          'CPU' := CPU,
          'Memory' := Memory,
          'Bandwidth' := Bandwidth,
          'IPs' := IPs,
          'HD' := HD
        }) ->
    #{ 'id' => Id,
       'Region' => Region,
       'price' => Price,
       'CPU' => CPU,
       'Memory' => Memory,
       'Bandwidth' => Bandwidth,
       'IPs' => IPs,
       'HD' => HD
     }.
