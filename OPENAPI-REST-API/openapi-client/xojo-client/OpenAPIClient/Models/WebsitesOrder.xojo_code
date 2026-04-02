#tag Class
Protected Class WebsitesOrder

	#tag Property, Flags = &h0
		#tag Note
			Step description
		#tag EndNote
		Escapedstep As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Website description
		#tag EndNote
		website As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Period description
		#tag EndNote
		period As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Service offer ID description
		#tag EndNote
		serviceOfferId As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		packages As OpenAPIClient.Models.WebsitesOrderPackages
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Enable domain registering description
		#tag EndNote
		enableDomainRegistering As Boolean
	#tag EndProperty


	#tag Property, Flags = &h0
		jsonServices As OpenAPIClient.Models.WebsitesOrderJsonServices
	#tag EndProperty


	#tag Property, Flags = &h0
		jsonServiceOffers As OpenAPIClient.Models.WebsitesOrderJsonServiceOffers
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceTypes As OpenAPIClient.Models.WebsitesOrderServiceTypes
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceOffers As OpenAPIClient.Models.WebsitesOrderServiceOffers
	#tag EndProperty


	#tag Property, Flags = &h0
		packges As OpenAPIClient.Models.WebsitesOrderPackges
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
			Name="Escapedstep"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="website"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="period"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceOfferId"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="packages"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="WebsitesOrderPackages"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="enableDomainRegistering"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="jsonServices"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="WebsitesOrderJsonServices"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="jsonServiceOffers"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="WebsitesOrderJsonServiceOffers"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceTypes"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="WebsitesOrderServiceTypes"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceOffers"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="WebsitesOrderServiceOffers"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="packges"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="WebsitesOrderPackges"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


