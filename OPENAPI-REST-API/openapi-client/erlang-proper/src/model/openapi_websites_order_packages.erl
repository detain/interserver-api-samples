-module(openapi_websites_order_packages).

-include("openapi.hrl").

-export([openapi_websites_order_packages/0]).

-export([openapi_websites_order_packages/1]).

-export_type([openapi_websites_order_packages/0]).

-type openapi_websites_order_packages() ::
  [ {'11447', binary() }
  ].


openapi_websites_order_packages() ->
    openapi_websites_order_packages([]).

openapi_websites_order_packages(Fields) ->
  Default = [ {'11447', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

