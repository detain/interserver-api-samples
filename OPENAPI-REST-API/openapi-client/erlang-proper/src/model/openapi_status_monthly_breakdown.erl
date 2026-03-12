-module(openapi_status_monthly_breakdown).

-include("openapi.hrl").

-export([openapi_status_monthly_breakdown/0]).

-export([openapi_status_monthly_breakdown/1]).

-export_type([openapi_status_monthly_breakdown/0]).

-type openapi_status_monthly_breakdown() ::
  [ {'default', openapi_monthly_counts:openapi_monthly_counts() }
  | {'failed', openapi_monthly_counts:openapi_monthly_counts() }
  | {'rejected', openapi_monthly_counts:openapi_monthly_counts() }
  | {'pending', openapi_monthly_counts:openapi_monthly_counts() }
  | {'locked', openapi_monthly_counts:openapi_monthly_counts() }
  | {'paid', openapi_monthly_counts:openapi_monthly_counts() }
  ].


openapi_status_monthly_breakdown() ->
    openapi_status_monthly_breakdown([]).

openapi_status_monthly_breakdown(Fields) ->
  Default = [ {'default', openapi_monthly_counts:openapi_monthly_counts() }
            , {'failed', openapi_monthly_counts:openapi_monthly_counts() }
            , {'rejected', openapi_monthly_counts:openapi_monthly_counts() }
            , {'pending', openapi_monthly_counts:openapi_monthly_counts() }
            , {'locked', openapi_monthly_counts:openapi_monthly_counts() }
            , {'paid', openapi_monthly_counts:openapi_monthly_counts() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

