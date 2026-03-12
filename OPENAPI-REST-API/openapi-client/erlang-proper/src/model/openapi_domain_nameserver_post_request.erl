-module(openapi_domain_nameserver_post_request).

-include("openapi.hrl").

-export([openapi_domain_nameserver_post_request/0]).

-export([openapi_domain_nameserver_post_request/1]).

-export_type([openapi_domain_nameserver_post_request/0]).

-type openapi_domain_nameserver_post_request() ::
  [ {'name', binary() }
  | {'ipAddress', binary() }
  ].


openapi_domain_nameserver_post_request() ->
    openapi_domain_nameserver_post_request([]).

openapi_domain_nameserver_post_request(Fields) ->
  Default = [ {'name', binary() }
            , {'ipAddress', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

