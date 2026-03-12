-module(openapi_website_backups).

-include("openapi.hrl").

-export([openapi_website_backups/0]).

-export_type([openapi_website_backups/0]).

-type openapi_website_backups() ::
  list(openapi_website_backups_inner:openapi_website_backups_inner()).

openapi_website_backups() ->
  list(openapi_website_backups_inner:openapi_website_backups_inner()).

