-module(openapi_account_info_data_fraudrecord).

-include("openapi.hrl").

-export([openapi_account_info_data_fraudrecord/0]).

-export([openapi_account_info_data_fraudrecord/1]).

-export_type([openapi_account_info_data_fraudrecord/0]).

-type openapi_account_info_data_fraudrecord() ::
  [ {'score', binary() }
  | {'count', binary() }
  | {'reliability', binary() }
  | {'code', binary() }
  ].


openapi_account_info_data_fraudrecord() ->
    openapi_account_info_data_fraudrecord([]).

openapi_account_info_data_fraudrecord(Fields) ->
  Default = [ {'score', binary() }
            , {'count', binary() }
            , {'reliability', binary() }
            , {'code', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

