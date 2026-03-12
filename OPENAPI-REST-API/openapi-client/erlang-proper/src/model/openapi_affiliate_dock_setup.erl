-module(openapi_affiliate_dock_setup).

-include("openapi.hrl").

-export([openapi_affiliate_dock_setup/0]).

-export([openapi_affiliate_dock_setup/1]).

-export_type([openapi_affiliate_dock_setup/0]).

-type openapi_affiliate_dock_setup() ::
  [ {'affiliate_dock_title', binary() }
  | {'affiliate_dock_description', binary() }
  | {'referrer_coupon', binary() }
  ].


openapi_affiliate_dock_setup() ->
    openapi_affiliate_dock_setup([]).

openapi_affiliate_dock_setup(Fields) ->
  Default = [ {'affiliate_dock_title', binary() }
            , {'affiliate_dock_description', binary() }
            , {'referrer_coupon', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

