-module(openapi_quickserver_order_templates).

-export([encode/1]).

-export_type([openapi_quickserver_order_templates/0]).

-type openapi_quickserver_order_templates() ::
    #{ 'Ubuntu' => openapi_quickserver_order_templates_ubuntu64:openapi_quickserver_order_templates_ubuntu64()
     }.

encode(#{ 'Ubuntu' := Ubuntu
        }) ->
    #{ 'Ubuntu' => Ubuntu
     }.
