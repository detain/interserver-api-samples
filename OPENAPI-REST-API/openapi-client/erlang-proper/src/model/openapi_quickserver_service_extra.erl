-module(openapi_quickserver_service_extra).

-include("openapi.hrl").

-export([openapi_quickserver_service_extra/0]).

-export([openapi_quickserver_service_extra/1]).

-export_type([openapi_quickserver_service_extra/0]).

-type openapi_quickserver_service_extra() ::
  [ {'platform', binary() }
  ].


openapi_quickserver_service_extra() ->
    openapi_quickserver_service_extra([]).

openapi_quickserver_service_extra(Fields) ->
  Default = [ {'platform', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

