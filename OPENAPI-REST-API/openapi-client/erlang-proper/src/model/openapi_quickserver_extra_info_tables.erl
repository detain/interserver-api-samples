-module(openapi_quickserver_extra_info_tables).

-include("openapi.hrl").

-export([openapi_quickserver_extra_info_tables/0]).

-export([openapi_quickserver_extra_info_tables/1]).

-export_type([openapi_quickserver_extra_info_tables/0]).

-type openapi_quickserver_extra_info_tables() ::
  [ {'ip_info', openapi_quickserver_ip_info:openapi_quickserver_ip_info() }
  | {'addons', openapi_quickserver_addons:openapi_quickserver_addons() }
  ].


openapi_quickserver_extra_info_tables() ->
    openapi_quickserver_extra_info_tables([]).

openapi_quickserver_extra_info_tables(Fields) ->
  Default = [ {'ip_info', openapi_quickserver_ip_info:openapi_quickserver_ip_info() }
            , {'addons', openapi_quickserver_addons:openapi_quickserver_addons() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

