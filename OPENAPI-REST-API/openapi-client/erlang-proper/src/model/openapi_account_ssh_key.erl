-module(openapi_account_ssh_key).

-include("openapi.hrl").

-export([openapi_account_ssh_key/0]).

-export([openapi_account_ssh_key/1]).

-export_type([openapi_account_ssh_key/0]).

-type openapi_account_ssh_key() ::
  [ {'ssh_key', binary() }
  ].


openapi_account_ssh_key() ->
    openapi_account_ssh_key([]).

openapi_account_ssh_key(Fields) ->
  Default = [ {'ssh_key', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

