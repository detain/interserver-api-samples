#tag Class
Protected Class MailSchema

	#tag Property, Flags = &h0
		serviceInfo As OpenAPIClient.Models.MailServiceInfo
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Links related to the mail service for clients.
		#tag EndNote
		client_links() As OpenAPIClient.Models.MailClientLink
	#tag EndProperty


	#tag Property, Flags = &h0
		billingDetails As OpenAPIClient.Models.MailBillingDetails
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The customer's currency.
		#tag EndNote
		custCurrency As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The currency symbol for the customer.
		#tag EndNote
		custCurrencySymbol As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The package of the mail service.
		#tag EndNote
		package As String
	#tag EndProperty


	#tag Property, Flags = &h0
		extraInfoTables As OpenAPIClient.Models.MailSchemaExtraInfoTables
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceType As OpenAPIClient.Models.MailServiceType
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The usage count of the mail service.
		#tag EndNote
		usage_count As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Extra information for the mail service.
		#tag EndNote
		serviceExtra() As String
	#tag EndProperty





	#tag ViewBehavior
		#tag ViewProperty
			Name="Index"
			Visible=true
			Group="ID"
			InitialValue="-2147483648"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Super"
			Visible=true
			Group="ID"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Left"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Top"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceInfo"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MailServiceInfo"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="client_links"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MailClientLink"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="billingDetails"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MailBillingDetails"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="custCurrency"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="custCurrencySymbol"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="package"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="extraInfoTables"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MailSchemaExtraInfoTables"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceType"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MailServiceType"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="usage_count"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceExtra"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


