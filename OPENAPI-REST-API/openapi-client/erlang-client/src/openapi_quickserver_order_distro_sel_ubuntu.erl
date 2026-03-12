-module(openapi_quickserver_order_distro_sel_ubuntu).

-export([encode/1]).

-export_type([openapi_quickserver_order_distro_sel_ubuntu/0]).

-type openapi_quickserver_order_distro_sel_ubuntu() ::
    #{ 'Ubuntu' => binary()
     }.

encode(#{ 'Ubuntu' := Ubuntu
        }) ->
    #{ 'Ubuntu' => Ubuntu
     }.
