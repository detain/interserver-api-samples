#tag Interface
Protected Interface SSLCertificatesApiCallbackHandler
	#tag Method, Flags = &h0
		Sub AddSslCallback(status As OpenAPIClient.OpenAPIClientException)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetNewSslCallback(status As OpenAPIClient.OpenAPIClientException)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetSslInfoCallback(status As OpenAPIClient.OpenAPIClientException)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetSslInvoicesCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.ChargeInvoiceRows)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetSslListCallback(status As OpenAPIClient.OpenAPIClientException)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetSslWelcomeEmailCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.SuccessTextResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub PutSslCallback(status As OpenAPIClient.OpenAPIClientException)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub SslCancelCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.SslCancel200Response)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub UpdateSslInfoCallback(status As OpenAPIClient.OpenAPIClientException)
		  
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
