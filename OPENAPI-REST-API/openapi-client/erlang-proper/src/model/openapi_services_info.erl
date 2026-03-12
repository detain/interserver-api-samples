-module(openapi_services_info).

-include("openapi.hrl").

-export([openapi_services_info/0]).

-export([openapi_services_info/1]).

-export_type([openapi_services_info/0]).

-type openapi_services_info() ::
  [ {'modules', openapi_modules:openapi_modules() }
  | {'services', openapi_services:openapi_services() }
  | {'serviceTypes', openapi_service_types:openapi_service_types() }
  | {'serviceCategories', openapi_service_categories:openapi_service_categories() }
  ].


openapi_services_info() ->
    openapi_services_info([]).

openapi_services_info(Fields) ->
  Default = [ {'modules', openapi_modules:openapi_modules() }
            , {'services', openapi_services:openapi_services() }
            , {'serviceTypes', openapi_service_types:openapi_service_types() }
            , {'serviceCategories', openapi_service_categories:openapi_service_categories() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

