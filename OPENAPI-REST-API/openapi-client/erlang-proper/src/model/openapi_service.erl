-module(openapi_service).

-include("openapi.hrl").

-export([openapi_service/0]).

-export([openapi_service/1]).

-export_type([openapi_service/0]).

-type openapi_service() ::
  [ {'services_id', integer() }
  | {'services_name', binary() }
  | {'services_cost', integer() }
  | {'services_currency', binary() }
  | {'services_category', integer() }
  | {'services_buyable', boolean() }
  | {'services_type', integer() }
  | {'services_field1', binary() }
  | {'services_field2', binary() }
  | {'services_module', binary() }
  ].


openapi_service() ->
    openapi_service([]).

openapi_service(Fields) ->
  Default = [ {'services_id', integer() }
            , {'services_name', binary() }
            , {'services_cost', integer() }
            , {'services_currency', binary() }
            , {'services_category', integer() }
            , {'services_buyable', boolean() }
            , {'services_type', integer() }
            , {'services_field1', binary() }
            , {'services_field2', binary() }
            , {'services_module', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

