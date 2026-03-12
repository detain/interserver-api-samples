-module(openapi_operating_system).

-export([encode/1]).

-export_type([openapi_operating_system/0]).

-type openapi_operating_system() ::
    #{ 'id' => integer(),
       'short_desc' => binary(),
       'monthly_price' => integer()
     }.

encode(#{ 'id' := Id,
          'short_desc' := ShortDesc,
          'monthly_price' := MonthlyPrice
        }) ->
    #{ 'id' => Id,
       'short_desc' => ShortDesc,
       'monthly_price' => MonthlyPrice
     }.
