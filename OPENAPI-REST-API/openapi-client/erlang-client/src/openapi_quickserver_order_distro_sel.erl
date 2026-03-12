-module(openapi_quickserver_order_distro_sel).

-export([encode/1]).

-export_type([openapi_quickserver_order_distro_sel/0]).

-type openapi_quickserver_order_distro_sel() ::
    #{ 'Ubuntu' => openapi_quickserver_order_distro_sel_ubuntu:openapi_quickserver_order_distro_sel_ubuntu()
     }.

encode(#{ 'Ubuntu' := Ubuntu
        }) ->
    #{ 'Ubuntu' => Ubuntu
     }.
