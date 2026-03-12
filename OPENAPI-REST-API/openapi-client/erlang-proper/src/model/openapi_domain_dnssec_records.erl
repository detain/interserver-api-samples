-module(openapi_domain_dnssec_records).

-include("openapi.hrl").

-export([openapi_domain_dnssec_records/0]).

-export_type([openapi_domain_dnssec_records/0]).

-type openapi_domain_dnssec_records() ::
  list(openapi_domain_dnssec_records_inner:openapi_domain_dnssec_records_inner()).

openapi_domain_dnssec_records() ->
  list(openapi_domain_dnssec_records_inner:openapi_domain_dnssec_records_inner()).

