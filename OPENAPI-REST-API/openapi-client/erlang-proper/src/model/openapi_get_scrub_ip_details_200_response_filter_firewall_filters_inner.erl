-module(openapi_get_scrub_ip_details_200_response_filter_firewall_filters_inner).

-include("openapi.hrl").

-export([openapi_get_scrub_ip_details_200_response_filter_firewall_filters_inner/0]).

-export([openapi_get_scrub_ip_details_200_response_filter_firewall_filters_inner/1]).

-export_type([openapi_get_scrub_ip_details_200_response_filter_firewall_filters_inner/0]).

-type openapi_get_scrub_ip_details_200_response_filter_firewall_filters_inner() ::
  [ {'daddr', binary() }
  | {'dest', binary() }
  | {'filter_name', binary() }
  | {'destination_ip', binary() }
  | {'filter', binary() }
  ].


openapi_get_scrub_ip_details_200_response_filter_firewall_filters_inner() ->
    openapi_get_scrub_ip_details_200_response_filter_firewall_filters_inner([]).

openapi_get_scrub_ip_details_200_response_filter_firewall_filters_inner(Fields) ->
  Default = [ {'daddr', binary() }
            , {'dest', binary() }
            , {'filter_name', binary() }
            , {'destination_ip', binary() }
            , {'filter', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

