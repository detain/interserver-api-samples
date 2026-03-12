-module(openapi_invoice).

-include("openapi.hrl").

-export([openapi_invoice/0]).

-export([openapi_invoice/1]).

-export_type([openapi_invoice/0]).

-type openapi_invoice() ::
  [ {'id', integer() }
  ].


openapi_invoice() ->
    openapi_invoice([]).

openapi_invoice(Fields) ->
  Default = [ {'id', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

