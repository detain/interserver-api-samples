#tag Class
Protected Class GetScrubIpDetails200Response

	#tag Property, Flags = &h0
		serviceInfo As OpenAPIClient.Models.GetScrubIpDetails200ResponseServiceInfo
	#tag EndProperty


	#tag Property, Flags = &h0
		client_links() As OpenAPIClient.Models.GetScrubIpDetails200ResponseClientLinksInner
	#tag EndProperty


	#tag Property, Flags = &h0
		billingDetails As OpenAPIClient.Models.GetScrubIpDetails200ResponseBillingDetails
	#tag EndProperty


	#tag Property, Flags = &h0
		custCurrency As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		custCurrencySymbol As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		package As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		extraInfoTables As OpenAPIClient.Models.GetScrubIpDetails200ResponseExtraInfoTables
	#tag EndProperty


	#tag Property, Flags = &h0
		filter_firewall As OpenAPIClient.Models.GetScrubIpDetails200ResponseFilterFirewall
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
			Type="GetScrubIpDetails200ResponseServiceInfo"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="client_links"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="GetScrubIpDetails200ResponseClientLinksInner"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="billingDetails"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="GetScrubIpDetails200ResponseBillingDetails"
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
			Type="GetScrubIpDetails200ResponseExtraInfoTables"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="filter_firewall"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="GetScrubIpDetails200ResponseFilterFirewall"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


