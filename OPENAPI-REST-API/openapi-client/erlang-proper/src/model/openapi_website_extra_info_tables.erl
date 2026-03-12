-module(openapi_website_extra_info_tables).

-include("openapi.hrl").

-export([openapi_website_extra_info_tables/0]).

-export([openapi_website_extra_info_tables/1]).

-export_type([openapi_website_extra_info_tables/0]).

-type openapi_website_extra_info_tables() ::
  [ {'links', openapi_website_table:openapi_website_table() }
  | {'preview', openapi_website_table:openapi_website_table() }
  | {'dns', openapi_website_table:openapi_website_table() }
  ].


openapi_website_extra_info_tables() ->
    openapi_website_extra_info_tables([]).

openapi_website_extra_info_tables(Fields) ->
  Default = [ {'links', openapi_website_table:openapi_website_table() }
            , {'preview', openapi_website_table:openapi_website_table() }
            , {'dns', openapi_website_table:openapi_website_table() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

