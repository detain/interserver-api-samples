#tag Interface
Protected Interface TicketsApiCallbackHandler
	#tag Method, Flags = &h0
		Sub AddNewTicketCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.TicketNewResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub CloseTicketCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.CloseTicketResponseSchema)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub DeleteTicketInfoCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.ViewTicketResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetNewTicketCallback(status As OpenAPIClient.OpenAPIClientException)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetTicketInfoCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.ViewTicketResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetTicketsListCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.Tickets)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub PostTicketInfoCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.ViewTicketResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub PostTicketsListCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.Tickets)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub PutTicketInfoCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.ViewTicketResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub ReplyTicketCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.ReplyTicketResponseSchema)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub UpdateTicketInfoCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.UpdateTicketResponseSchema)
		  
		End Sub
	#tag EndMethod




	#tag ViewBehavior
		#tag ViewProperty
			Name="Name"
			Visible=true
			Group="ID"
			Type="String"
		#tag EndViewProperty
		#tag ViewProperty
			Name="Index"
			Visible=true
			Group="ID"
			InitialValue="-2147483648"
			Type="Integer"
		#tag EndViewProperty
		#tag ViewProperty
			Name="Super"
			Visible=true
			Group="ID"
			Type="String"
		#tag EndViewProperty
		#tag ViewProperty
			Name="Left"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
		#tag EndViewProperty
		#tag ViewProperty
			Name="Top"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
		#tag EndViewProperty
	#tag EndViewBehavior
End Interface
#tag EndInterface
