-module(openapi_vps_service_extra).

-export([encode/1]).

-export_type([openapi_vps_service_extra/0]).

-type openapi_vps_service_extra() ::
    #{ 'spice' => integer(),
       'snapshots' => list()
     }.

encode(#{ 'spice' := Spice,
          'snapshots' := Snapshots
        }) ->
    #{ 'spice' => Spice,
       'snapshots' => Snapshots
     }.
