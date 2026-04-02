#tag Class
Protected Class HomeServicesDomains

	#tag Property, Flags = &h0
		links As OpenAPIClient.Models.HomeServicesDomainsLinks
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Number of domains.
		#tag EndNote
		count As Xoson.O.OptionalInteger
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
			Name="links"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeServicesDomainsLinks"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="count"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


