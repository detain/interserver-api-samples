-module(openapi_website_service_master).

-include("openapi.hrl").

-export([openapi_website_service_master/0]).

-export([openapi_website_service_master/1]).

-export_type([openapi_website_service_master/0]).

-type openapi_website_service_master() ::
  [ {'website_id', binary() }
  | {'website_name', binary() }
  | {'website_ip', binary() }
  | {'website_type', binary() }
  | {'website_available', binary() }
  | {'website_hdsize', binary() }
  | {'website_hdfree', binary() }
  | {'website_load', binary() }
  | {'website_last_update', binary() }
  | {'website_max_sites', binary() }
  | {'website_order', binary() }
  | {'website_partitions', binary() }
  | {'website_dns1', binary() }
  | {'website_dns2', binary() }
  ].


openapi_website_service_master() ->
    openapi_website_service_master([]).

openapi_website_service_master(Fields) ->
  Default = [ {'website_id', binary() }
            , {'website_name', binary() }
            , {'website_ip', binary() }
            , {'website_type', binary() }
            , {'website_available', binary() }
            , {'website_hdsize', binary() }
            , {'website_hdfree', binary() }
            , {'website_load', binary() }
            , {'website_last_update', binary() }
            , {'website_max_sites', binary() }
            , {'website_order', binary() }
            , {'website_partitions', binary() }
            , {'website_dns1', binary() }
            , {'website_dns2', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

