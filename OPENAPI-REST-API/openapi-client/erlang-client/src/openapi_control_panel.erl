-module(openapi_control_panel).

-export([encode/1]).

-export_type([openapi_control_panel/0]).

-type openapi_control_panel() ::
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
