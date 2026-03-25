#tag Interface
Protected Interface WebhostingApiCallbackHandler
	#tag Method, Flags = &h0
		Sub AddWebsiteCallback(status As OpenAPIClient.OpenAPIClientException)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetNewWebsiteCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.WebsitesOrder)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetWebsiteBuyIpCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.GetWebsiteBuyIp200Response)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetWebsiteInfoCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.Website)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetWebsiteInvoicesCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.ChargeInvoiceRows)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetWebsiteListCallback(status As OpenAPIClient.OpenAPIClientException, data() As OpenAPIClient.Models.WebsiteRow)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetWebsitesBackupsCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As WebsiteBackups)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetWebsitesLoginCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.WebsiteLoginResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetWebsitesWelcomeEmailCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.SuccessTextResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GettWebsiteReverseDnsCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.ReverseDnsEntries)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub PostWebsiteBuyIpCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.PostWebsiteBuyIp200Response)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub PostWebsiteMigrationCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.PostWebsiteMigration200Response)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub PostWebsitesReverseDnsCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.TextResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub PutWebsitesCallback(status As OpenAPIClient.OpenAPIClientException)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub UpdateWebsiteInfoCallback(status As OpenAPIClient.OpenAPIClientException)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub WebhostingCancelCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.WebhostingCancel200Response)
		  
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
