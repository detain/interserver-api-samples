#tag Class
Protected Class AccountInfoDataCc

	#tag Property, Flags = &h0
		cc As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		cc_exp As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		name As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		address As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		city As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		state As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		zip As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		country As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		maxmind_riskscore As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		maxmind As OpenAPIClient.Models.AccountInfoMaxMindResponse
	#tag EndProperty


	#tag Property, Flags = &h0
		verified As Xoson.O.OptionalBoolean
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
			Name="cc"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cc_exp"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="name"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="address"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="city"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="state"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="zip"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="country"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="maxmind_riskscore"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="maxmind"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="AccountInfoMaxMindResponse"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="verified"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


