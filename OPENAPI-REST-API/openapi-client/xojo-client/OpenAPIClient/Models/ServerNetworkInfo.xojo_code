#tag Class
Protected Class ServerNetworkInfo

	#tag Property, Flags = &h0
		#tag Note
			List of VLANs.
		#tag EndNote
		vlans() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			List of IPv6 VLANs.
		#tag EndNote
		vlans6() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		assets As OpenAPIClient.Models.ServerNetworkInfoAssets
	#tag EndProperty


	#tag Property, Flags = &h0
		switchports As OpenAPIClient.Models.ServerNetworkInfoSwitchports
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
			Name="vlans"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vlans6"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="assets"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerNetworkInfoAssets"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="switchports"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerNetworkInfoSwitchports"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


