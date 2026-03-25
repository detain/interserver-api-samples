#tag Class
Protected Class DomainAllInfoAttributes

	#tag Property, Flags = &h0
		contact_set As OpenAPIClient.Models.DomainAllInfoAttributesContactSet
	#tag EndProperty


	#tag Property, Flags = &h0
		registry_createdate As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		registry_expiredate As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		tld_data As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		let_expire As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		auto_renew As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		sponsoring_rsp As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		gdpr_consent_status As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		nameserver_list() As OpenAPIClient.Models.DomainNameServer
	#tag EndProperty


	#tag Property, Flags = &h0
		registry_updatedate As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		affiliate_id As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		expiredate As Xoson.O.OptionalString
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
			Name="contact_set"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="DomainAllInfoAttributesContactSet"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="registry_createdate"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="registry_expiredate"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="tld_data"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="let_expire"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="auto_renew"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="sponsoring_rsp"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="gdpr_consent_status"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="nameserver_list"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="DomainNameServer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="registry_updatedate"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="affiliate_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="expiredate"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


