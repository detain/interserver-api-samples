-module(openapi_login_service_counts).

-include("openapi.hrl").

-export([openapi_login_service_counts/0]).

-export([openapi_login_service_counts/1]).

-export_type([openapi_login_service_counts/0]).

-type openapi_login_service_counts() ::
  [ {'vps', integer() }
  | {'websites', integer() }
  | {'servers', integer() }
  ].


openapi_login_service_counts() ->
    openapi_login_service_counts([]).

openapi_login_service_counts(Fields) ->
  Default = [ {'vps', integer() }
            , {'websites', integer() }
            , {'servers', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

