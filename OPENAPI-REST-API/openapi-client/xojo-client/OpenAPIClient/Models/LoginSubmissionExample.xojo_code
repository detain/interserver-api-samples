#tag Class
Protected Class LoginSubmissionExample

	#tag Property, Flags = &h0
		login As String
	#tag EndProperty


	#tag Property, Flags = &h0
		passwd As String
	#tag EndProperty


	#tag Property, Flags = &h0
		remember As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		g_recaptcha_response As OpenAPIClient.Models.LoginSubmissionExampleGRecaptchaResponse
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Two Factor Authentication Response.
		#tag EndNote
		tfa As Xoson.O.OptionalString
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
			Name="login"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="passwd"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="remember"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="g_recaptcha_response"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="LoginSubmissionExampleGRecaptchaResponse"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="tfa"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


