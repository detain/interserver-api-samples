-module(openapi_raid_option).

-export([encode/1]).

-export_type([openapi_raid_option/0]).

-type openapi_raid_option() ::
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
