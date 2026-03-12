-module(openapi_domain_order_services10001).

-include("openapi.hrl").

-export([openapi_domain_order_services10001/0]).

-export([openapi_domain_order_services10001/1]).

-export_type([openapi_domain_order_services10001/0]).

-type openapi_domain_order_services10001() ::
  [ {'services_id', binary() }
  | {'services_name', binary() }
  | {'services_cost', binary() }
  | {'services_currency', binary() }
  | {'services_category', binary() }
  | {'services_buyable', binary() }
  | {'services_type', binary() }
  | {'services_field1', binary() }
  | {'services_field2', binary() }
  | {'services_module', binary() }
  | {'services_hidden', binary() }
  ].


openapi_domain_order_services10001() ->
    openapi_domain_order_services10001([]).

openapi_domain_order_services10001(Fields) ->
  Default = [ {'services_id', binary() }
            , {'services_name', binary() }
            , {'services_cost', binary() }
            , {'services_currency', binary() }
            , {'services_category', binary() }
            , {'services_buyable', binary() }
            , {'services_type', binary() }
            , {'services_field1', binary() }
            , {'services_field2', binary() }
            , {'services_module', binary() }
            , {'services_hidden', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

