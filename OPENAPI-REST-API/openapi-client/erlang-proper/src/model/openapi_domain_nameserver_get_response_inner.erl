-module(openapi_domain_nameserver_get_response_inner).

-include("openapi.hrl").

-export([openapi_domain_nameserver_get_response_inner/0]).

-export([openapi_domain_nameserver_get_response_inner/1]).

-export_type([openapi_domain_nameserver_get_response_inner/0]).

-type openapi_domain_nameserver_get_response_inner() ::
  [ {'name', binary() }
  | {'ipaddress', binary() }
  | {'can_delete', binary() }
  ].


openapi_domain_nameserver_get_response_inner() ->
    openapi_domain_nameserver_get_response_inner([]).

openapi_domain_nameserver_get_response_inner(Fields) ->
  Default = [ {'name', binary() }
            , {'ipaddress', binary() }
            , {'can_delete', elements([<<"0">>, <<"1">>]) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

