#tag Class
Protected Class DomainOrder

	#tag Property, Flags = &h0
		#tag Note
			Cost of Whois Privacy
		#tag EndNote
		whoisPrivacyCost As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		services As OpenAPIClient.Models.DomainOrderServices
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Map of TLDs to domain service IDs.
		#tag EndNote
		tldServices As Object
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
			Name="whoisPrivacyCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="DomainOrderServices"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="tldServices"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Object"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


