-module(openapi_tickets_row).

-export([encode/1]).

-export_type([openapi_tickets_row/0]).

-type openapi_tickets_row() ::
    #{ 'title' := binary(),
       'ticketmaskid' := binary(),
       'lastreplier' := binary(),
       'status' := binary(),
       'priority' := binary(),
       'total_replies' := integer(),
       'lastactivity' := binary(),
       'departmenttitle' := binary(),
       'ticketid' := integer(),
       'can_close' := binary(),
       'attachments' := openapi_any_type:openapi_any_type(),
       'status_text' := binary(),
       'checked' := boolean()
     }.

encode(#{ 'title' := Title,
          'ticketmaskid' := Ticketmaskid,
          'lastreplier' := Lastreplier,
          'status' := Status,
          'priority' := Priority,
          'total_replies' := TotalReplies,
          'lastactivity' := Lastactivity,
          'departmenttitle' := Departmenttitle,
          'ticketid' := Ticketid,
          'can_close' := CanClose,
          'attachments' := Attachments,
          'status_text' := StatusText,
          'checked' := Checked
        }) ->
    #{ 'title' => Title,
       'ticketmaskid' => Ticketmaskid,
       'lastreplier' => Lastreplier,
       'status' => Status,
       'priority' => Priority,
       'total_replies' => TotalReplies,
       'lastactivity' => Lastactivity,
       'departmenttitle' => Departmenttitle,
       'ticketid' => Ticketid,
       'can_close' => CanClose,
       'attachments' => Attachments,
       'status_text' => StatusText,
       'checked' => Checked
     }.
