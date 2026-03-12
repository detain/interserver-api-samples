-module(openapi_account_info_data_cc).

-include("openapi.hrl").

-export([openapi_account_info_data_cc/0]).

-export([openapi_account_info_data_cc/1]).

-export_type([openapi_account_info_data_cc/0]).

-type openapi_account_info_data_cc() ::
  [ {'cc', binary() }
  | {'cc_exp', binary() }
  | {'name', binary() }
  | {'address', binary() }
  | {'city', binary() }
  | {'state', binary() }
  | {'zip', binary() }
  | {'country', binary() }
  | {'maxmind_riskscore', binary() }
  | {'maxmind', openapi_account_info_max_mind_response:openapi_account_info_max_mind_response() }
  | {'verified', boolean() }
  ].


openapi_account_info_data_cc() ->
    openapi_account_info_data_cc([]).

openapi_account_info_data_cc(Fields) ->
  Default = [ {'cc', binary() }
            , {'cc_exp', binary() }
            , {'name', binary() }
            , {'address', binary() }
            , {'city', binary() }
            , {'state', binary() }
            , {'zip', binary() }
            , {'country', binary() }
            , {'maxmind_riskscore', binary() }
            , {'maxmind', openapi_account_info_max_mind_response:openapi_account_info_max_mind_response() }
            , {'verified', boolean() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

