-module(openapi_domain_admin_contact).

-include("openapi.hrl").

-export([openapi_domain_admin_contact/0]).

-export([openapi_domain_admin_contact/1]).

-export_type([openapi_domain_admin_contact/0]).

-type openapi_domain_admin_contact() ::
  [ {'status', binary() }
  | {'state', binary() }
  | {'org_name', binary() }
  | {'country', binary() }
  | {'postal_code', binary() }
  | {'email', binary() }
  | {'fax', binary() }
  | {'address2', binary() }
  | {'address3', binary() }
  | {'address1', binary() }
  | {'city', binary() }
  | {'phone', binary() }
  | {'first_name', binary() }
  | {'last_name', binary() }
  ].


openapi_domain_admin_contact() ->
    openapi_domain_admin_contact([]).

openapi_domain_admin_contact(Fields) ->
  Default = [ {'status', binary() }
            , {'state', binary() }
            , {'org_name', binary() }
            , {'country', binary() }
            , {'postal_code', binary() }
            , {'email', binary() }
            , {'fax', binary() }
            , {'address2', binary() }
            , {'address3', binary() }
            , {'address1', binary() }
            , {'city', binary() }
            , {'phone', binary() }
            , {'first_name', binary() }
            , {'last_name', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

