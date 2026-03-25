#tag Class
Protected Class Vps

	#tag Property, Flags = &h0
		serviceInfo As OpenAPIClient.Models.VpsServiceInfo
	#tag EndProperty


	#tag Property, Flags = &h0
		client_links() As OpenAPIClient.Models.VpsClientLink
	#tag EndProperty


	#tag Property, Flags = &h0
		billingDetails As OpenAPIClient.Models.VpsBillingDetails
	#tag EndProperty


	#tag Property, Flags = &h0
		custCurrency As String
	#tag EndProperty


	#tag Property, Flags = &h0
		custCurrencySymbol As String
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceMaster As OpenAPIClient.Models.VpsServiceMaster
	#tag EndProperty


	#tag Property, Flags = &h0
		package As String
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceExtra As OpenAPIClient.Models.VpsServiceExtra
	#tag EndProperty


	#tag Property, Flags = &h0
		extraInfoTables As OpenAPIClient.Models.VpsExtraInfoTables
	#tag EndProperty


	#tag Property, Flags = &h0
		Escapedmodule As String
	#tag EndProperty


	#tag Property, Flags = &h0
		token As String
	#tag EndProperty


	#tag Property, Flags = &h0
		da_link As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		sr_link As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		cp_data As OpenAPIClient.Models.VpsCPData
	#tag EndProperty


	#tag Property, Flags = &h0
		da_data As OpenAPIClient.Models.VpsDAData
	#tag EndProperty


	#tag Property, Flags = &h0
		plesk12_data As OpenAPIClient.Models.VpsPlesk12Data
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceAddons As OpenAPIClient.Models.VpsServiceAddons
	#tag EndProperty


	#tag Property, Flags = &h0
		os_template As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		cpu_graph_data As Variant
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
			Type="VpsServiceInfo"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="client_links"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsClientLink"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="billingDetails"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsBillingDetails"
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
			Type="VpsServiceMaster"
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
			Type="VpsServiceExtra"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="extraInfoTables"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsExtraInfoTables"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Escapedmodule"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="token"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="da_link"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="sr_link"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cp_data"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsCPData"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="da_data"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsDAData"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="plesk12_data"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsPlesk12Data"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceAddons"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsServiceAddons"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="os_template"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cpu_graph_data"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Variant"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


