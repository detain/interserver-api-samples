-module(openapi_vps_templates_list).

-include("openapi.hrl").

-export([openapi_vps_templates_list/0]).

-export([openapi_vps_templates_list/1]).

-export_type([openapi_vps_templates_list/0]).

-type openapi_vps_templates_list() ::
  [ {'templates', list(openapi_vps_template_row:openapi_vps_template_row()) }
  ].


openapi_vps_templates_list() ->
    openapi_vps_templates_list([]).

openapi_vps_templates_list(Fields) ->
  Default = [ {'templates', list(openapi_vps_template_row:openapi_vps_template_row()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

