-module(openapi_ticket_post_details).

-include("openapi.hrl").

-export([openapi_ticket_post_details/0]).

-export_type([openapi_ticket_post_details/0]).

-type openapi_ticket_post_details() ::
  list(openapi_ticket_post_details_inner:openapi_ticket_post_details_inner()).

openapi_ticket_post_details() ->
  list(openapi_ticket_post_details_inner:openapi_ticket_post_details_inner()).

