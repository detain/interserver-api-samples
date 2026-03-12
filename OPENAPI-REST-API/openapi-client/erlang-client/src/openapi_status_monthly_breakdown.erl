-module(openapi_status_monthly_breakdown).

-export([encode/1]).

-export_type([openapi_status_monthly_breakdown/0]).

-type openapi_status_monthly_breakdown() ::
    #{ 'default' := openapi_monthly_counts:openapi_monthly_counts(),
       'failed' := openapi_monthly_counts:openapi_monthly_counts(),
       'rejected' := openapi_monthly_counts:openapi_monthly_counts(),
       'pending' := openapi_monthly_counts:openapi_monthly_counts(),
       'locked' := openapi_monthly_counts:openapi_monthly_counts(),
       'paid' := openapi_monthly_counts:openapi_monthly_counts()
     }.

encode(#{ 'default' := Default,
          'failed' := Failed,
          'rejected' := Rejected,
          'pending' := Pending,
          'locked' := Locked,
          'paid' := Paid
        }) ->
    #{ 'default' => Default,
       'failed' => Failed,
       'rejected' => Rejected,
       'pending' => Pending,
       'locked' => Locked,
       'paid' => Paid
     }.
