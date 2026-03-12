-module(openapi_reverse_dns_entries).

-include("openapi.hrl").

-export([openapi_reverse_dns_entries/0]).

-export([openapi_reverse_dns_entries/1]).

-export_type([openapi_reverse_dns_entries/0]).

-type openapi_reverse_dns_entries() ::
  [ {'ips', map() }
  ].


openapi_reverse_dns_entries() ->
    openapi_reverse_dns_entries([]).

openapi_reverse_dns_entries(Fields) ->
  Default = [ {'ips', map() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

