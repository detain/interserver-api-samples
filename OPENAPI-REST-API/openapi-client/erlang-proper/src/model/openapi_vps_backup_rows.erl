-module(openapi_vps_backup_rows).

-include("openapi.hrl").

-export([openapi_vps_backup_rows/0]).

-export_type([openapi_vps_backup_rows/0]).

-type openapi_vps_backup_rows() ::
  list(openapi_vps_backup_row:openapi_vps_backup_row()).

openapi_vps_backup_rows() ->
  list(openapi_vps_backup_row:openapi_vps_backup_row()).

