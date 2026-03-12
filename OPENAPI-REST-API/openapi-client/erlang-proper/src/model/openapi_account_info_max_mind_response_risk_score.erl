-module(openapi_account_info_max_mind_response_risk_score).

-include("openapi.hrl").

-export([openapi_account_info_max_mind_response_risk_score/0]).

-export([openapi_account_info_max_mind_response_risk_score/1]).

-export_type([openapi_account_info_max_mind_response_risk_score/0]).

-type openapi_account_info_max_mind_response_risk_score() ::
  [ 
  ].


openapi_account_info_max_mind_response_risk_score() ->
    openapi_account_info_max_mind_response_risk_score([]).

openapi_account_info_max_mind_response_risk_score(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

