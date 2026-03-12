-module(openapi_mail_deliverability_response).

-include("openapi.hrl").

-export([openapi_mail_deliverability_response/0]).

-export([openapi_mail_deliverability_response/1]).

-export_type([openapi_mail_deliverability_response/0]).

-type openapi_mail_deliverability_response() ::
  [ {'stat', map() }
  | {'percent', integer() }
  | {'table_data', list(list(binary())) }
  ].


openapi_mail_deliverability_response() ->
    openapi_mail_deliverability_response([]).

openapi_mail_deliverability_response(Fields) ->
  Default = [ {'stat', map() }
            , {'percent', integer() }
            , {'table_data', list(list(binary())) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

