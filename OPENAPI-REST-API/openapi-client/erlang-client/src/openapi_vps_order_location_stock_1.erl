-module(openapi_vps_order_location_stock_1).

-export([encode/1]).

-export_type([openapi_vps_order_location_stock_1/0]).

-type openapi_vps_order_location_stock_1() ::
    #{ 'kvm' => boolean(),
       'kvmstorage' => boolean(),
       'hyperv' => boolean()
     }.

encode(#{ 'kvm' := Kvm,
          'kvmstorage' := Kvmstorage,
          'hyperv' := Hyperv
        }) ->
    #{ 'kvm' => Kvm,
       'kvmstorage' => Kvmstorage,
       'hyperv' => Hyperv
     }.
