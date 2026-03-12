-module(openapi_backup_order_put_response).

-include("openapi.hrl").

-export([openapi_backup_order_put_response/0]).

-export([openapi_backup_order_put_response/1]).

-export_type([openapi_backup_order_put_response/0]).

-type openapi_backup_order_put_response() ::
  [ {'continue', boolean() }
  | {'errors', list(binary()) }
  | {'serviceType', integer() }
  | {'serviceCost', binary() }
  | {'originalCost', binary() }
  | {'repeatServiceCost', binary() }
  | {'hostname', binary() }
  | {'password', binary() }
  | {'coupon', binary() }
  | {'couponCode', integer() }
  ].


openapi_backup_order_put_response() ->
    openapi_backup_order_put_response([]).

openapi_backup_order_put_response(Fields) ->
  Default = [ {'continue', boolean() }
            , {'errors', list(binary()) }
            , {'serviceType', integer() }
            , {'serviceCost', binary() }
            , {'originalCost', binary() }
            , {'repeatServiceCost', binary() }
            , {'hostname', binary() }
            , {'password', binary() }
            , {'coupon', binary() }
            , {'couponCode', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

