#tag Class
Protected Class LoginInfo

	#tag Property, Flags = &h0
		#tag Note
			A base64 encoded image to use for rendering the alternateive captcha.
		#tag EndNote
		captcha As String
	#tag EndProperty


	#tag Property, Flags = &h0
		counts As OpenAPIClient.Models.LoginServiceCounts
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			A logo image url.
		#tag EndNote
		logo As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The desired langauge to render the site with.
		#tag EndNote
		language As Xoson.O.OptionalString
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
			Name="captcha"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="counts"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="LoginServiceCounts"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="logo"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="language"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


