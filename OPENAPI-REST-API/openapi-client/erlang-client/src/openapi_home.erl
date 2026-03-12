-module(openapi_home).

-export([encode/1]).

-export_type([openapi_home/0]).

-type openapi_home() ::
    #{ 'last_login_ip' := binary(),
       'last_login' := binary(),
       'currency' := binary(),
       'amount' := binary(),
       'invoice_list' := integer(),
       'balance' := binary(),
       'full_name' := binary(),
       'email' := binary(),
       'tickets' := list(),
       'ticketStatus' := openapi_home_ticket_status:openapi_home_ticket_status(),
       'ticketStatusView' := openapi_home_ticket_status_view:openapi_home_ticket_status_view(),
       'details' := openapi_home_details:openapi_home_details(),
       'services' := openapi_home_services:openapi_home_services(),
       'AFFILIATE_AMOUNT' := binary()
     }.

encode(#{ 'last_login_ip' := LastLoginIp,
          'last_login' := LastLogin,
          'currency' := Currency,
          'amount' := Amount,
          'invoice_list' := InvoiceList,
          'balance' := Balance,
          'full_name' := FullName,
          'email' := Email,
          'tickets' := Tickets,
          'ticketStatus' := TicketStatus,
          'ticketStatusView' := TicketStatusView,
          'details' := Details,
          'services' := Services,
          'AFFILIATE_AMOUNT' := AFFILIATEAMOUNT
        }) ->
    #{ 'last_login_ip' => LastLoginIp,
       'last_login' => LastLogin,
       'currency' => Currency,
       'amount' => Amount,
       'invoice_list' => InvoiceList,
       'balance' => Balance,
       'full_name' => FullName,
       'email' => Email,
       'tickets' => Tickets,
       'ticketStatus' => TicketStatus,
       'ticketStatusView' => TicketStatusView,
       'details' => Details,
       'services' => Services,
       'AFFILIATE_AMOUNT' => AFFILIATEAMOUNT
     }.
