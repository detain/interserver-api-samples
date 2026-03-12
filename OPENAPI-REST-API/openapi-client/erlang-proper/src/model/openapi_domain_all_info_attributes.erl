-module(openapi_domain_all_info_attributes).

-include("openapi.hrl").

-export([openapi_domain_all_info_attributes/0]).

-export([openapi_domain_all_info_attributes/1]).

-export_type([openapi_domain_all_info_attributes/0]).

-type openapi_domain_all_info_attributes() ::
  [ {'contact_set', openapi_domain_all_info_attributes_contact_set:openapi_domain_all_info_attributes_contact_set() }
  | {'registry_createdate', binary() }
  | {'registry_expiredate', binary() }
  | {'tld_data', binary() }
  | {'let_expire', binary() }
  | {'auto_renew', binary() }
  | {'sponsoring_rsp', binary() }
  | {'gdpr_consent_status', binary() }
  | {'nameserver_list', list(openapi_domain_name_server:openapi_domain_name_server()) }
  | {'registry_updatedate', binary() }
  | {'affiliate_id', binary() }
  | {'expiredate', binary() }
  ].


openapi_domain_all_info_attributes() ->
    openapi_domain_all_info_attributes([]).

openapi_domain_all_info_attributes(Fields) ->
  Default = [ {'contact_set', openapi_domain_all_info_attributes_contact_set:openapi_domain_all_info_attributes_contact_set() }
            , {'registry_createdate', binary() }
            , {'registry_expiredate', binary() }
            , {'tld_data', binary() }
            , {'let_expire', binary() }
            , {'auto_renew', binary() }
            , {'sponsoring_rsp', binary() }
            , {'gdpr_consent_status', binary() }
            , {'nameserver_list', list(openapi_domain_name_server:openapi_domain_name_server()) }
            , {'registry_updatedate', binary() }
            , {'affiliate_id', binary() }
            , {'expiredate', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

