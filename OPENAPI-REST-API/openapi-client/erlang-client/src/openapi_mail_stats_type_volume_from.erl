-module(openapi_mail_stats_type_volume_from).

-export([encode/1]).

-export_type([openapi_mail_stats_type_volume_from/0]).

-type openapi_mail_stats_type_volume_from() ::
    #{ 'billingsomedomain_com' => integer(),
       'salessomedomain_com' => integer()
     }.

encode(#{ 'billingsomedomain_com' := BillingsomedomainCom,
          'salessomedomain_com' := SalessomedomainCom
        }) ->
    #{ 'billing@somedomain.com' => BillingsomedomainCom,
       'sales@somedomain.com' => SalessomedomainCom
     }.
