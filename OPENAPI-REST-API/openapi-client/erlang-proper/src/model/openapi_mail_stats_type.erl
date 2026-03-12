-module(openapi_mail_stats_type).

-include("openapi.hrl").

-export([openapi_mail_stats_type/0]).

-export([openapi_mail_stats_type/1]).

-export_type([openapi_mail_stats_type/0]).

-type openapi_mail_stats_type() ::
  [ {'time', binary() }
  | {'usage', integer() }
  | {'currency', binary() }
  | {'currencySymbol', binary() }
  | {'cost', float() }
  | {'received', integer() }
  | {'sent', integer() }
  | {'volume', openapi_mail_stats_type_volume:openapi_mail_stats_type_volume() }
  ].


openapi_mail_stats_type() ->
    openapi_mail_stats_type([]).

openapi_mail_stats_type(Fields) ->
  Default = [ {'time', elements([<<"all">>, <<"billing">>, <<"month">>, <<"7d">>, <<"24h">>, <<"today">>, <<"1h">>]) }
            , {'usage', integer() }
            , {'currency', binary() }
            , {'currencySymbol', binary() }
            , {'cost', float() }
            , {'received', integer() }
            , {'sent', integer() }
            , {'volume', openapi_mail_stats_type_volume:openapi_mail_stats_type_volume() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

