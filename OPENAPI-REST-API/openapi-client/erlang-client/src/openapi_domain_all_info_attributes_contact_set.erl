-module(openapi_domain_all_info_attributes_contact_set).

-export([encode/1]).

-export_type([openapi_domain_all_info_attributes_contact_set/0]).

-type openapi_domain_all_info_attributes_contact_set() ::
    #{ 'owner' => openapi_domain_owner_contact:openapi_domain_owner_contact(),
       'admin' => openapi_domain_admin_contact:openapi_domain_admin_contact(),
       'tech' => openapi_domain_tech_contact:openapi_domain_tech_contact()
     }.

encode(#{ 'owner' := Owner,
          'admin' := Admin,
          'tech' := Tech
        }) ->
    #{ 'owner' => Owner,
       'admin' => Admin,
       'tech' => Tech
     }.
