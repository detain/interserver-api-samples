-module(openapi_vps_service_master).

-include("openapi.hrl").

-export([openapi_vps_service_master/0]).

-export([openapi_vps_service_master/1]).

-export_type([openapi_vps_service_master/0]).

-type openapi_vps_service_master() ::
  [ {'vps_id', binary() }
  | {'vps_name', binary() }
  | {'vps_ip', binary() }
  | {'vps_type', binary() }
  | {'vps_hdsize', binary() }
  | {'vps_hdfree', binary() }
  | {'vps_bits', binary() }
  | {'vps_load', binary() }
  | {'vps_ram', binary() }
  | {'vps_cpu_model', binary() }
  | {'vps_cpu_mhz', binary() }
  | {'vps_location', binary() }
  | {'vps_last_update', binary() }
  | {'vps_raid_building', binary() }
  | {'vps_kernel', binary() }
  | {'vps_available', binary() }
  | {'vps_cores', binary() }
  | {'vps_iowait', binary() }
  | {'vps_raid_status', binary() }
  | {'vps_mounts', binary() }
  | {'vps_server_max', binary() }
  | {'vps_server_max_slices', binary() }
  | {'vps_drive_type', binary() }
  | {'vps_order', binary() }
  ].


openapi_vps_service_master() ->
    openapi_vps_service_master([]).

openapi_vps_service_master(Fields) ->
  Default = [ {'vps_id', binary() }
            , {'vps_name', binary() }
            , {'vps_ip', binary() }
            , {'vps_type', binary() }
            , {'vps_hdsize', binary() }
            , {'vps_hdfree', binary() }
            , {'vps_bits', binary() }
            , {'vps_load', binary() }
            , {'vps_ram', binary() }
            , {'vps_cpu_model', binary() }
            , {'vps_cpu_mhz', binary() }
            , {'vps_location', binary() }
            , {'vps_last_update', binary() }
            , {'vps_raid_building', binary() }
            , {'vps_kernel', binary() }
            , {'vps_available', binary() }
            , {'vps_cores', binary() }
            , {'vps_iowait', binary() }
            , {'vps_raid_status', binary() }
            , {'vps_mounts', binary() }
            , {'vps_server_max', binary() }
            , {'vps_server_max_slices', binary() }
            , {'vps_drive_type', binary() }
            , {'vps_order', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

