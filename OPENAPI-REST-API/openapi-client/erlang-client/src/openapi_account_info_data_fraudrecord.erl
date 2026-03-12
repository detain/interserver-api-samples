-module(openapi_account_info_data_fraudrecord).

-export([encode/1]).

-export_type([openapi_account_info_data_fraudrecord/0]).

-type openapi_account_info_data_fraudrecord() ::
    #{ 'score' => binary(),
       'count' => binary(),
       'reliability' => binary(),
       'code' => binary()
     }.

encode(#{ 'score' := Score,
          'count' := Count,
          'reliability' := Reliability,
          'code' := Code
        }) ->
    #{ 'score' => Score,
       'count' => Count,
       'reliability' => Reliability,
       'code' => Code
     }.
