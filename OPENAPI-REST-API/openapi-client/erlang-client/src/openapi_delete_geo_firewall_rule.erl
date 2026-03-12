-module(openapi_delete_geo_firewall_rule).

-export([encode/1]).

-export_type([openapi_delete_geo_firewall_rule/0]).

-type openapi_delete_geo_firewall_rule() ::
    #{ 'rule_id' := integer()
     }.

encode(#{ 'rule_id' := RuleId
        }) ->
    #{ 'rule_id' => RuleId
     }.
