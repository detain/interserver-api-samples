-module(openapi_dns_list_item).

-include("openapi.hrl").

-export([openapi_dns_list_item/0]).

-export([openapi_dns_list_item/1]).

-export_type([openapi_dns_list_item/0]).

-type openapi_dns_list_item() ::
  [ {'id', integer() }
  | {'name', binary() }
  | {'content', binary() }
  ].


openapi_dns_list_item() ->
    openapi_dns_list_item([]).

openapi_dns_list_item(Fields) ->
  Default = [ {'id', integer() }
            , {'name', binary() }
            , {'content', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

