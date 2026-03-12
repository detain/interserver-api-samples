-module(openapi_form_values).

-include("openapi.hrl").

-export([openapi_form_values/0]).

-export([openapi_form_values/1]).

-export_type([openapi_form_values/0]).

-type openapi_form_values() ::
  [ {'memory', integer() }
  | {'bandwidth', integer() }
  | {'ips', integer() }
  | {'os', integer() }
  | {'cp', integer() }
  | {'raid', integer() }
  | {'hd', integer() }
  | {'region', integer() }
  ].


openapi_form_values() ->
    openapi_form_values([]).

openapi_form_values(Fields) ->
  Default = [ {'memory', integer() }
            , {'bandwidth', integer() }
            , {'ips', integer() }
            , {'os', integer() }
            , {'cp', integer() }
            , {'raid', integer() }
            , {'hd', integer() }
            , {'region', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

