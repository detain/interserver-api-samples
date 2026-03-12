-module(openapi_quickserver_order_version).

-include("openapi.hrl").

-export([openapi_quickserver_order_version/0]).

-export([openapi_quickserver_order_version/1]).

-export_type([openapi_quickserver_order_version/0]).

-type openapi_quickserver_order_version() ::
  [ {'centosstream_8', openapi_quickserver_order_version_centosstream8:openapi_quickserver_order_version_centosstream8() }
  ].


openapi_quickserver_order_version() ->
    openapi_quickserver_order_version([]).

openapi_quickserver_order_version(Fields) ->
  Default = [ {'centosstream-8', openapi_quickserver_order_version_centosstream8:openapi_quickserver_order_version_centosstream8() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

