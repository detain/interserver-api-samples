-module(openapi_websites_order_packges).

-include("openapi.hrl").

-export([openapi_websites_order_packges/0]).

-export([openapi_websites_order_packges/1]).

-export_type([openapi_websites_order_packges/0]).

-type openapi_websites_order_packges() ::
  [ {'11440', openapi_websites_order_packages_info:openapi_websites_order_packages_info() }
  ].


openapi_websites_order_packges() ->
    openapi_websites_order_packges([]).

openapi_websites_order_packges(Fields) ->
  Default = [ {'11440', openapi_websites_order_packages_info:openapi_websites_order_packages_info() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

