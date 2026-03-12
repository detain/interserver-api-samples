-module(openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner).

-include("openapi.hrl").

-export([openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner/0]).

-export([openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner/1]).

-export_type([openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner/0]).

-type openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner() ::
  [ {'desc', binary() }
  | {'value', binary() }
  ].


openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner() ->
    openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner([]).

openapi_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner(Fields) ->
  Default = [ {'desc', binary() }
            , {'value', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

