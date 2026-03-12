-module(openapi_domain_tech_contact).

-include("openapi.hrl").

-export([openapi_domain_tech_contact/0]).

-export([openapi_domain_tech_contact/1]).

-export_type([openapi_domain_tech_contact/0]).

-type openapi_domain_tech_contact() ::
  [ {'state', binary() }
  | {'status', binary() }
  | {'org_name', binary() }
  | {'country', binary() }
  | {'postal_code', binary() }
  | {'fax', binary() }
  | {'email', binary() }
  | {'address2', binary() }
  | {'address3', binary() }
  | {'address1', binary() }
  | {'city', binary() }
  | {'phone', binary() }
  | {'first_name', binary() }
  | {'last_name', binary() }
  ].


openapi_domain_tech_contact() ->
    openapi_domain_tech_contact([]).

openapi_domain_tech_contact(Fields) ->
  Default = [ {'state', binary() }
            , {'status', binary() }
            , {'org_name', binary() }
            , {'country', binary() }
            , {'postal_code', binary() }
            , {'fax', binary() }
            , {'email', binary() }
            , {'address2', binary() }
            , {'address3', binary() }
            , {'address1', binary() }
            , {'city', binary() }
            , {'phone', binary() }
            , {'first_name', binary() }
            , {'last_name', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

