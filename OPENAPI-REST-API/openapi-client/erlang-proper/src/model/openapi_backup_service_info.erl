-module(openapi_backup_service_info).

-include("openapi.hrl").

-export([openapi_backup_service_info/0]).

-export([openapi_backup_service_info/1]).

-export_type([openapi_backup_service_info/0]).

-type openapi_backup_service_info() ::
  [ {'backup_id', binary() }
  | {'backup_server', binary() }
  | {'backup_username', binary() }
  | {'backup_type', binary() }
  | {'backup_currency', binary() }
  | {'backup_order_date', binary() }
  | {'backup_custid', binary() }
  | {'backup_quota', binary() }
  | {'backup_ip', binary() }
  | {'backup_status', binary() }
  | {'backup_invoice', binary() }
  | {'backup_coupon', binary() }
  | {'backup_extra', binary() }
  | {'backup_server_status', binary() }
  | {'backup_comment', binary() }
  ].


openapi_backup_service_info() ->
    openapi_backup_service_info([]).

openapi_backup_service_info(Fields) ->
  Default = [ {'backup_id', binary() }
            , {'backup_server', binary() }
            , {'backup_username', binary() }
            , {'backup_type', binary() }
            , {'backup_currency', binary() }
            , {'backup_order_date', binary() }
            , {'backup_custid', binary() }
            , {'backup_quota', binary() }
            , {'backup_ip', binary() }
            , {'backup_status', binary() }
            , {'backup_invoice', binary() }
            , {'backup_coupon', binary() }
            , {'backup_extra', binary() }
            , {'backup_server_status', binary() }
            , {'backup_comment', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

