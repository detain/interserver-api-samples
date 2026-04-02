#tag Class
Protected Class ServerOrderGetResponse

	#tag Property, Flags = &h0
		form_values As OpenAPIClient.Models.FormValues
	#tag EndProperty


	#tag Property, Flags = &h0
		config_ids As OpenAPIClient.Models.ConfigIds
	#tag EndProperty


	#tag Property, Flags = &h0
		cpu As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		cpu_li As Dictionary
	#tag EndProperty


	#tag Property, Flags = &h0
		config_li As OpenAPIClient.Models.ConfigLists
	#tag EndProperty


	#tag Property, Flags = &h0
		frequency As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		currency As String
	#tag EndProperty


	#tag Property, Flags = &h0
		country As String
	#tag EndProperty


	#tag Property, Flags = &h0
		Escapedstep As String
	#tag EndProperty


	#tag Property, Flags = &h0
		field_label As Dictionary
	#tag EndProperty


	#tag Property, Flags = &h0
		cpu_cores As Dictionary
	#tag EndProperty


	#tag Property, Flags = &h0
		currencySymbol As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		custid As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		ima As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		regions() As OpenAPIClient.Models.Region
	#tag EndProperty


	#tag Property, Flags = &h0
		asset_servers() As OpenAPIClient.Models.AssetServer
	#tag EndProperty


	#tag Property, Flags = &h0
		buy_it_servers() As Object
	#tag EndProperty


	#tag Property, Flags = &h0
		display_showmore As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		cust_discount As Xoson.O.OptionalDouble
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
			Name="form_values"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="FormValues"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="config_ids"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ConfigIds"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cpu"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cpu_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Dictionary"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="config_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ConfigLists"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="frequency"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="currency"
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
			Name="Escapedstep"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="field_label"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Dictionary"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cpu_cores"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Dictionary"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="currencySymbol"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="custid"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
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
			Name="regions"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Region"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="asset_servers"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="AssetServer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="buy_it_servers"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Object"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="display_showmore"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cust_discount"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


