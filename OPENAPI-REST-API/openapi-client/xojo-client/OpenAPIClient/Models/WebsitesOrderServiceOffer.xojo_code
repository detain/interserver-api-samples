#tag Class
Protected Class WebsitesOrderServiceOffer

	#tag Property, Flags = &h0
		#tag Note
			The ID of the service offer.
		#tag EndNote
		service_offer_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The ID of the associated service.
		#tag EndNote
		service_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The introductory cost of the service offer.
		#tag EndNote
		intro_cost As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The renewal cost of the service offer.
		#tag EndNote
		renewal_cost As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The introductory frequency of the service offer.
		#tag EndNote
		intro_frequency As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The renewal frequency of the service offer.
		#tag EndNote
		renewal_frequency As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Indicates if coupons are allowed (1 for yes, 0 for no).
		#tag EndNote
		allow_coupon As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The module of the service offer.
		#tag EndNote
		service_module As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The creation timestamp of the service offer.
		#tag EndNote
		created_at As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The update timestamp of the service offer.
		#tag EndNote
		updated_at As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The deletion timestamp of the service offer.
		#tag EndNote
		deleted_at As Xoson.O.OptionalString
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
			Name="service_offer_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="service_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="intro_cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="renewal_cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="intro_frequency"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="renewal_frequency"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="allow_coupon"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="service_module"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="created_at"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="updated_at"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="deleted_at"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


