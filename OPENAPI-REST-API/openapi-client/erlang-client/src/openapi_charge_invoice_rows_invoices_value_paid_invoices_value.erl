-module(openapi_charge_invoice_rows_invoices_value_paid_invoices_value).

-export([encode/1]).

-export_type([openapi_charge_invoice_rows_invoices_value_paid_invoices_value/0]).

-type openapi_charge_invoice_rows_invoices_value_paid_invoices_value() ::
    #{ 'invoices_id' => binary(),
       'invoices_description' => binary(),
       'invoices_amount' => integer(),
       'invoices_date' => binary(),
       'invoices_currency' => binary(),
       'currency_symbol' => binary(),
       'invoices_date_formatted' => binary(),
       'payment_type' => binary(),
       'refund_invoices' => maps:map()
     }.

encode(#{ 'invoices_id' := InvoicesId,
          'invoices_description' := InvoicesDescription,
          'invoices_amount' := InvoicesAmount,
          'invoices_date' := InvoicesDate,
          'invoices_currency' := InvoicesCurrency,
          'currency_symbol' := CurrencySymbol,
          'invoices_date_formatted' := InvoicesDateFormatted,
          'payment_type' := PaymentType,
          'refund_invoices' := RefundInvoices
        }) ->
    #{ 'invoices_id' => InvoicesId,
       'invoices_description' => InvoicesDescription,
       'invoices_amount' => InvoicesAmount,
       'invoices_date' => InvoicesDate,
       'invoices_currency' => InvoicesCurrency,
       'currency_symbol' => CurrencySymbol,
       'invoices_date_formatted' => InvoicesDateFormatted,
       'payment_type' => PaymentType,
       'refund_invoices' => RefundInvoices
     }.
