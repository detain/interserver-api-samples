-module(openapi_config_lists).

-include("openapi.hrl").

-export([openapi_config_lists/0]).

-export([openapi_config_lists/1]).

-export_type([openapi_config_lists/0]).

-type openapi_config_lists() ::
  [ {'cpu_li', map() }
  | {'memory_li', map() }
  | {'hd_li', map() }
  | {'bandwidth_li', map() }
  | {'ips_li', map() }
  | {'os_li', map() }
  | {'cp_li', map() }
  | {'raid_li', list(openapi_raid_option:openapi_raid_option()) }
  ].


openapi_config_lists() ->
    openapi_config_lists([]).

openapi_config_lists(Fields) ->
  Default = [ {'cpu_li', map() }
            , {'memory_li', map() }
            , {'hd_li', map() }
            , {'bandwidth_li', map() }
            , {'ips_li', map() }
            , {'os_li', map() }
            , {'cp_li', map() }
            , {'raid_li', list(openapi_raid_option:openapi_raid_option()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

