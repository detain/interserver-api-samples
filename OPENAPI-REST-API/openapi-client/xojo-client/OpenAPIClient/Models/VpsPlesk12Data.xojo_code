#tag Class
Protected Class VpsPlesk12Data

	#tag Property, Flags = &h0
		admin As OpenAPIClient.Models.VpsPleskLicense
	#tag EndProperty


	#tag Property, Flags = &h0
		pro As OpenAPIClient.Models.VpsPleskLicense
	#tag EndProperty


	#tag Property, Flags = &h0
		host As OpenAPIClient.Models.VpsPleskLicense
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
			Name="admin"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsPleskLicense"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="pro"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsPleskLicense"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="host"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsPleskLicense"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


