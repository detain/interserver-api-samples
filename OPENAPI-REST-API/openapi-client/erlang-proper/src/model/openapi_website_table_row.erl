-module(openapi_website_table_row).

-include("openapi.hrl").

-export([openapi_website_table_row/0]).

-export([openapi_website_table_row/1]).

-export_type([openapi_website_table_row/0]).

-type openapi_website_table_row() ::
  [ {'desc', binary() }
  | {'value', binary() }
  ].


openapi_website_table_row() ->
    openapi_website_table_row([]).

openapi_website_table_row(Fields) ->
  Default = [ {'desc', binary() }
            , {'value', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

