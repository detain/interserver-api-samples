-module(openapi_quickserver_order_version_centosstream8).

-include("openapi.hrl").

-export([openapi_quickserver_order_version_centosstream8/0]).

-export([openapi_quickserver_order_version_centosstream8/1]).

-export_type([openapi_quickserver_order_version_centosstream8/0]).

-type openapi_quickserver_order_version_centosstream8() ::
  [ {'centosstream_8', binary() }
  ].


openapi_quickserver_order_version_centosstream8() ->
    openapi_quickserver_order_version_centosstream8([]).

openapi_quickserver_order_version_centosstream8(Fields) ->
  Default = [ {'centosstream-8', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

