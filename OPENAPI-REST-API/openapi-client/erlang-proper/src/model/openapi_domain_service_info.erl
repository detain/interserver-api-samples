-module(openapi_domain_service_info).

-include("openapi.hrl").

-export([openapi_domain_service_info/0]).

-export([openapi_domain_service_info/1]).

-export_type([openapi_domain_service_info/0]).

-type openapi_domain_service_info() ::
  [ {'domain_id', binary() }
  | {'domain_hostname', binary() }
  | {'domain_username', binary() }
  | {'domain_password', binary() }
  | {'domain_type', binary() }
  | {'domain_currency', binary() }
  | {'domain_expire_date', binary() }
  | {'domain_order_date', binary() }
  | {'domain_custid', binary() }
  | {'domain_status', binary() }
  | {'domain_invoice', binary() }
  | {'domain_coupon', binary() }
  ].


openapi_domain_service_info() ->
    openapi_domain_service_info([]).

openapi_domain_service_info(Fields) ->
  Default = [ {'domain_id', binary() }
            , {'domain_hostname', binary() }
            , {'domain_username', binary() }
            , {'domain_password', binary() }
            , {'domain_type', binary() }
            , {'domain_currency', binary() }
            , {'domain_expire_date', binary() }
            , {'domain_order_date', binary() }
            , {'domain_custid', binary() }
            , {'domain_status', binary() }
            , {'domain_invoice', binary() }
            , {'domain_coupon', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

