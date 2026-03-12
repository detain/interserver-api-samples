-module(openapi_home_services_servers).

-include("openapi.hrl").

-export([openapi_home_services_servers/0]).

-export([openapi_home_services_servers/1]).

-export_type([openapi_home_services_servers/0]).

-type openapi_home_services_servers() ::
  [ {'links', openapi_home_services_servers_links:openapi_home_services_servers_links() }
  | {'count', integer() }
  ].


openapi_home_services_servers() ->
    openapi_home_services_servers([]).

openapi_home_services_servers(Fields) ->
  Default = [ {'links', openapi_home_services_servers_links:openapi_home_services_servers_links() }
            , {'count', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

