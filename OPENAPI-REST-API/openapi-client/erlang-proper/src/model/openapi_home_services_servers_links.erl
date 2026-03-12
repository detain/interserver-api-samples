-module(openapi_home_services_servers_links).

-include("openapi.hrl").

-export([openapi_home_services_servers_links/0]).

-export([openapi_home_services_servers_links/1]).

-export_type([openapi_home_services_servers_links/0]).

-type openapi_home_services_servers_links() ::
  [ {'16058', binary() }
  ].


openapi_home_services_servers_links() ->
    openapi_home_services_servers_links([]).

openapi_home_services_servers_links(Fields) ->
  Default = [ {'16058', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

