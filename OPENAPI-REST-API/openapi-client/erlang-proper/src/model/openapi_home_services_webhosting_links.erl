-module(openapi_home_services_webhosting_links).

-include("openapi.hrl").

-export([openapi_home_services_webhosting_links/0]).

-export([openapi_home_services_webhosting_links/1]).

-export_type([openapi_home_services_webhosting_links/0]).

-type openapi_home_services_webhosting_links() ::
  [ {'376359', binary() }
  | {'376473', binary() }
  | {'386218', binary() }
  ].


openapi_home_services_webhosting_links() ->
    openapi_home_services_webhosting_links([]).

openapi_home_services_webhosting_links(Fields) ->
  Default = [ {'376359', binary() }
            , {'376473', binary() }
            , {'386218', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

