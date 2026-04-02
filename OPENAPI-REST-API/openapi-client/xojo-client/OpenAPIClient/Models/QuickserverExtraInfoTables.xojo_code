#tag Class
Protected Class QuickserverExtraInfoTables

	#tag Property, Flags = &h0
		ip_info As OpenAPIClient.Models.QuickserverIpInfo
	#tag EndProperty


	#tag Property, Flags = &h0
		addons As OpenAPIClient.Models.QuickserverAddons
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
			Name="ip_info"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="QuickserverIpInfo"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="addons"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="QuickserverAddons"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


