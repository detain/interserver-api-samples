-module(openapi_server_order_field_labels).

-export([encode/1]).

-export_type([openapi_server_order_field_labels/0]).

-type openapi_server_order_field_labels() ::
    #{ 'bandwidth' => openapi_server_order_field_label:openapi_server_order_field_label(),
       'ips' => openapi_server_order_field_label:openapi_server_order_field_label(),
       'os' => openapi_server_order_field_label:openapi_server_order_field_label(),
       'cp' => openapi_server_order_field_label:openapi_server_order_field_label(),
       'raid' => openapi_server_order_field_label:openapi_server_order_field_label(),
       'memory' => openapi_server_order_field_label:openapi_server_order_field_label(),
       'hd' => openapi_server_order_field_label:openapi_server_order_field_label()
     }.

encode(#{ 'bandwidth' := Bandwidth,
          'ips' := Ips,
          'os' := Os,
          'cp' := Cp,
          'raid' := Raid,
          'memory' := Memory,
          'hd' := Hd
        }) ->
    #{ 'bandwidth' => Bandwidth,
       'ips' => Ips,
       'os' => Os,
       'cp' => Cp,
       'raid' => Raid,
       'memory' => Memory,
       'hd' => Hd
     }.
