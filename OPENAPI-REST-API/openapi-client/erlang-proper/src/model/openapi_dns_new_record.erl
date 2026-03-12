-module(openapi_dns_new_record).

-include("openapi.hrl").

-export([openapi_dns_new_record/0]).

-export([openapi_dns_new_record/1]).

-export_type([openapi_dns_new_record/0]).

-type openapi_dns_new_record() ::
  [ {'name', binary() }
  | {'type', openapi_dns_record_type:openapi_dns_record_type() }
  | {'content', binary() }
  | {'ttl', integer() }
  | {'prio', integer() }
  ].


openapi_dns_new_record() ->
    openapi_dns_new_record([]).

openapi_dns_new_record(Fields) ->
  Default = [ {'name', binary() }
            , {'type', openapi_dns_record_type:openapi_dns_record_type() }
            , {'content', binary() }
            , {'ttl', integer() }
            , {'prio', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

