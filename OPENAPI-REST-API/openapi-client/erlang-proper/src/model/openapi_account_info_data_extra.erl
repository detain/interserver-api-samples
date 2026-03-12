-module(openapi_account_info_data_extra).

-include("openapi.hrl").

-export([openapi_account_info_data_extra/0]).

-export([openapi_account_info_data_extra/1]).

-export_type([openapi_account_info_data_extra/0]).

-type openapi_account_info_data_extra() ::
  [ {'private_whois', binary() }
  ].


openapi_account_info_data_extra() ->
    openapi_account_info_data_extra([]).

openapi_account_info_data_extra(Fields) ->
  Default = [ {'private_whois', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

