-module(openapi_mail_blocks).

-include("openapi.hrl").

-export([openapi_mail_blocks/0]).

-export([openapi_mail_blocks/1]).

-export_type([openapi_mail_blocks/0]).

-type openapi_mail_blocks() ::
  [ {'local', list(openapi_mail_block_click_house:openapi_mail_block_click_house()) }
  | {'mbtrap', list(openapi_mail_block_click_house:openapi_mail_block_click_house()) }
  | {'subject', list(openapi_mail_block_rspamd:openapi_mail_block_rspamd()) }
  ].


openapi_mail_blocks() ->
    openapi_mail_blocks([]).

openapi_mail_blocks(Fields) ->
  Default = [ {'local', list(openapi_mail_block_click_house:openapi_mail_block_click_house()) }
            , {'mbtrap', list(openapi_mail_block_click_house:openapi_mail_block_click_house()) }
            , {'subject', list(openapi_mail_block_rspamd:openapi_mail_block_rspamd()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

