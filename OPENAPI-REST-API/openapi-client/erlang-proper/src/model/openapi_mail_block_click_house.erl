-module(openapi_mail_block_click_house).

-include("openapi.hrl").

-export([openapi_mail_block_click_house/0]).

-export([openapi_mail_block_click_house/1]).

-export_type([openapi_mail_block_click_house/0]).

-type openapi_mail_block_click_house() ::
  [ {'date', date() }
  | {'from', binary() }
  | {'messageId', binary() }
  | {'subject', binary() }
  | {'to', binary() }
  ].


openapi_mail_block_click_house() ->
    openapi_mail_block_click_house([]).

openapi_mail_block_click_house(Fields) ->
  Default = [ {'date', date() }
            , {'from', binary() }
            , {'messageId', binary() }
            , {'subject', binary() }
            , {'to', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

