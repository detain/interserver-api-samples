-module(openapi_invoice_row).

-include("openapi.hrl").

-export([openapi_invoice_row/0]).

-export_type([openapi_invoice_row/0]).

-type openapi_invoice_row() ::
  list(binary()).

openapi_invoice_row() ->
  list(binary()).

