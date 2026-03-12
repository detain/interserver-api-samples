-module(openapi_home_services_domains).

-include("openapi.hrl").

-export([openapi_home_services_domains/0]).

-export([openapi_home_services_domains/1]).

-export_type([openapi_home_services_domains/0]).

-type openapi_home_services_domains() ::
  [ {'links', openapi_home_services_domains_links:openapi_home_services_domains_links() }
  | {'count', integer() }
  ].


openapi_home_services_domains() ->
    openapi_home_services_domains([]).

openapi_home_services_domains(Fields) ->
  Default = [ {'links', openapi_home_services_domains_links:openapi_home_services_domains_links() }
            , {'count', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

