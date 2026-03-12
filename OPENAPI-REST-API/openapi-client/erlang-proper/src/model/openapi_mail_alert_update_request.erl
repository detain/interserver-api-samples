-module(openapi_mail_alert_update_request).

-include("openapi.hrl").

-export([openapi_mail_alert_update_request/0]).

-export([openapi_mail_alert_update_request/1]).

-export_type([openapi_mail_alert_update_request/0]).

-type openapi_mail_alert_update_request() ::
  [ {'alert_id', integer() }
  | {'type', binary() }
  | {'value', binary() }
  | {'to', binary() }
  | {'enabled', binary() }
  ].


openapi_mail_alert_update_request() ->
    openapi_mail_alert_update_request([]).

openapi_mail_alert_update_request(Fields) ->
  Default = [ {'alert_id', integer() }
            , {'type', binary() }
            , {'value', binary() }
            , {'to', binary() }
            , {'enabled', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

