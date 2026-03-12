-module(openapi_vps_order_templates).

-export([encode/1]).

-export_type([openapi_vps_order_templates/0]).

-type openapi_vps_order_templates() ::
    #{ 'hyperv' => openapi_vps_order_templates_hyperv:openapi_vps_order_templates_hyperv()
     }.

encode(#{ 'hyperv' := Hyperv
        }) ->
    #{ 'hyperv' => Hyperv
     }.
