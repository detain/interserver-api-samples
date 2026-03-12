-module(openapi_ip_block).

-include("openapi.hrl").

-export([openapi_ip_block/0]).

-export([openapi_ip_block/1]).

-export_type([openapi_ip_block/0]).

-type openapi_ip_block() ::
  [ {'id', integer() }
  | {'short_desc', binary() }
  | {'qty', binary() }
  | {'monthly_price', integer() }
  ].


openapi_ip_block() ->
    openapi_ip_block([]).

openapi_ip_block(Fields) ->
  Default = [ {'id', integer() }
            , {'short_desc', binary() }
            , {'qty', binary() }
            , {'monthly_price', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

