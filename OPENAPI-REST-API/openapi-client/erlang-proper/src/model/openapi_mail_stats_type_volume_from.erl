-module(openapi_mail_stats_type_volume_from).

-include("openapi.hrl").

-export([openapi_mail_stats_type_volume_from/0]).

-export([openapi_mail_stats_type_volume_from/1]).

-export_type([openapi_mail_stats_type_volume_from/0]).

-type openapi_mail_stats_type_volume_from() ::
  [ {'billingsomedomain_com', integer() }
  | {'salessomedomain_com', integer() }
  ].


openapi_mail_stats_type_volume_from() ->
    openapi_mail_stats_type_volume_from([]).

openapi_mail_stats_type_volume_from(Fields) ->
  Default = [ {'billing@somedomain.com', integer() }
            , {'sales@somedomain.com', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

