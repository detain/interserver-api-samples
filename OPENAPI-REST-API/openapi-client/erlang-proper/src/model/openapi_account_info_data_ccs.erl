-module(openapi_account_info_data_ccs).

-include("openapi.hrl").

-export([openapi_account_info_data_ccs/0]).

-export([openapi_account_info_data_ccs/1]).

-export_type([openapi_account_info_data_ccs/0]).

-type openapi_account_info_data_ccs() ::
  [ 
  ].


openapi_account_info_data_ccs() ->
    openapi_account_info_data_ccs([]).

openapi_account_info_data_ccs(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

