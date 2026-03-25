#tag Interface
Protected Interface BackupsApiCallbackHandler
	#tag Method, Flags = &h0
		Sub AddBackupCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.BackupOrderPostResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub CancelBackupCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.CancelBackup200Response)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetBackupInfoCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.Backup)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetBackupInvoicesCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.ChargeInvoiceRows)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetBackupLoginCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.BackupLoginResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetBackupsListCallback(status As OpenAPIClient.OpenAPIClientException, data() As OpenAPIClient.Models.BackupRow)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetBackupsWelcomeEmailCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.SuccessTextResponse)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub GetNewBackupCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.BackupsOrder)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub UpdateBackupInfoCallback(status As OpenAPIClient.OpenAPIClientException)
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h0
		Sub ValidateBackupOrderCallback(status As OpenAPIClient.OpenAPIClientException, Optional data As OpenAPIClient.Models.BackupOrderPutResponse)
		  
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
