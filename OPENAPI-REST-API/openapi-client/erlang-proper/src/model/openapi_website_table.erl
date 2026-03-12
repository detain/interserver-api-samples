-module(openapi_website_table).

-include("openapi.hrl").

-export([openapi_website_table/0]).

-export([openapi_website_table/1]).

-export_type([openapi_website_table/0]).

-type openapi_website_table() ::
  [ {'title', binary() }
  | {'rows', list(openapi_website_table_row:openapi_website_table_row()) }
  ].


openapi_website_table() ->
    openapi_website_table([]).

openapi_website_table(Fields) ->
  Default = [ {'title', binary() }
            , {'rows', list(openapi_website_table_row:openapi_website_table_row()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

