-module(openapi_mail_stats_type_volume_ip).

-include("openapi.hrl").

-export([openapi_mail_stats_type_volume_ip/0]).

-export([openapi_mail_stats_type_volume_ip/1]).

-export_type([openapi_mail_stats_type_volume_ip/0]).

-type openapi_mail_stats_type_volume_ip() ::
  [ {'1_1_1_1', integer() }
  | {'2_2_2_2', integer() }
  | {'3_3_3_3', integer() }
  | {'4_4_4_4', integer() }
  ].


openapi_mail_stats_type_volume_ip() ->
    openapi_mail_stats_type_volume_ip([]).

openapi_mail_stats_type_volume_ip(Fields) ->
  Default = [ {'1.1.1.1', integer() }
            , {'2.2.2.2', integer() }
            , {'3.3.3.3', integer() }
            , {'4.4.4.4', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

