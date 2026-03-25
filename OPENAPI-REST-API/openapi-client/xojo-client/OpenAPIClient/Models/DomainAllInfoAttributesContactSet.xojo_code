#tag Class
Protected Class DomainAllInfoAttributesContactSet

	#tag Property, Flags = &h0
		owner As OpenAPIClient.Models.DomainOwnerContact
	#tag EndProperty


	#tag Property, Flags = &h0
		admin As OpenAPIClient.Models.DomainAdminContact
	#tag EndProperty


	#tag Property, Flags = &h0
		tech As OpenAPIClient.Models.DomainTechContact
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
			Name="owner"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="DomainOwnerContact"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="admin"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="DomainAdminContact"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="tech"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="DomainTechContact"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


