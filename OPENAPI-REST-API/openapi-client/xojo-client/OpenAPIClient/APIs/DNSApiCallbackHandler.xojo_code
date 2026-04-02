#tag Interface
Protected Interface DNSApiCallbackHandler
	#tag Method, Flags = &h0
		Sub AddDnsDomainCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.SuccessTextResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub AddDnsRecordCallback(status As OpenAPIClient.OpenAPIClientException)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub DeleteDnsDomainCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.SuccessTextResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub DeleteDnsRecordCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.SuccessTextResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetDnsDomainCallback(status As OpenAPIClient.OpenAPIClientException, data() As OpenAPIClient.Models.DnsRecord)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetDnsListCallback(status As OpenAPIClient.OpenAPIClientException, data() As OpenAPIClient.Models.DnsListItem)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub UpdateDnsRecordCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.SuccessTextResponse)
		  
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
