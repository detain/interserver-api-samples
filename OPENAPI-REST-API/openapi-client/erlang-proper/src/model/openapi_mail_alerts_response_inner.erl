-module(openapi_mail_alerts_response_inner).

-include("openapi.hrl").

-export([openapi_mail_alerts_response_inner/0]).

-export([openapi_mail_alerts_response_inner/1]).

-export_type([openapi_mail_alerts_response_inner/0]).

-type openapi_mail_alerts_response_inner() ::
  [ {'alert_id', integer() }
  | {'alert_type', binary() }
  | {'alert_value', binary() }
  | {'alert_to', binary() }
  | {'alert_enabled', binary() }
  ].


openapi_mail_alerts_response_inner() ->
    openapi_mail_alerts_response_inner([]).

openapi_mail_alerts_response_inner(Fields) ->
  Default = [ {'alert_id', integer() }
            , {'alert_type', binary() }
            , {'alert_value', binary() }
            , {'alert_to', binary() }
            , {'alert_enabled', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

