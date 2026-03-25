#tag Class
Protected Class License

	#tag Property, Flags = &h0
		serviceInfo As OpenAPIClient.Models.LicenseServiceInfo
	#tag EndProperty


	#tag Property, Flags = &h0
		client_links() As OpenAPIClient.Models.LicenseClientLink
	#tag EndProperty


	#tag Property, Flags = &h0
		billingDetails As OpenAPIClient.Models.LicenseBillingDetails
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Customer's currency
		#tag EndNote
		custCurrency As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Currency symbol for customer
		#tag EndNote
		custCurrencySymbol As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Package name
		#tag EndNote
		package As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Extra service information
		#tag EndNote
		serviceExtra() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		extraInfoTables As OpenAPIClient.Models.LicenseExtraInfoTables
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Extra service overview information
		#tag EndNote
		service_overview_extra As String
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceType As OpenAPIClient.Models.LicenseServiceType
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			License key
		#tag EndNote
		license_key As String
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
			Type="LicenseServiceInfo"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="client_links"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="LicenseClientLink"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="billingDetails"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="LicenseBillingDetails"
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
			Name="serviceExtra"
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
			Type="LicenseExtraInfoTables"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="service_overview_extra"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceType"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="LicenseServiceType"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="license_key"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


