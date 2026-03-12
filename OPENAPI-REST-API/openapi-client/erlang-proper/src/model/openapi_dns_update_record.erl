-module(openapi_dns_update_record).

-include("openapi.hrl").

-export([openapi_dns_update_record/0]).

-export([openapi_dns_update_record/1]).

-export_type([openapi_dns_update_record/0]).

-type openapi_dns_update_record() ::
  [ {'name', binary() }
  | {'type', openapi_dns_record_type:openapi_dns_record_type() }
  | {'content', binary() }
  | {'ttl', binary() }
  | {'prio', binary() }
  | {'disabled', binary() }
  | {'ordername', binary() }
  | {'auth', binary() }
  ].


openapi_dns_update_record() ->
    openapi_dns_update_record([]).

openapi_dns_update_record(Fields) ->
  Default = [ {'name', binary() }
            , {'type', openapi_dns_record_type:openapi_dns_record_type() }
            , {'content', binary() }
            , {'ttl', binary() }
            , {'prio', binary() }
            , {'disabled', binary() }
            , {'ordername', binary() }
            , {'auth', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

