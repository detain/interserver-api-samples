-module(openapi_raid_option).

-include("openapi.hrl").

-export([openapi_raid_option/0]).

-export([openapi_raid_option/1]).

-export_type([openapi_raid_option/0]).

-type openapi_raid_option() ::
  [ {'id', integer() }
  | {'short_desc', binary() }
  | {'monthly_price', integer() }
  ].


openapi_raid_option() ->
    openapi_raid_option([]).

openapi_raid_option(Fields) ->
  Default = [ {'id', integer() }
            , {'short_desc', binary() }
            , {'monthly_price', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

