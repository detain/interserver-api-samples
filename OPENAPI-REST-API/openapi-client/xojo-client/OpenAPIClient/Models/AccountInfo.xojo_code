#tag Class
Protected Class AccountInfo

	#tag Property, Flags = &h0
		custid As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ima As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		data As OpenAPIClient.Models.AccountInfoData
	#tag EndProperty


	#tag Property, Flags = &h0
		ip As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		oauthproviders As OpenAPIClient.Models.AccountInfoOauthproviders
	#tag EndProperty


	#tag Property, Flags = &h0
		oauthconfig As OpenAPIClient.Models.AccountInfoOauthConfig
	#tag EndProperty


	#tag Property, Flags = &h0
		oauthadapters() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		limits As Xoson.O.OptionalAccountInfoLimits
	#tag EndProperty


	#tag Property, Flags = &h0
		language As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		countryCurrencies As Xoson.O.OptionalAccountInfoCountryCurrencies
	#tag EndProperty


	#tag Property, Flags = &h0
		enableLocales As Xoson.O.OptionalBoolean
	#tag EndProperty


	#tag Property, Flags = &h0
		enableCurrencies As Xoson.O.OptionalBoolean
	#tag EndProperty


	#tag Property, Flags = &h0
		gravatar As Xoson.O.OptionalString
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
			Name="custid"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ima"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="data"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="AccountInfoData"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="oauthproviders"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="AccountInfoOauthproviders"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="oauthconfig"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="AccountInfoOauthConfig"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="oauthadapters"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="limits"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="AccountInfoLimits"
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
		#tag ViewProperty
			Name="countryCurrencies"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="AccountInfoCountryCurrencies"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="enableLocales"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="enableCurrencies"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="gravatar"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


