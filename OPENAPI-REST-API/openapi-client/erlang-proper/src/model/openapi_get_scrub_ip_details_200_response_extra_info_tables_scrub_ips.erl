-module(openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips).

-include("openapi.hrl").

-export([openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips/0]).

-export([openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips/1]).

-export_type([openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips/0]).

-type openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips() ::
  [ {'title', binary() }
  | {'rows', list(openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner:openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner()) }
  ].


openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips() ->
    openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips([]).

openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips(Fields) ->
  Default = [ {'title', binary() }
            , {'rows', list(openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner:openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

