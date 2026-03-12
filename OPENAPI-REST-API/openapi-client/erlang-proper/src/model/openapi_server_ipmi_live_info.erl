-module(openapi_server_ipmi_live_info).

-include("openapi.hrl").

-export([openapi_server_ipmi_live_info/0]).

-export([openapi_server_ipmi_live_info/1]).

-export_type([openapi_server_ipmi_live_info/0]).

-type openapi_server_ipmi_live_info() ::
  [ {'text', binary() }
  | {'public_ip', binary() }
  | {'allowed_ip', binary() }
  | {'client_username', binary() }
  | {'client_password', binary() }
  ].


openapi_server_ipmi_live_info() ->
    openapi_server_ipmi_live_info([]).

openapi_server_ipmi_live_info(Fields) ->
  Default = [ {'text', binary() }
            , {'public_ip', binary() }
            , {'allowed_ip', binary() }
            , {'client_username', binary() }
            , {'client_password', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

