-module(openapi_ip_block).

-export([encode/1]).

-export_type([openapi_ip_block/0]).

-type openapi_ip_block() ::
    #{ 'id' => integer(),
       'short_desc' => binary(),
       'qty' => binary(),
       'monthly_price' => integer()
     }.

encode(#{ 'id' := Id,
          'short_desc' := ShortDesc,
          'qty' := Qty,
          'monthly_price' := MonthlyPrice
        }) ->
    #{ 'id' => Id,
       'short_desc' => ShortDesc,
       'qty' => Qty,
       'monthly_price' => MonthlyPrice
     }.
