-module(openapi_place_buy_now_server_request).

-include("openapi.hrl").

-export([openapi_place_buy_now_server_request/0]).

-export([openapi_place_buy_now_server_request/1]).

-export_type([openapi_place_buy_now_server_request/0]).

-type openapi_place_buy_now_server_request() ::
  [ {'server_id', integer() }
  | {'server_hostname', binary() }
  | {'server_root_password', binary() }
  ].


openapi_place_buy_now_server_request() ->
    openapi_place_buy_now_server_request([]).

openapi_place_buy_now_server_request(Fields) ->
  Default = [ {'server_id', integer() }
            , {'server_hostname', binary() }
            , {'server_root_password', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

