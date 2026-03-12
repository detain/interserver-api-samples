-module(openapi_vps_order_put_response).

-include("openapi.hrl").

-export([openapi_vps_order_put_response/0]).

-export([openapi_vps_order_put_response/1]).

-export_type([openapi_vps_order_put_response/0]).

-type openapi_vps_order_put_response() ::
  [ {'continue', boolean() }
  | {'errors', list(openapi_any_type:openapi_any_type()) }
  | {'coupon_code', integer() }
  | {'service_cost', integer() }
  | {'slice_cost', integer() }
  | {'service_type', integer() }
  | {'repeat_slice_cost', integer() }
  | {'original_slice_cost', integer() }
  | {'original_cost', integer() }
  | {'repeat_service_cost', integer() }
  | {'monthly_service_cost', integer() }
  | {'custid', binary() }
  | {'os', binary() }
  | {'slices', binary() }
  | {'platform', binary() }
  | {'controlpanel', binary() }
  | {'period', integer() }
  | {'location', integer() }
  | {'version', binary() }
  | {'hostname', binary() }
  | {'coupon', binary() }
  | {'rootpass', binary() }
  ].


openapi_vps_order_put_response() ->
    openapi_vps_order_put_response([]).

openapi_vps_order_put_response(Fields) ->
  Default = [ {'continue', boolean() }
            , {'errors', list(openapi_any_type:openapi_any_type()) }
            , {'coupon_code', integer() }
            , {'service_cost', integer() }
            , {'slice_cost', integer() }
            , {'service_type', integer() }
            , {'repeat_slice_cost', integer() }
            , {'original_slice_cost', integer() }
            , {'original_cost', integer() }
            , {'repeat_service_cost', integer() }
            , {'monthly_service_cost', integer() }
            , {'custid', binary() }
            , {'os', binary() }
            , {'slices', binary() }
            , {'platform', binary() }
            , {'controlpanel', binary() }
            , {'period', integer() }
            , {'location', integer() }
            , {'version', binary() }
            , {'hostname', binary() }
            , {'coupon', binary() }
            , {'rootpass', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

