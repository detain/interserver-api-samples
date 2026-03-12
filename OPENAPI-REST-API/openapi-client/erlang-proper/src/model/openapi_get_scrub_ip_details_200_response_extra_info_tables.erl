-module(openapi_get_scrub_ip_details_200_response_extra_info_tables).

-include("openapi.hrl").

-export([openapi_get_scrub_ip_details_200_response_extra_info_tables/0]).

-export([openapi_get_scrub_ip_details_200_response_extra_info_tables/1]).

-export_type([openapi_get_scrub_ip_details_200_response_extra_info_tables/0]).

-type openapi_get_scrub_ip_details_200_response_extra_info_tables() ::
  [ {'scrub_ips', openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips:openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips() }
  ].


openapi_get_scrub_ip_details_200_response_extra_info_tables() ->
    openapi_get_scrub_ip_details_200_response_extra_info_tables([]).

openapi_get_scrub_ip_details_200_response_extra_info_tables(Fields) ->
  Default = [ {'scrub_ips', openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips:openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

