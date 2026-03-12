-module(openapi_get_order_detail_200_response_ips_inner).

-export([encode/1]).

-export_type([openapi_get_order_detail_200_response_ips_inner/0]).

-type openapi_get_order_detail_200_response_ips_inner() ::
    #{ 'service_id' => integer(),
       'service_module' => binary(),
       'service_hostname' => binary()
     }.

encode(#{ 'service_id' := ServiceId,
          'service_module' := ServiceModule,
          'service_hostname' := ServiceHostname
        }) ->
    #{ 'service_id' => ServiceId,
       'service_module' => ServiceModule,
       'service_hostname' => ServiceHostname
     }.
