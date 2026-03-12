-module(openapi_domain_name_server).

-include("openapi.hrl").

-export([openapi_domain_name_server/0]).

-export([openapi_domain_name_server/1]).

-export_type([openapi_domain_name_server/0]).

-type openapi_domain_name_server() ::
  [ {'sortorder', binary() }
  | {'name', binary() }
  | {'ipaddress', binary() }
  ].


openapi_domain_name_server() ->
    openapi_domain_name_server([]).

openapi_domain_name_server(Fields) ->
  Default = [ {'sortorder', binary() }
            , {'name', binary() }
            , {'ipaddress', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

