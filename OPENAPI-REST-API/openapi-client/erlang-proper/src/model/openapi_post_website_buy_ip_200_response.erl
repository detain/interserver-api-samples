-module(openapi_post_website_buy_ip_200_response).

-include("openapi.hrl").

-export([openapi_post_website_buy_ip_200_response/0]).

-export([openapi_post_website_buy_ip_200_response/1]).

-export_type([openapi_post_website_buy_ip_200_response/0]).

-type openapi_post_website_buy_ip_200_response() ::
  [ {'message', binary() }
  | {'success', boolean() }
  ].


openapi_post_website_buy_ip_200_response() ->
    openapi_post_website_buy_ip_200_response([]).

openapi_post_website_buy_ip_200_response(Fields) ->
  Default = [ {'message', binary() }
            , {'success', boolean() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

