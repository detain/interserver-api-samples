-module(openapi_affiliate_banner_row).

-include("openapi.hrl").

-export([openapi_affiliate_banner_row/0]).

-export([openapi_affiliate_banner_row/1]).

-export_type([openapi_affiliate_banner_row/0]).

-type openapi_affiliate_banner_row() ::
  [ {'image', binary() }
  | {'width', binary() }
  | {'height', binary() }
  ].


openapi_affiliate_banner_row() ->
    openapi_affiliate_banner_row([]).

openapi_affiliate_banner_row(Fields) ->
  Default = [ {'image', binary() }
            , {'width', binary() }
            , {'height', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

