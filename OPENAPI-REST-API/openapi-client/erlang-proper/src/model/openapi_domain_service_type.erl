-module(openapi_domain_service_type).

-include("openapi.hrl").

-export([openapi_domain_service_type/0]).

-export([openapi_domain_service_type/1]).

-export_type([openapi_domain_service_type/0]).

-type openapi_domain_service_type() ::
  [ {'services_id', binary() }
  | {'services_name', binary() }
  | {'services_cost', binary() }
  | {'services_category', binary() }
  | {'services_buyable', binary() }
  | {'services_type', binary() }
  | {'services_field1', binary() }
  | {'services_field2', binary() }
  | {'services_module', binary() }
  ].


openapi_domain_service_type() ->
    openapi_domain_service_type([]).

openapi_domain_service_type(Fields) ->
  Default = [ {'services_id', binary() }
            , {'services_name', binary() }
            , {'services_cost', binary() }
            , {'services_category', binary() }
            , {'services_buyable', binary() }
            , {'services_type', binary() }
            , {'services_field1', binary() }
            , {'services_field2', binary() }
            , {'services_module', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

