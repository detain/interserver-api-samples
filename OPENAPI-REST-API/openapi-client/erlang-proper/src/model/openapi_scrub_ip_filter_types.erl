-module(openapi_scrub_ip_filter_types).

-include("openapi.hrl").

-export([openapi_scrub_ip_filter_types/0]).

-export([openapi_scrub_ip_filter_types/1]).

-export_type([openapi_scrub_ip_filter_types/0]).

-type openapi_scrub_ip_filter_types() ::
  [ {'success', boolean() }
  | {'filters', map() }
  ].


openapi_scrub_ip_filter_types() ->
    openapi_scrub_ip_filter_types([]).

openapi_scrub_ip_filter_types(Fields) ->
  Default = [ {'success', boolean() }
            , {'filters', map() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

