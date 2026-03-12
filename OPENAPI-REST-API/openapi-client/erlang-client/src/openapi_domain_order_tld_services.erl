-module(openapi_domain_order_tld_services).

-export([encode/1]).

-export_type([openapi_domain_order_tld_services/0]).

-type openapi_domain_order_tld_services() ::
    #{ '_asia' => integer(),
       '_be' => integer(),
       '_biz' => integer(),
       '_ca' => integer()
     }.

encode(#{ '_asia' := Asia,
          '_be' := Be,
          '_biz' := Biz,
          '_ca' := Ca
        }) ->
    #{ '.asia' => Asia,
       '.be' => Be,
       '.biz' => Biz,
       '.ca' => Ca
     }.
