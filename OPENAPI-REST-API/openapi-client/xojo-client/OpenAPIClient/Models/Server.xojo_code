#tag Class
Protected Class Server

	#tag Property, Flags = &h0
		ipmiAuth As Boolean
	#tag EndProperty


	#tag Property, Flags = &h0
		client_links() As OpenAPIClient.Models.ServerClientLink
	#tag EndProperty


	#tag Property, Flags = &h0
		billingDetails As OpenAPIClient.Models.ServerBillingDetails
	#tag EndProperty


	#tag Property, Flags = &h0
		custCurrency As String
	#tag EndProperty


	#tag Property, Flags = &h0
		custCurrencySymbol As String
	#tag EndProperty


	#tag Property, Flags = &h0
		package As String
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceExtra() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		locations As OpenAPIClient.Models.ServerLocations
	#tag EndProperty


	#tag Property, Flags = &h0
		networkInfo As OpenAPIClient.Models.ServerNetworkInfo
	#tag EndProperty


	#tag Property, Flags = &h0
		extraInfoTables As OpenAPIClient.Models.ServerExtraInfoTables
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceInfo As OpenAPIClient.Models.ServerServiceInfo
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
			Name="ipmiAuth"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="client_links"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerClientLink"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="billingDetails"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerBillingDetails"
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
			Name="locations"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerLocations"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="networkInfo"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerNetworkInfo"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="extraInfoTables"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerExtraInfoTables"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceInfo"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerServiceInfo"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


