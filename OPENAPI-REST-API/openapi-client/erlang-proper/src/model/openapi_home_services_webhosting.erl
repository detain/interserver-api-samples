-module(openapi_home_services_webhosting).

-include("openapi.hrl").

-export([openapi_home_services_webhosting/0]).

-export([openapi_home_services_webhosting/1]).

-export_type([openapi_home_services_webhosting/0]).

-type openapi_home_services_webhosting() ::
  [ {'links', openapi_home_services_webhosting_links:openapi_home_services_webhosting_links() }
  | {'count', integer() }
  ].


openapi_home_services_webhosting() ->
    openapi_home_services_webhosting([]).

openapi_home_services_webhosting(Fields) ->
  Default = [ {'links', openapi_home_services_webhosting_links:openapi_home_services_webhosting_links() }
            , {'count', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

