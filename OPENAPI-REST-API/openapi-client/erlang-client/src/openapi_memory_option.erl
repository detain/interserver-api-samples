-module(openapi_memory_option).

-export([encode/1]).

-export_type([openapi_memory_option/0]).

-type openapi_memory_option() ::
    #{ 'id' => integer(),
       'short_desc' => binary(),
       'monthly_price' => integer(),
       'monthly_price_display' => binary()
     }.

encode(#{ 'id' := Id,
          'short_desc' := ShortDesc,
          'monthly_price' := MonthlyPrice,
          'monthly_price_display' := MonthlyPriceDisplay
        }) ->
    #{ 'id' => Id,
       'short_desc' => ShortDesc,
       'monthly_price' => MonthlyPrice,
       'monthly_price_display' => MonthlyPriceDisplay
     }.
