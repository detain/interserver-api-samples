-module(openapi_quickserver_order).

-export([encode/1]).

-export_type([openapi_quickserver_order/0]).

-type openapi_quickserver_order() ::
    #{ 'qs_id' => binary(),
       'server_details' => openapi_quickserver_order_server_details:openapi_quickserver_order_server_details(),
       'templates' => openapi_quickserver_order_templates:openapi_quickserver_order_templates(),
       'version' => openapi_quickserver_order_version:openapi_quickserver_order_version(),
       'distro_sel' => openapi_quickserver_order_distro_sel:openapi_quickserver_order_distro_sel()
     }.

encode(#{ 'qs_id' := QsId,
          'server_details' := ServerDetails,
          'templates' := Templates,
          'version' := Version,
          'distro_sel' := DistroSel
        }) ->
    #{ 'qs_id' => QsId,
       'server_details' => ServerDetails,
       'templates' => Templates,
       'version' => Version,
       'distro_sel' => DistroSel
     }.
