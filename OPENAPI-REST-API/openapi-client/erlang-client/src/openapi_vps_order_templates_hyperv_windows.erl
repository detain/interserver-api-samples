-module(openapi_vps_order_templates_hyperv_windows).

-export([encode/1]).

-export_type([openapi_vps_order_templates_hyperv_windows/0]).

-type openapi_vps_order_templates_hyperv_windows() ::
    #{ 'Windows2019Standard' => binary(),
       'Windows2022' => binary()
     }.

encode(#{ 'Windows2019Standard' := Windows2019Standard,
          'Windows2022' := Windows2022
        }) ->
    #{ 'Windows2019Standard' => Windows2019Standard,
       'Windows2022' => Windows2022
     }.
