-module(openapi_mail_delist_request).

-include("openapi.hrl").

-export([openapi_mail_delist_request/0]).

-export([openapi_mail_delist_request/1]).

-export_type([openapi_mail_delist_request/0]).

-type openapi_mail_delist_request() ::
  [ {'unblock', binary() }
  ].


openapi_mail_delist_request() ->
    openapi_mail_delist_request([]).

openapi_mail_delist_request(Fields) ->
  Default = [ {'unblock', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

