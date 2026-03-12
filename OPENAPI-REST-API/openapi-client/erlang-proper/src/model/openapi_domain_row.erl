-module(openapi_domain_row).

-include("openapi.hrl").

-export([openapi_domain_row/0]).

-export([openapi_domain_row/1]).

-export_type([openapi_domain_row/0]).

-type openapi_domain_row() ::
  [ {'domain_id', binary() }
  | {'domain_hostname', binary() }
  | {'domain_expire_date', binary() }
  | {'cost', binary() }
  | {'domain_status', binary() }
  ].


openapi_domain_row() ->
    openapi_domain_row([]).

openapi_domain_row(Fields) ->
  Default = [ {'domain_id', binary() }
            , {'domain_hostname', binary() }
            , {'domain_expire_date', binary() }
            , {'cost', binary() }
            , {'domain_status', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

