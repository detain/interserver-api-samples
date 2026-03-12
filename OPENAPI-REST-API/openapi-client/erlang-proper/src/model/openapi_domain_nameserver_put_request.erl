-module(openapi_domain_nameserver_put_request).

-include("openapi.hrl").

-export([openapi_domain_nameserver_put_request/0]).

-export([openapi_domain_nameserver_put_request/1]).

-export_type([openapi_domain_nameserver_put_request/0]).

-type openapi_domain_nameserver_put_request() ::
  [ {'nameserver', list(binary()) }
  ].


openapi_domain_nameserver_put_request() ->
    openapi_domain_nameserver_put_request([]).

openapi_domain_nameserver_put_request(Fields) ->
  Default = [ {'nameserver', list(binary()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

