-module(openapi_website_backups_inner).

-include("openapi.hrl").

-export([openapi_website_backups_inner/0]).

-export([openapi_website_backups_inner/1]).

-export_type([openapi_website_backups_inner/0]).

-type openapi_website_backups_inner() ::
  [ {'name', binary() }
  | {'size', integer() }
  ].


openapi_website_backups_inner() ->
    openapi_website_backups_inner([]).

openapi_website_backups_inner(Fields) ->
  Default = [ {'name', binary() }
            , {'size', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

