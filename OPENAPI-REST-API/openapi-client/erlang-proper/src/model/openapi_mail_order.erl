-module(openapi_mail_order).

-include("openapi.hrl").

-export([openapi_mail_order/0]).

-export([openapi_mail_order/1]).

-export_type([openapi_mail_order/0]).

-type openapi_mail_order() ::
  [ {'id', integer() }
  | {'status', binary() }
  | {'username', binary() }
  | {'comment', binary() }
  ].


openapi_mail_order() ->
    openapi_mail_order([]).

openapi_mail_order(Fields) ->
  Default = [ {'id', integer() }
            , {'status', binary() }
            , {'username', binary() }
            , {'comment', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

