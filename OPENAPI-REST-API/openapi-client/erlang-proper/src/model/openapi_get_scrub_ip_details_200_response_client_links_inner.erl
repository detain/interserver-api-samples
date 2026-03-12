-module(openapi_get_scrub_ip_details_200_response_client_links_inner).

-include("openapi.hrl").

-export([openapi_get_scrub_ip_details_200_response_client_links_inner/0]).

-export([openapi_get_scrub_ip_details_200_response_client_links_inner/1]).

-export_type([openapi_get_scrub_ip_details_200_response_client_links_inner/0]).

-type openapi_get_scrub_ip_details_200_response_client_links_inner() ::
  [ {'label', binary() }
  | {'link', binary() }
  | {'icon', binary() }
  | {'icon_text', binary() }
  | {'help_text', binary() }
  | {'other_attr', binary() }
  ].


openapi_get_scrub_ip_details_200_response_client_links_inner() ->
    openapi_get_scrub_ip_details_200_response_client_links_inner([]).

openapi_get_scrub_ip_details_200_response_client_links_inner(Fields) ->
  Default = [ {'label', binary() }
            , {'link', binary() }
            , {'icon', binary() }
            , {'icon_text', binary() }
            , {'help_text', binary() }
            , {'other_attr', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

