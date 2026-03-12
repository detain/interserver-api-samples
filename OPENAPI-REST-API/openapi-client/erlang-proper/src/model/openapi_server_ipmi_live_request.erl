-module(openapi_server_ipmi_live_request).

-include("openapi.hrl").

-export([openapi_server_ipmi_live_request/0]).

-export([openapi_server_ipmi_live_request/1]).

-export_type([openapi_server_ipmi_live_request/0]).

-type openapi_server_ipmi_live_request() ::
  [ {'asset', integer() }
  | {'ip', binary() }
  ].


openapi_server_ipmi_live_request() ->
    openapi_server_ipmi_live_request([]).

openapi_server_ipmi_live_request(Fields) ->
  Default = [ {'asset', integer() }
            , {'ip', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

