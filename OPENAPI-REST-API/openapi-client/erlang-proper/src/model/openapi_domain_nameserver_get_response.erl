-module(openapi_domain_nameserver_get_response).

-include("openapi.hrl").

-export([openapi_domain_nameserver_get_response/0]).

-export_type([openapi_domain_nameserver_get_response/0]).

-type openapi_domain_nameserver_get_response() ::
  list(openapi_domain_nameserver_get_response_inner:openapi_domain_nameserver_get_response_inner()).

openapi_domain_nameserver_get_response() ->
  list(openapi_domain_nameserver_get_response_inner:openapi_domain_nameserver_get_response_inner()).

