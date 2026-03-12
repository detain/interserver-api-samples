-module(openapi_mail_alert_request).

-include("openapi.hrl").

-export([openapi_mail_alert_request/0]).

-export([openapi_mail_alert_request/1]).

-export_type([openapi_mail_alert_request/0]).

-type openapi_mail_alert_request() ::
  [ {'type', binary() }
  | {'value', binary() }
  | {'to', binary() }
  | {'enabled', binary() }
  ].


openapi_mail_alert_request() ->
    openapi_mail_alert_request([]).

openapi_mail_alert_request(Fields) ->
  Default = [ {'type', binary() }
            , {'value', binary() }
            , {'to', binary() }
            , {'enabled', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

