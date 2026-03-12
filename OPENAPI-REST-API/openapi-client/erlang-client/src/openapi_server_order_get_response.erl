-module(openapi_server_order_get_response).

-export([encode/1]).

-export_type([openapi_server_order_get_response/0]).

-type openapi_server_order_get_response() ::
    #{ 'form_values' := openapi_form_values:openapi_form_values(),
       'config_ids' := openapi_config_ids:openapi_config_ids(),
       'cpu' := integer(),
       'cpu_li' := maps:map(),
       'config_li' := openapi_config_lists:openapi_config_lists(),
       'field_label' => maps:map(),
       'cpu_cores' => maps:map(),
       'frequency' := integer(),
       'currency' := binary(),
       'currencySymbol' => binary(),
       'country' := binary(),
       'custid' => integer(),
       'ima' => binary(),
       'step' := binary(),
       'regions' => list(),
       'asset_servers' => list(),
       'buy_it_servers' => list(),
       'display_showmore' => binary(),
       'cust_discount' => integer()
     }.

encode(#{ 'form_values' := FormValues,
          'config_ids' := ConfigIds,
          'cpu' := Cpu,
          'cpu_li' := CpuLi,
          'config_li' := ConfigLi,
          'field_label' := FieldLabel,
          'cpu_cores' := CpuCores,
          'frequency' := Frequency,
          'currency' := Currency,
          'currencySymbol' := CurrencySymbol,
          'country' := Country,
          'custid' := Custid,
          'ima' := Ima,
          'step' := Step,
          'regions' := Regions,
          'asset_servers' := AssetServers,
          'buy_it_servers' := BuyItServers,
          'display_showmore' := DisplayShowmore,
          'cust_discount' := CustDiscount
        }) ->
    #{ 'form_values' => FormValues,
       'config_ids' => ConfigIds,
       'cpu' => Cpu,
       'cpu_li' => CpuLi,
       'config_li' => ConfigLi,
       'field_label' => FieldLabel,
       'cpu_cores' => CpuCores,
       'frequency' => Frequency,
       'currency' => Currency,
       'currencySymbol' => CurrencySymbol,
       'country' => Country,
       'custid' => Custid,
       'ima' => Ima,
       'step' => Step,
       'regions' => Regions,
       'asset_servers' => AssetServers,
       'buy_it_servers' => BuyItServers,
       'display_showmore' => DisplayShowmore,
       'cust_discount' => CustDiscount
     }.
