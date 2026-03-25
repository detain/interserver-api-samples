#tag Class
Protected Class DomainProvProcessPending

	#tag Property, Flags = &h0
		_OPS_version As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		response_text As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		protocol As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		response_code As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		action As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		object As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		is_success As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		Escapedattributes As OpenAPIClient.Models.DomainProvProcessPendingAttributes
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
			Name="_OPS_version"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="response_text"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="protocol"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="response_code"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="action"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="object"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="is_success"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Escapedattributes"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="DomainProvProcessPendingAttributes"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


