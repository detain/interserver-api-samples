-module(openapi_websites_order_json_services).

-include("openapi.hrl").

-export([openapi_websites_order_json_services/0]).

-export([openapi_websites_order_json_services/1]).

-export_type([openapi_websites_order_json_services/0]).

-type openapi_websites_order_json_services() ::
  [ {'11447', binary() }
  ].


openapi_websites_order_json_services() ->
    openapi_websites_order_json_services([]).

openapi_websites_order_json_services(Fields) ->
  Default = [ {'11447', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

