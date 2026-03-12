-module(openapi_dns_record).

-include("openapi.hrl").

-export([openapi_dns_record/0]).

-export([openapi_dns_record/1]).

-export_type([openapi_dns_record/0]).

-type openapi_dns_record() ::
  [ {'id', binary() }
  | {'domain_id', binary() }
  | {'name', binary() }
  | {'type', openapi_dns_record_type:openapi_dns_record_type() }
  | {'content', binary() }
  | {'ttl', binary() }
  | {'prio', binary() }
  | {'disabled', binary() }
  | {'ordername', binary() }
  | {'auth', binary() }
  ].


openapi_dns_record() ->
    openapi_dns_record([]).

openapi_dns_record(Fields) ->
  Default = [ {'id', binary() }
            , {'domain_id', binary() }
            , {'name', binary() }
            , {'type', openapi_dns_record_type:openapi_dns_record_type() }
            , {'content', binary() }
            , {'ttl', binary() }
            , {'prio', binary() }
            , {'disabled', binary() }
            , {'ordername', binary() }
            , {'auth', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

