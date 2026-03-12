-module(openapi_scrub_ip_filter_types_filters_value).

-include("openapi.hrl").

-export([openapi_scrub_ip_filter_types_filters_value/0]).

-export([openapi_scrub_ip_filter_types_filters_value/1]).

-export_type([openapi_scrub_ip_filter_types_filters_value/0]).

-type openapi_scrub_ip_filter_types_filters_value() ::
  [ {'name', binary() }
  | {'desc', binary() }
  ].


openapi_scrub_ip_filter_types_filters_value() ->
    openapi_scrub_ip_filter_types_filters_value([]).

openapi_scrub_ip_filter_types_filters_value(Fields) ->
  Default = [ {'name', binary() }
            , {'desc', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

