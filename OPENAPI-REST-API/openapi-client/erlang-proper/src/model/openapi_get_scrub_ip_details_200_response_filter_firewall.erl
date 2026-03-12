-module(openapi_get_scrub_ip_details_200_response_filter_firewall).

-include("openapi.hrl").

-export([openapi_get_scrub_ip_details_200_response_filter_firewall/0]).

-export([openapi_get_scrub_ip_details_200_response_filter_firewall/1]).

-export_type([openapi_get_scrub_ip_details_200_response_filter_firewall/0]).

-type openapi_get_scrub_ip_details_200_response_filter_firewall() ::
  [ {'rules', list(openapi_get_scrub_ip_details_200_response_filter_firewall_rules_inner:openapi_get_scrub_ip_details_200_response_filter_firewall_rules_inner()) }
  | {'filters', list(openapi_get_scrub_ip_details_200_response_filter_firewall_filters_inner:openapi_get_scrub_ip_details_200_response_filter_firewall_filters_inner()) }
  | {'scrub_enabled', integer() }
  ].


openapi_get_scrub_ip_details_200_response_filter_firewall() ->
    openapi_get_scrub_ip_details_200_response_filter_firewall([]).

openapi_get_scrub_ip_details_200_response_filter_firewall(Fields) ->
  Default = [ {'rules', list(openapi_get_scrub_ip_details_200_response_filter_firewall_rules_inner:openapi_get_scrub_ip_details_200_response_filter_firewall_rules_inner()) }
            , {'filters', list(openapi_get_scrub_ip_details_200_response_filter_firewall_filters_inner:openapi_get_scrub_ip_details_200_response_filter_firewall_filters_inner()) }
            , {'scrub_enabled', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

