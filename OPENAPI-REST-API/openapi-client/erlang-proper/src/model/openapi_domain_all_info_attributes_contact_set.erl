-module(openapi_domain_all_info_attributes_contact_set).

-include("openapi.hrl").

-export([openapi_domain_all_info_attributes_contact_set/0]).

-export([openapi_domain_all_info_attributes_contact_set/1]).

-export_type([openapi_domain_all_info_attributes_contact_set/0]).

-type openapi_domain_all_info_attributes_contact_set() ::
  [ {'owner', openapi_domain_owner_contact:openapi_domain_owner_contact() }
  | {'admin', openapi_domain_admin_contact:openapi_domain_admin_contact() }
  | {'tech', openapi_domain_tech_contact:openapi_domain_tech_contact() }
  ].


openapi_domain_all_info_attributes_contact_set() ->
    openapi_domain_all_info_attributes_contact_set([]).

openapi_domain_all_info_attributes_contact_set(Fields) ->
  Default = [ {'owner', openapi_domain_owner_contact:openapi_domain_owner_contact() }
            , {'admin', openapi_domain_admin_contact:openapi_domain_admin_contact() }
            , {'tech', openapi_domain_tech_contact:openapi_domain_tech_contact() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

