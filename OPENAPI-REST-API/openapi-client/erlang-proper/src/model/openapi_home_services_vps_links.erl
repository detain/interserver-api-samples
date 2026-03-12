-module(openapi_home_services_vps_links).

-include("openapi.hrl").

-export([openapi_home_services_vps_links/0]).

-export([openapi_home_services_vps_links/1]).

-export_type([openapi_home_services_vps_links/0]).

-type openapi_home_services_vps_links() ::
  [ {'465503', binary() }
  | {'2500081', binary() }
  | {'2578866', binary() }
  ].


openapi_home_services_vps_links() ->
    openapi_home_services_vps_links([]).

openapi_home_services_vps_links(Fields) ->
  Default = [ {'465503', binary() }
            , {'2500081', binary() }
            , {'2578866', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

