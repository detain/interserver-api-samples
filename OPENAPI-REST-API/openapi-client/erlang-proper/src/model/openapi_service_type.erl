-module(openapi_service_type).

-include("openapi.hrl").

-export([openapi_service_type/0]).

-export([openapi_service_type/1]).

-export_type([openapi_service_type/0]).

-type openapi_service_type() ::
  [ {'st_id', integer() }
  | {'st_name', binary() }
  | {'st_category', integer() }
  | {'st_module', binary() }
  ].


openapi_service_type() ->
    openapi_service_type([]).

openapi_service_type(Fields) ->
  Default = [ {'st_id', integer() }
            , {'st_name', binary() }
            , {'st_category', integer() }
            , {'st_module', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

