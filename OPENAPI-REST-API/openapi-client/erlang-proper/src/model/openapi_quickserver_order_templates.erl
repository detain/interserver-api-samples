-module(openapi_quickserver_order_templates).

-include("openapi.hrl").

-export([openapi_quickserver_order_templates/0]).

-export([openapi_quickserver_order_templates/1]).

-export_type([openapi_quickserver_order_templates/0]).

-type openapi_quickserver_order_templates() ::
  [ {'Ubuntu', openapi_quickserver_order_templates_ubuntu64:openapi_quickserver_order_templates_ubuntu64() }
  ].


openapi_quickserver_order_templates() ->
    openapi_quickserver_order_templates([]).

openapi_quickserver_order_templates(Fields) ->
  Default = [ {'Ubuntu', openapi_quickserver_order_templates_ubuntu64:openapi_quickserver_order_templates_ubuntu64() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

