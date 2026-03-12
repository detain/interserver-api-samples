-module(openapi_vps_order_templates_hyperv).

-export([encode/1]).

-export_type([openapi_vps_order_templates_hyperv/0]).

-type openapi_vps_order_templates_hyperv() ::
    #{ 'windows' => openapi_vps_order_templates_hyperv_windows:openapi_vps_order_templates_hyperv_windows()
     }.

encode(#{ 'windows' := Windows
        }) ->
    #{ 'windows' => Windows
     }.
