-module(openapi_hard_drive).

-export([encode/1]).

-export_type([openapi_hard_drive/0]).

-type openapi_hard_drive() ::
    #{ 'id' => integer(),
       'short_desc' => binary(),
       'size' => binary(),
       'drive_type' => binary(),
       'monthly_price' => integer(),
       'monthly_price_display' => binary()
     }.

encode(#{ 'id' := Id,
          'short_desc' := ShortDesc,
          'size' := Size,
          'drive_type' := DriveType,
          'monthly_price' := MonthlyPrice,
          'monthly_price_display' := MonthlyPriceDisplay
        }) ->
    #{ 'id' => Id,
       'short_desc' => ShortDesc,
       'size' => Size,
       'drive_type' => DriveType,
       'monthly_price' => MonthlyPrice,
       'monthly_price_display' => MonthlyPriceDisplay
     }.
