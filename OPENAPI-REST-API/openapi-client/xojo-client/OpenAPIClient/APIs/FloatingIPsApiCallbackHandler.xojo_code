#tag Interface
Protected Interface FloatingIPsApiCallbackHandler
	#tag Method, Flags = &h0
		Sub AddFloatingIpCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.ServiceOrderPostResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub FloatingIpsCancelCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.FloatingIpsCancel200Response)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetFloatingIpInfoCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As Object)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetFloatingIpInvoicesCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.ChargeInvoiceRows)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetFloatingIpsListCallback(status As OpenAPIClient.OpenAPIClientException, data() As Object)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetFloatingIpsWelcomeEmailCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.SuccessTextResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetNewFloatingIpCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As Object)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub PostFloatingIpsChangeIpCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.SuccessTextResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub PutFloatingIpsCallback(status As OpenAPIClient.OpenAPIClientException)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub UpdateFloatingIpInfoCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.SuccessTextResponse)
		  
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
