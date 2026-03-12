-module(openapi_post_website_buy_ip_request).

-include("openapi.hrl").

-export([openapi_post_website_buy_ip_request/0]).

-export([openapi_post_website_buy_ip_request/1]).

-export_type([openapi_post_website_buy_ip_request/0]).

-type openapi_post_website_buy_ip_request() ::
  [ {'ips', map() }
  ].


openapi_post_website_buy_ip_request() ->
    openapi_post_website_buy_ip_request([]).

openapi_post_website_buy_ip_request(Fields) ->
  Default = [ {'ips', map() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

