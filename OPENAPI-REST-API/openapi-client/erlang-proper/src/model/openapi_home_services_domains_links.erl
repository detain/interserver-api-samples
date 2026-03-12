-module(openapi_home_services_domains_links).

-include("openapi.hrl").

-export([openapi_home_services_domains_links/0]).

-export([openapi_home_services_domains_links/1]).

-export_type([openapi_home_services_domains_links/0]).

-type openapi_home_services_domains_links() ::
  [ {'376114', binary() }
  | {'376503', binary() }
  | {'592337', binary() }
  ].


openapi_home_services_domains_links() ->
    openapi_home_services_domains_links([]).

openapi_home_services_domains_links(Fields) ->
  Default = [ {'376114', binary() }
            , {'376503', binary() }
            , {'592337', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

