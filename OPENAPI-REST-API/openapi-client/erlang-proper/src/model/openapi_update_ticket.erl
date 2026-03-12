-module(openapi_update_ticket).

-include("openapi.hrl").

-export([openapi_update_ticket/0]).

-export([openapi_update_ticket/1]).

-export_type([openapi_update_ticket/0]).

-type openapi_update_ticket() ::
  [ {'ip', binary() }
  | {'ip_address', binary() }
  | {'customer_server_access', binary() }
  | {'root_password', binary() }
  | {'sudo_username', binary() }
  | {'sudo_password', binary() }
  | {'port', integer() }
  ].


openapi_update_ticket() ->
    openapi_update_ticket([]).

openapi_update_ticket(Fields) ->
  Default = [ {'ip', binary() }
            , {'ip_address', binary() }
            , {'customer_server_access', elements([<<"y">>, <<"n">>]) }
            , {'root_password', binary() }
            , {'sudo_username', binary() }
            , {'sudo_password', binary() }
            , {'port', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

