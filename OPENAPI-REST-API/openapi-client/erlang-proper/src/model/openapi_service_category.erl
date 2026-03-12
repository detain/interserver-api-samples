-module(openapi_service_category).

-include("openapi.hrl").

-export([openapi_service_category/0]).

-export([openapi_service_category/1]).

-export_type([openapi_service_category/0]).

-type openapi_service_category() ::
  [ {'category_id', integer() }
  | {'category_name', binary() }
  | {'category_tag', binary() }
  | {'category_module', binary() }
  ].


openapi_service_category() ->
    openapi_service_category([]).

openapi_service_category(Fields) ->
  Default = [ {'category_id', integer() }
            , {'category_name', binary() }
            , {'category_tag', binary() }
            , {'category_module', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

