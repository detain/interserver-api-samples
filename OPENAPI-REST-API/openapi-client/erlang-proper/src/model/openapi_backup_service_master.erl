-module(openapi_backup_service_master).

-include("openapi.hrl").

-export([openapi_backup_service_master/0]).

-export([openapi_backup_service_master/1]).

-export_type([openapi_backup_service_master/0]).

-type openapi_backup_service_master() ::
  [ {'backup_id', integer() }
  | {'backup_name', binary() }
  | {'backup_ip', binary() }
  | {'backup_type', integer() }
  | {'backup_hdsize', integer() }
  | {'backup_hdfree', integer() }
  | {'backup_last_update', binary() }
  | {'backup_available', integer() }
  | {'backup_iowait', integer() }
  | {'backup_order', integer() }
  ].


openapi_backup_service_master() ->
    openapi_backup_service_master([]).

openapi_backup_service_master(Fields) ->
  Default = [ {'backup_id', integer() }
            , {'backup_name', binary() }
            , {'backup_ip', binary() }
            , {'backup_type', integer() }
            , {'backup_hdsize', integer() }
            , {'backup_hdfree', integer() }
            , {'backup_last_update', binary() }
            , {'backup_available', integer() }
            , {'backup_iowait', integer() }
            , {'backup_order', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

