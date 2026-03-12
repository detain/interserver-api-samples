-module(openapi_services_info).

-export([encode/1]).

-export_type([openapi_services_info/0]).

-type openapi_services_info() ::
    #{ 'modules' := openapi_modules:openapi_modules(),
       'services' := openapi_services:openapi_services(),
       'serviceTypes' := openapi_service_types:openapi_service_types(),
       'serviceCategories' := openapi_service_categories:openapi_service_categories()
     }.

encode(#{ 'modules' := Modules,
          'services' := Services,
          'serviceTypes' := ServiceTypes,
          'serviceCategories' := ServiceCategories
        }) ->
    #{ 'modules' => Modules,
       'services' => Services,
       'serviceTypes' => ServiceTypes,
       'serviceCategories' => ServiceCategories
     }.
