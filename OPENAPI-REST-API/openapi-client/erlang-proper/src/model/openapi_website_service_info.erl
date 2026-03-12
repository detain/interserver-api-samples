-module(openapi_website_service_info).

-include("openapi.hrl").

-export([openapi_website_service_info/0]).

-export([openapi_website_service_info/1]).

-export_type([openapi_website_service_info/0]).

-type openapi_website_service_info() ::
  [ {'website_id', binary() }
  | {'website_server', binary() }
  | {'website_type', binary() }
  | {'website_currency', binary() }
  | {'website_order_date', binary() }
  | {'website_custid', binary() }
  | {'website_ip', binary() }
  | {'website_status', binary() }
  | {'website_invoice', binary() }
  | {'website_coupon', binary() }
  | {'website_extra', binary() }
  | {'website_hostname', binary() }
  | {'website_comment', binary() }
  | {'website_username', binary() }
  | {'website_server_status', binary() }
  ].


openapi_website_service_info() ->
    openapi_website_service_info([]).

openapi_website_service_info(Fields) ->
  Default = [ {'website_id', binary() }
            , {'website_server', binary() }
            , {'website_type', binary() }
            , {'website_currency', binary() }
            , {'website_order_date', binary() }
            , {'website_custid', binary() }
            , {'website_ip', binary() }
            , {'website_status', binary() }
            , {'website_invoice', binary() }
            , {'website_coupon', binary() }
            , {'website_extra', binary() }
            , {'website_hostname', binary() }
            , {'website_comment', binary() }
            , {'website_username', binary() }
            , {'website_server_status', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

