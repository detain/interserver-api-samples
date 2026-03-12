-module(openapi_mail_block_rspamd).

-include("openapi.hrl").

-export([openapi_mail_block_rspamd/0]).

-export([openapi_mail_block_rspamd/1]).

-export_type([openapi_mail_block_rspamd/0]).

-type openapi_mail_block_rspamd() ::
  [ {'from', binary() }
  | {'subject', binary() }
  ].


openapi_mail_block_rspamd() ->
    openapi_mail_block_rspamd([]).

openapi_mail_block_rspamd(Fields) ->
  Default = [ {'from', binary() }
            , {'subject', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

