-module(openapi_mail_stats_type).

-export([encode/1]).

-export_type([openapi_mail_stats_type/0]).

-type openapi_mail_stats_type() ::
    #{ 'time' => binary(),
       'usage' => integer(),
       'currency' => binary(),
       'currencySymbol' => binary(),
       'cost' => float(),
       'received' => integer(),
       'sent' => integer(),
       'volume' => openapi_mail_stats_type_volume:openapi_mail_stats_type_volume()
     }.

encode(#{ 'time' := Time,
          'usage' := Usage,
          'currency' := Currency,
          'currencySymbol' := CurrencySymbol,
          'cost' := Cost,
          'received' := Received,
          'sent' := Sent,
          'volume' := Volume
        }) ->
    #{ 'time' => Time,
       'usage' => Usage,
       'currency' => Currency,
       'currencySymbol' => CurrencySymbol,
       'cost' => Cost,
       'received' => Received,
       'sent' => Sent,
       'volume' => Volume
     }.
