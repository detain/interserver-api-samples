-module(openapi_config_ids).

-include("openapi.hrl").

-export([openapi_config_ids/0]).

-export([openapi_config_ids/1]).

-export_type([openapi_config_ids/0]).

-type openapi_config_ids() ::
  [ {'memory', integer() }
  | {'hd', integer() }
  | {'bandwidth', integer() }
  | {'ips', integer() }
  | {'os', integer() }
  | {'cp', integer() }
  | {'raid', integer() }
  ].


openapi_config_ids() ->
    openapi_config_ids([]).

openapi_config_ids(Fields) ->
  Default = [ {'memory', integer() }
            , {'hd', integer() }
            , {'bandwidth', integer() }
            , {'ips', integer() }
            , {'os', integer() }
            , {'cp', integer() }
            , {'raid', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

