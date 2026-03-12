-module(openapi_quickserver_order_distro_sel_ubuntu).

-include("openapi.hrl").

-export([openapi_quickserver_order_distro_sel_ubuntu/0]).

-export([openapi_quickserver_order_distro_sel_ubuntu/1]).

-export_type([openapi_quickserver_order_distro_sel_ubuntu/0]).

-type openapi_quickserver_order_distro_sel_ubuntu() ::
  [ {'Ubuntu', binary() }
  ].


openapi_quickserver_order_distro_sel_ubuntu() ->
    openapi_quickserver_order_distro_sel_ubuntu([]).

openapi_quickserver_order_distro_sel_ubuntu(Fields) ->
  Default = [ {'Ubuntu', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

