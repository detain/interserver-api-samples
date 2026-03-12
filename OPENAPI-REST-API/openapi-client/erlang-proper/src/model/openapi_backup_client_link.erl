-module(openapi_backup_client_link).

-include("openapi.hrl").

-export([openapi_backup_client_link/0]).

-export([openapi_backup_client_link/1]).

-export_type([openapi_backup_client_link/0]).

-type openapi_backup_client_link() ::
  [ {'label', binary() }
  | {'link', binary() }
  | {'icon', binary() }
  | {'icon_text', binary() }
  | {'help_text', binary() }
  | {'other_attr', binary() }
  ].


openapi_backup_client_link() ->
    openapi_backup_client_link([]).

openapi_backup_client_link(Fields) ->
  Default = [ {'label', binary() }
            , {'link', binary() }
            , {'icon', binary() }
            , {'icon_text', binary() }
            , {'help_text', binary() }
            , {'other_attr', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

