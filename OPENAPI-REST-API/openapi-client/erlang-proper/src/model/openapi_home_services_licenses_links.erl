-module(openapi_home_services_licenses_links).

-include("openapi.hrl").

-export([openapi_home_services_licenses_links/0]).

-export([openapi_home_services_licenses_links/1]).

-export_type([openapi_home_services_licenses_links/0]).

-type openapi_home_services_licenses_links() ::
  [ {'386522', binary() }
  ].


openapi_home_services_licenses_links() ->
    openapi_home_services_licenses_links([]).

openapi_home_services_licenses_links(Fields) ->
  Default = [ {'386522', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

