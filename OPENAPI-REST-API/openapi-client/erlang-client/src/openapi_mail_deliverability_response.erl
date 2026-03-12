-module(openapi_mail_deliverability_response).

-export([encode/1]).

-export_type([openapi_mail_deliverability_response/0]).

-type openapi_mail_deliverability_response() ::
    #{ 'stat' => maps:map(),
       'percent' => integer(),
       'table_data' => list()
     }.

encode(#{ 'stat' := Stat,
          'percent' := Percent,
          'table_data' := TableData
        }) ->
    #{ 'stat' => Stat,
       'percent' => Percent,
       'table_data' => TableData
     }.
