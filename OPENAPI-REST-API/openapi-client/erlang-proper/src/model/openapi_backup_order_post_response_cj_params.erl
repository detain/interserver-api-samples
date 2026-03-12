-module(openapi_backup_order_post_response_cj_params).

-include("openapi.hrl").

-export([openapi_backup_order_post_response_cj_params/0]).

-export([openapi_backup_order_post_response_cj_params/1]).

-export_type([openapi_backup_order_post_response_cj_params/0]).

-type openapi_backup_order_post_response_cj_params() ::
  [ {'containerTagId', binary() }
  | {'CID', binary() }
  | {'OID', binary() }
  | {'TYPE', binary() }
  | {'ITEM1', binary() }
  | {'AMT1', binary() }
  | {'QTY1', integer() }
  | {'CURRENCY', binary() }
  ].


openapi_backup_order_post_response_cj_params() ->
    openapi_backup_order_post_response_cj_params([]).

openapi_backup_order_post_response_cj_params(Fields) ->
  Default = [ {'containerTagId', binary() }
            , {'CID', binary() }
            , {'OID', binary() }
            , {'TYPE', binary() }
            , {'ITEM1', binary() }
            , {'AMT1', binary() }
            , {'QTY1', integer() }
            , {'CURRENCY', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

