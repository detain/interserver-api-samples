-module(openapi_home_services_vps).

-include("openapi.hrl").

-export([openapi_home_services_vps/0]).

-export([openapi_home_services_vps/1]).

-export_type([openapi_home_services_vps/0]).

-type openapi_home_services_vps() ::
  [ {'links', openapi_home_services_vps_links:openapi_home_services_vps_links() }
  | {'count', integer() }
  ].


openapi_home_services_vps() ->
    openapi_home_services_vps([]).

openapi_home_services_vps(Fields) ->
  Default = [ {'links', openapi_home_services_vps_links:openapi_home_services_vps_links() }
            , {'count', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

