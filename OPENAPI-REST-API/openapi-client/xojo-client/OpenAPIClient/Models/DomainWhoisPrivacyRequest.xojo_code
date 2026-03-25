#tag Class
Protected Class DomainWhoisPrivacyRequest

	#tag Property, Flags = &h0
		#tag Note
			Action to perform (enable or disableCancel).
		#tag EndNote
		func As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			CSRF token if the API requires it for the account.
		#tag EndNote
		csrf_token As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_firstname As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_lastname As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_email As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_address As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_address2 As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_address3 As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_city As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_state As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_zip As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_country As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_phone As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_fax As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_company As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_extra As Xoson.O.OptionalString
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
			Name="func"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="csrf_token"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_firstname"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_lastname"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_email"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_address"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_address2"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_address3"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_city"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_state"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_zip"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_country"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_phone"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_fax"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_company"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_extra"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


