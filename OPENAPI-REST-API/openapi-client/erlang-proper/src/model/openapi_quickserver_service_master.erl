-module(openapi_quickserver_service_master).

-include("openapi.hrl").

-export([openapi_quickserver_service_master/0]).

-export([openapi_quickserver_service_master/1]).

-export_type([openapi_quickserver_service_master/0]).

-type openapi_quickserver_service_master() ::
  [ {'qs_id', binary() }
  | {'qs_name', binary() }
  | {'qs_ip', binary() }
  | {'qs_type', binary() }
  | {'qs_hdsize', binary() }
  | {'qs_hdfree', binary() }
  | {'qs_bits', binary() }
  | {'qs_load', binary() }
  | {'qs_ram', binary() }
  | {'qs_cpu_model', binary() }
  | {'qs_cpu_mhz', binary() }
  | {'qs_location', binary() }
  | {'qs_available', binary() }
  | {'qs_cost', binary() }
  | {'qs_last_update', binary() }
  | {'qs_cores', binary() }
  | {'qs_iowait', binary() }
  | {'qs_raid_status', binary() }
  | {'qs_drive_type', binary() }
  | {'qs_order', binary() }
  | {'qs_raid_building', binary() }
  | {'qs_kernel', binary() }
  | {'qs_ioping', binary() }
  | {'qs_speed', binary() }
  | {'qs_distro', binary() }
  | {'qs_distro_version', binary() }
  | {'qs_bytes_sec_in', binary() }
  | {'qs_bytes_sec_out', binary() }
  | {'qs_packets_sec_in', binary() }
  | {'qs_packets_sec_out', binary() }
  | {'qs_last_install_time', openapi_any_type:openapi_any_type() }
  | {'qs_partitions', openapi_any_type:openapi_any_type() }
  | {'qs_cpu_flags', binary() }
  ].


openapi_quickserver_service_master() ->
    openapi_quickserver_service_master([]).

openapi_quickserver_service_master(Fields) ->
  Default = [ {'qs_id', binary() }
            , {'qs_name', binary() }
            , {'qs_ip', binary() }
            , {'qs_type', binary() }
            , {'qs_hdsize', binary() }
            , {'qs_hdfree', binary() }
            , {'qs_bits', binary() }
            , {'qs_load', binary() }
            , {'qs_ram', binary() }
            , {'qs_cpu_model', binary() }
            , {'qs_cpu_mhz', binary() }
            , {'qs_location', binary() }
            , {'qs_available', binary() }
            , {'qs_cost', binary() }
            , {'qs_last_update', binary() }
            , {'qs_cores', binary() }
            , {'qs_iowait', binary() }
            , {'qs_raid_status', binary() }
            , {'qs_drive_type', binary() }
            , {'qs_order', binary() }
            , {'qs_raid_building', binary() }
            , {'qs_kernel', binary() }
            , {'qs_ioping', binary() }
            , {'qs_speed', binary() }
            , {'qs_distro', binary() }
            , {'qs_distro_version', binary() }
            , {'qs_bytes_sec_in', binary() }
            , {'qs_bytes_sec_out', binary() }
            , {'qs_packets_sec_in', binary() }
            , {'qs_packets_sec_out', binary() }
            , {'qs_last_install_time', openapi_any_type:openapi_any_type() }
            , {'qs_partitions', openapi_any_type:openapi_any_type() }
            , {'qs_cpu_flags', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

