-module(openapi_home_services_backups).

-include("openapi.hrl").

-export([openapi_home_services_backups/0]).

-export([openapi_home_services_backups/1]).

-export_type([openapi_home_services_backups/0]).

-type openapi_home_services_backups() ::
  [ {'links', list(binary()) }
  | {'count', integer() }
  ].


openapi_home_services_backups() ->
    openapi_home_services_backups([]).

openapi_home_services_backups(Fields) ->
  Default = [ {'links', list(binary()) }
            , {'count', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

