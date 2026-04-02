#tag Class
Protected Class Website

	#tag Property, Flags = &h0
		serviceInfo As OpenAPIClient.Models.WebsiteServiceInfo
	#tag EndProperty


	#tag Property, Flags = &h0
		client_links() As OpenAPIClient.Models.WebsiteClientLink
	#tag EndProperty


	#tag Property, Flags = &h0
		billingDetails As OpenAPIClient.Models.WebsiteBillingDetails
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Customer's currency
		#tag EndNote
		custCurrency As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Customer currency symbol
		#tag EndNote
		custCurrencySymbol As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceMaster As OpenAPIClient.Models.WebsiteServiceMaster
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Package information
		#tag EndNote
		package As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceExtra() As Object
	#tag EndProperty


	#tag Property, Flags = &h0
		extraInfoTables As OpenAPIClient.Models.WebsiteExtraInfoTables
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
			Type="WebsiteServiceInfo"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="client_links"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="WebsiteClientLink"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="billingDetails"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="WebsiteBillingDetails"
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
			Name="serviceMaster"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="WebsiteServiceMaster"
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
			Type="Object"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="extraInfoTables"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="WebsiteExtraInfoTables"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


