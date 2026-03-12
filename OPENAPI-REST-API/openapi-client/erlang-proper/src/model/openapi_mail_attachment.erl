-module(openapi_mail_attachment).

-include("openapi.hrl").

-export([openapi_mail_attachment/0]).

-export([openapi_mail_attachment/1]).

-export_type([openapi_mail_attachment/0]).

-type openapi_mail_attachment() ::
  [ {'filename', binary() }
  | {'data', binary() }
  ].


openapi_mail_attachment() ->
    openapi_mail_attachment([]).

openapi_mail_attachment(Fields) ->
  Default = [ {'filename', binary() }
            , {'data', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

