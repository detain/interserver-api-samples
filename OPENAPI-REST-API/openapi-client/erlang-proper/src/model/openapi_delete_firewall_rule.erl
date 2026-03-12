-module(openapi_delete_firewall_rule).

-include("openapi.hrl").

-export([openapi_delete_firewall_rule/0]).

-export([openapi_delete_firewall_rule/1]).

-export_type([openapi_delete_firewall_rule/0]).

-type openapi_delete_firewall_rule() ::
  [ {'rule_id', integer() }
  ].


openapi_delete_firewall_rule() ->
    openapi_delete_firewall_rule([]).

openapi_delete_firewall_rule(Fields) ->
  Default = [ {'rule_id', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

