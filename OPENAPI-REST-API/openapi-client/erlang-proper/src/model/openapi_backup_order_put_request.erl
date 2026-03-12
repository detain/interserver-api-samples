-module(openapi_backup_order_put_request).

-include("openapi.hrl").

-export([openapi_backup_order_put_request/0]).

-export([openapi_backup_order_put_request/1]).

-export_type([openapi_backup_order_put_request/0]).

-type openapi_backup_order_put_request() ::
  [ {'validateOnly', boolean() }
  | {'serviceType', integer() }
  | {'coupon', binary() }
  ].


openapi_backup_order_put_request() ->
    openapi_backup_order_put_request([]).

openapi_backup_order_put_request(Fields) ->
  Default = [ {'validateOnly', boolean() }
            , {'serviceType', integer() }
            , {'coupon', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

