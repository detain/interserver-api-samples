-module(openapi_get_scrub_ip_details_200_response_filter_firewall_rules_inner).

-include("openapi.hrl").

-export([openapi_get_scrub_ip_details_200_response_filter_firewall_rules_inner/0]).

-export([openapi_get_scrub_ip_details_200_response_filter_firewall_rules_inner/1]).

-export_type([openapi_get_scrub_ip_details_200_response_filter_firewall_rules_inner/0]).

-type openapi_get_scrub_ip_details_200_response_filter_firewall_rules_inner() ::
  [ {'id', binary() }
  | {'source_ip', binary() }
  | {'destination_ip', binary() }
  | {'protocol_id', binary() }
  | {'source_port', binary() }
  | {'destination_port', binary() }
  | {'xdp_action', binary() }
  | {'global_drop', binary() }
  ].


openapi_get_scrub_ip_details_200_response_filter_firewall_rules_inner() ->
    openapi_get_scrub_ip_details_200_response_filter_firewall_rules_inner([]).

openapi_get_scrub_ip_details_200_response_filter_firewall_rules_inner(Fields) ->
  Default = [ {'id', binary() }
            , {'source_ip', binary() }
            , {'destination_ip', binary() }
            , {'protocol_id', binary() }
            , {'source_port', binary() }
            , {'destination_port', binary() }
            , {'xdp_action', binary() }
            , {'global_drop', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

