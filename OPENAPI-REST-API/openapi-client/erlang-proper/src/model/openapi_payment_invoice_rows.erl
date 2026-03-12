-module(openapi_payment_invoice_rows).

-include("openapi.hrl").

-export([openapi_payment_invoice_rows/0]).

-export_type([openapi_payment_invoice_rows/0]).

-type openapi_payment_invoice_rows() ::
  list(openapi_invoice_row:openapi_invoice_row()).

openapi_payment_invoice_rows() ->
  list(openapi_invoice_row:openapi_invoice_row()).

