-module(openapi_quickserver_order_distro_sel).

-include("openapi.hrl").

-export([openapi_quickserver_order_distro_sel/0]).

-export([openapi_quickserver_order_distro_sel/1]).

-export_type([openapi_quickserver_order_distro_sel/0]).

-type openapi_quickserver_order_distro_sel() ::
  [ {'Ubuntu', openapi_quickserver_order_distro_sel_ubuntu:openapi_quickserver_order_distro_sel_ubuntu() }
  ].


openapi_quickserver_order_distro_sel() ->
    openapi_quickserver_order_distro_sel([]).

openapi_quickserver_order_distro_sel(Fields) ->
  Default = [ {'Ubuntu', openapi_quickserver_order_distro_sel_ubuntu:openapi_quickserver_order_distro_sel_ubuntu() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

