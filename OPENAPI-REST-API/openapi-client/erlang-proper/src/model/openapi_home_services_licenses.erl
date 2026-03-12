-module(openapi_home_services_licenses).

-include("openapi.hrl").

-export([openapi_home_services_licenses/0]).

-export([openapi_home_services_licenses/1]).

-export_type([openapi_home_services_licenses/0]).

-type openapi_home_services_licenses() ::
  [ {'links', openapi_home_services_licenses_links:openapi_home_services_licenses_links() }
  | {'count', integer() }
  ].


openapi_home_services_licenses() ->
    openapi_home_services_licenses([]).

openapi_home_services_licenses(Fields) ->
  Default = [ {'links', openapi_home_services_licenses_links:openapi_home_services_licenses_links() }
            , {'count', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

