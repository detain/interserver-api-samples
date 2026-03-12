-module(openapi_affiliate_traffic_row).

-include("openapi.hrl").

-export([openapi_affiliate_traffic_row/0]).

-export([openapi_affiliate_traffic_row/1]).

-export_type([openapi_affiliate_traffic_row/0]).

-type openapi_affiliate_traffic_row() ::
  [ {'traffic_id', binary() }
  | {'traffic_ip', binary() }
  | {'traffic_url', binary() }
  | {'traffic_affiliate', binary() }
  | {'traffic_referrer', binary() }
  | {'traffic_timestamp', binary() }
  ].


openapi_affiliate_traffic_row() ->
    openapi_affiliate_traffic_row([]).

openapi_affiliate_traffic_row(Fields) ->
  Default = [ {'traffic_id', binary() }
            , {'traffic_ip', binary() }
            , {'traffic_url', binary() }
            , {'traffic_affiliate', binary() }
            , {'traffic_referrer', binary() }
            , {'traffic_timestamp', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

