-module(openapi_vps_order_platform_packages).

-export([encode/1]).

-export_type([openapi_vps_order_platform_packages/0]).

-type openapi_vps_order_platform_packages() ::
    #{ 'kvm' => integer(),
       'kvmstorage' => integer(),
       'hyperv' => integer()
     }.

encode(#{ 'kvm' := Kvm,
          'kvmstorage' := Kvmstorage,
          'hyperv' := Hyperv
        }) ->
    #{ 'kvm' => Kvm,
       'kvmstorage' => Kvmstorage,
       'hyperv' => Hyperv
     }.
